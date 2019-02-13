
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_ipsla_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ipsla_oper {

Ipsla::Ipsla()
    :
    mpls_data(std::make_shared<Ipsla::MplsData>())
    , responder(std::make_shared<Ipsla::Responder>())
    , operation_data(std::make_shared<Ipsla::OperationData>())
    , application_info(std::make_shared<Ipsla::ApplicationInfo>())
{
    mpls_data->parent = this;
    responder->parent = this;
    operation_data->parent = this;
    application_info->parent = this;

    yang_name = "ipsla"; yang_parent_name = "Cisco-IOS-XR-man-ipsla-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipsla::~Ipsla()
{
}

bool Ipsla::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_data !=  nullptr && mpls_data->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (operation_data !=  nullptr && operation_data->has_data())
	|| (application_info !=  nullptr && application_info->has_data());
}

bool Ipsla::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_data !=  nullptr && mpls_data->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (operation_data !=  nullptr && operation_data->has_operation())
	|| (application_info !=  nullptr && application_info->has_operation());
}

std::string Ipsla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-data")
    {
        if(mpls_data == nullptr)
        {
            mpls_data = std::make_shared<Ipsla::MplsData>();
        }
        return mpls_data;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Ipsla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "operation-data")
    {
        if(operation_data == nullptr)
        {
            operation_data = std::make_shared<Ipsla::OperationData>();
        }
        return operation_data;
    }

    if(child_yang_name == "application-info")
    {
        if(application_info == nullptr)
        {
            application_info = std::make_shared<Ipsla::ApplicationInfo>();
        }
        return application_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_data != nullptr)
    {
        _children["mpls-data"] = mpls_data;
    }

    if(responder != nullptr)
    {
        _children["responder"] = responder;
    }

    if(operation_data != nullptr)
    {
        _children["operation-data"] = operation_data;
    }

    if(application_info != nullptr)
    {
        _children["application-info"] = application_info;
    }

    return _children;
}

void Ipsla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ipsla::clone_ptr() const
{
    return std::make_shared<Ipsla>();
}

std::string Ipsla::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipsla::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipsla::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipsla::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipsla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-data" || name == "responder" || name == "operation-data" || name == "application-info")
        return true;
    return false;
}

Ipsla::MplsData::MplsData()
    :
    lsp_monitors(std::make_shared<Ipsla::MplsData::LspMonitors>())
    , discovery(std::make_shared<Ipsla::MplsData::Discovery>())
{
    lsp_monitors->parent = this;
    discovery->parent = this;

    yang_name = "mpls-data"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::~MplsData()
{
}

bool Ipsla::MplsData::has_data() const
{
    if (is_presence_container) return true;
    return (lsp_monitors !=  nullptr && lsp_monitors->has_data())
	|| (discovery !=  nullptr && discovery->has_data());
}

bool Ipsla::MplsData::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_monitors !=  nullptr && lsp_monitors->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string Ipsla::MplsData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-monitors")
    {
        if(lsp_monitors == nullptr)
        {
            lsp_monitors = std::make_shared<Ipsla::MplsData::LspMonitors>();
        }
        return lsp_monitors;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Ipsla::MplsData::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_monitors != nullptr)
    {
        _children["lsp-monitors"] = lsp_monitors;
    }

    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    return _children;
}

void Ipsla::MplsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-monitors" || name == "discovery")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitors()
    :
    lsp_monitor(this, {"monitor_id"})
{

    yang_name = "lsp-monitors"; yang_parent_name = "mpls-data"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::LspMonitors::~LspMonitors()
{
}

bool Ipsla::MplsData::LspMonitors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_monitor.len(); index++)
    {
        if(lsp_monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsData::LspMonitors::has_operation() const
{
    for (std::size_t index=0; index<lsp_monitor.len(); index++)
    {
        if(lsp_monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsData::LspMonitors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::LspMonitors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-monitors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-monitor")
    {
        auto ent_ = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor>();
        ent_->parent = this;
        lsp_monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::LspMonitors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::LspMonitors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-monitor")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::LspMonitor()
    :
    monitor_id{YType::uint32, "monitor-id"}
        ,
    state(std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::State>())
    , operations(std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations>())
    , scan_queues(std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues>())
{
    state->parent = this;
    operations->parent = this;
    scan_queues->parent = this;

    yang_name = "lsp-monitor"; yang_parent_name = "lsp-monitors"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::~LspMonitor()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::has_data() const
{
    if (is_presence_container) return true;
    return monitor_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (operations !=  nullptr && operations->has_data())
	|| (scan_queues !=  nullptr && scan_queues->has_data());
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (operations !=  nullptr && operations->has_operation())
	|| (scan_queues !=  nullptr && scan_queues->has_operation());
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/lsp-monitors/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-monitor";
    ADD_KEY_TOKEN(monitor_id, "monitor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_id.is_set || is_set(monitor_id.yfilter)) leaf_name_data.push_back(monitor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::State>();
        }
        return state;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "scan-queues")
    {
        if(scan_queues == nullptr)
        {
            scan_queues = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues>();
        }
        return scan_queues;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(operations != nullptr)
    {
        _children["operations"] = operations;
    }

    if(scan_queues != nullptr)
    {
        _children["scan-queues"] = scan_queues;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-id")
    {
        monitor_id = value;
        monitor_id.value_namespace = name_space;
        monitor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-id")
    {
        monitor_id.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "operations" || name == "scan-queues" || name == "monitor-id")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::State::State()
    :
    scan_remaining{YType::uint32, "scan-remaining"},
    delete_scan_remaining{YType::uint32, "delete-scan-remaining"},
    rediscovery_remaining{YType::uint32, "rediscovery-remaining"},
    lpd_compeletion_time{YType::uint32, "lpd-compeletion-time"}
{

    yang_name = "state"; yang_parent_name = "lsp-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::State::~State()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::State::has_data() const
{
    if (is_presence_container) return true;
    return scan_remaining.is_set
	|| delete_scan_remaining.is_set
	|| rediscovery_remaining.is_set
	|| lpd_compeletion_time.is_set;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scan_remaining.yfilter)
	|| ydk::is_set(delete_scan_remaining.yfilter)
	|| ydk::is_set(rediscovery_remaining.yfilter)
	|| ydk::is_set(lpd_compeletion_time.yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scan_remaining.is_set || is_set(scan_remaining.yfilter)) leaf_name_data.push_back(scan_remaining.get_name_leafdata());
    if (delete_scan_remaining.is_set || is_set(delete_scan_remaining.yfilter)) leaf_name_data.push_back(delete_scan_remaining.get_name_leafdata());
    if (rediscovery_remaining.is_set || is_set(rediscovery_remaining.yfilter)) leaf_name_data.push_back(rediscovery_remaining.get_name_leafdata());
    if (lpd_compeletion_time.is_set || is_set(lpd_compeletion_time.yfilter)) leaf_name_data.push_back(lpd_compeletion_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scan-remaining")
    {
        scan_remaining = value;
        scan_remaining.value_namespace = name_space;
        scan_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-scan-remaining")
    {
        delete_scan_remaining = value;
        delete_scan_remaining.value_namespace = name_space;
        delete_scan_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rediscovery-remaining")
    {
        rediscovery_remaining = value;
        rediscovery_remaining.value_namespace = name_space;
        rediscovery_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpd-compeletion-time")
    {
        lpd_compeletion_time = value;
        lpd_compeletion_time.value_namespace = name_space;
        lpd_compeletion_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scan-remaining")
    {
        scan_remaining.yfilter = yfilter;
    }
    if(value_path == "delete-scan-remaining")
    {
        delete_scan_remaining.yfilter = yfilter;
    }
    if(value_path == "rediscovery-remaining")
    {
        rediscovery_remaining.yfilter = yfilter;
    }
    if(value_path == "lpd-compeletion-time")
    {
        lpd_compeletion_time.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-remaining" || name == "delete-scan-remaining" || name == "rediscovery-remaining" || name == "lpd-compeletion-time")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operations()
    :
    operation_(this, {"operation_id"})
{

    yang_name = "operations"; yang_parent_name = "lsp-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::~Operations()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operation_.len(); index++)
    {
        if(operation_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::has_operation() const
{
    for (std::size_t index=0; index<operation_.len(); index++)
    {
        if(operation_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation")
    {
        auto ent_ = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation>();
        ent_->parent = this;
        operation_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operation_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::Operation()
    :
    operation_id{YType::uint32, "operation-id"}
        ,
    state(std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State>())
    , lpd_paths(std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths>())
{
    state->parent = this;
    lpd_paths->parent = this;

    yang_name = "operation"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::~Operation()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::has_data() const
{
    if (is_presence_container) return true;
    return operation_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (lpd_paths !=  nullptr && lpd_paths->has_data());
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (lpd_paths !=  nullptr && lpd_paths->has_operation());
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation";
    ADD_KEY_TOKEN(operation_id, "operation-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State>();
        }
        return state;
    }

    if(child_yang_name == "lpd-paths")
    {
        if(lpd_paths == nullptr)
        {
            lpd_paths = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths>();
        }
        return lpd_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(lpd_paths != nullptr)
    {
        _children["lpd-paths"] = lpd_paths;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "lpd-paths" || name == "operation-id")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::State()
    :
    target_address{YType::str, "target-address"},
    target_mask{YType::uint32, "target-mask"},
    group_status{YType::enumeration, "group-status"},
    operation_time{YType::uint64, "operation-time"}
{

    yang_name = "state"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::~State()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::has_data() const
{
    if (is_presence_container) return true;
    return target_address.is_set
	|| target_mask.is_set
	|| group_status.is_set
	|| operation_time.is_set;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(target_mask.yfilter)
	|| ydk::is_set(group_status.yfilter)
	|| ydk::is_set(operation_time.yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_mask.is_set || is_set(target_mask.yfilter)) leaf_name_data.push_back(target_mask.get_name_leafdata());
    if (group_status.is_set || is_set(group_status.yfilter)) leaf_name_data.push_back(group_status.get_name_leafdata());
    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mask")
    {
        target_mask = value;
        target_mask.value_namespace = name_space;
        target_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-status")
    {
        group_status = value;
        group_status.value_namespace = name_space;
        group_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "target-mask")
    {
        target_mask.yfilter = yfilter;
    }
    if(value_path == "group-status")
    {
        group_status.yfilter = yfilter;
    }
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "target-mask" || name == "group-status" || name == "operation-time")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPaths()
    :
    lpd_path(this, {"path_index"})
{

    yang_name = "lpd-paths"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::~LpdPaths()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::has_operation() const
{
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpd-path")
    {
        auto ent_ = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath>();
        ent_->parent = this;
        lpd_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lpd_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpd-path")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::LpdPath()
    :
    path_index{YType::uint32, "path-index"},
    path_status{YType::enumeration, "path-status"},
    operation_time{YType::uint64, "operation-time"},
    response_time{YType::uint32, "response-time"},
    success_count{YType::uint32, "success-count"},
    failure_count{YType::uint32, "failure-count"}
        ,
    path_id(std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId>())
{
    path_id->parent = this;

    yang_name = "lpd-path"; yang_parent_name = "lpd-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::~LpdPath()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| path_status.is_set
	|| operation_time.is_set
	|| response_time.is_set
	|| success_count.is_set
	|| failure_count.is_set
	|| (path_id !=  nullptr && path_id->has_data());
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(success_count.yfilter)
	|| ydk::is_set(failure_count.yfilter)
	|| (path_id !=  nullptr && path_id->has_operation());
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-path";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (success_count.is_set || is_set(success_count.yfilter)) leaf_name_data.push_back(success_count.get_name_leafdata());
    if (failure_count.is_set || is_set(failure_count.yfilter)) leaf_name_data.push_back(failure_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-id")
    {
        if(path_id == nullptr)
        {
            path_id = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId>();
        }
        return path_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_id != nullptr)
    {
        _children["path-id"] = path_id;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-count")
    {
        success_count = value;
        success_count.value_namespace = name_space;
        success_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-count")
    {
        failure_count = value;
        failure_count.value_namespace = name_space;
        failure_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "success-count")
    {
        success_count.yfilter = yfilter;
    }
    if(value_path == "failure-count")
    {
        failure_count.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-index" || name == "path-status" || name == "operation-time" || name == "response-time" || name == "success-count" || name == "failure-count")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::PathId()
    :
    lsp_selector{YType::str, "lsp-selector"},
    output_interface{YType::str, "output-interface"},
    nexthop_address{YType::str, "nexthop-address"},
    downstream_label{YType::uint32, "downstream-label"}
{

    yang_name = "path-id"; yang_parent_name = "lpd-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::~PathId()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_selector.is_set
	|| output_interface.is_set
	|| nexthop_address.is_set;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::has_operation() const
{
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter)
	|| ydk::is_set(downstream_label.yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    auto downstream_label_name_datas = downstream_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), downstream_label_name_datas.begin(), downstream_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.append(value);
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::Operations::Operation::LpdPaths::LpdPath::PathId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selector" || name == "output-interface" || name == "nexthop-address" || name == "downstream-label")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueues()
    :
    scan_queue(this, {"address"})
{

    yang_name = "scan-queues"; yang_parent_name = "lsp-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::~ScanQueues()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<scan_queue.len(); index++)
    {
        if(scan_queue[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::has_operation() const
{
    for (std::size_t index=0; index<scan_queue.len(); index++)
    {
        if(scan_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-queues";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-queue")
    {
        auto ent_ = std::make_shared<Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue>();
        ent_->parent = this;
        scan_queue.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : scan_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-queue")
        return true;
    return false;
}

Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::ScanQueue()
    :
    address{YType::str, "address"},
    target_address{YType::str, "target-address"},
    target_mask{YType::uint32, "target-mask"},
    entry{YType::enumeration, "entry"}
{

    yang_name = "scan-queue"; yang_parent_name = "scan-queues"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::~ScanQueue()
{
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| target_address.is_set
	|| target_mask.is_set
	|| entry.is_set;
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(target_mask.yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-queue";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_mask.is_set || is_set(target_mask.yfilter)) leaf_name_data.push_back(target_mask.get_name_leafdata());
    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mask")
    {
        target_mask = value;
        target_mask.value_namespace = name_space;
        target_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "target-mask")
    {
        target_mask.yfilter = yfilter;
    }
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::LspMonitors::LspMonitor::ScanQueues::ScanQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "target-address" || name == "target-mask" || name == "entry")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Discovery()
    :
    vpn(std::make_shared<Ipsla::MplsData::Discovery::Vpn>())
{
    vpn->parent = this;

    yang_name = "discovery"; yang_parent_name = "mpls-data"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::Discovery::~Discovery()
{
}

bool Ipsla::MplsData::Discovery::has_data() const
{
    if (is_presence_container) return true;
    return (vpn !=  nullptr && vpn->has_data());
}

bool Ipsla::MplsData::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Ipsla::MplsData::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Ipsla::MplsData::Discovery::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpn != nullptr)
    {
        _children["vpn"] = vpn;
    }

    return _children;
}

void Ipsla::MplsData::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::Vpn()
    :
    state(std::make_shared<Ipsla::MplsData::Discovery::Vpn::State>())
    , nexthops(std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops>())
{
    state->parent = this;
    nexthops->parent = this;

    yang_name = "vpn"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::Discovery::Vpn::~Vpn()
{
}

bool Ipsla::MplsData::Discovery::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data())
	|| (nexthops !=  nullptr && nexthops->has_data());
}

bool Ipsla::MplsData::Discovery::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (nexthops !=  nullptr && nexthops->has_operation());
}

std::string Ipsla::MplsData::Discovery::Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::Discovery::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ipsla::MplsData::Discovery::Vpn::State>();
        }
        return state;
    }

    if(child_yang_name == "nexthops")
    {
        if(nexthops == nullptr)
        {
            nexthops = std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops>();
        }
        return nexthops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(nexthops != nullptr)
    {
        _children["nexthops"] = nexthops;
    }

    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::Discovery::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::Discovery::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "nexthops")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::State::State()
    :
    refresh_remaining{YType::uint32, "refresh-remaining"}
{

    yang_name = "state"; yang_parent_name = "vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::Discovery::Vpn::State::~State()
{
}

bool Ipsla::MplsData::Discovery::Vpn::State::has_data() const
{
    if (is_presence_container) return true;
    return refresh_remaining.is_set;
}

bool Ipsla::MplsData::Discovery::Vpn::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_remaining.yfilter);
}

std::string Ipsla::MplsData::Discovery::Vpn::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/discovery/vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::Discovery::Vpn::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_remaining.is_set || is_set(refresh_remaining.yfilter)) leaf_name_data.push_back(refresh_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-remaining")
    {
        refresh_remaining = value;
        refresh_remaining.value_namespace = name_space;
        refresh_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::Discovery::Vpn::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-remaining")
    {
        refresh_remaining.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::Discovery::Vpn::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-remaining")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthops()
    :
    nexthop(this, {"address"})
{

    yang_name = "nexthops"; yang_parent_name = "vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::~Nexthops()
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::has_operation() const
{
    for (std::size_t index=0; index<nexthop.len(); index++)
    {
        if(nexthop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/discovery/vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::Nexthops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::Nexthops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        auto ent_ = std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop>();
        ent_->parent = this;
        nexthop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::Nexthops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Nexthop()
    :
    address{YType::str, "address"}
        ,
    vrfs(std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs>())
    , prefix(std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix>())
{
    vrfs->parent = this;
    prefix->parent = this;

    yang_name = "nexthop"; yang_parent_name = "nexthops"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::~Nexthop()
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/mpls-data/discovery/vpn/nexthops/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "prefix" || name == "address")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::~Vrfs()
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix_count{YType::uint32, "prefix-count"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::~Vrf()
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| prefix_count.is_set;
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix_count.yfilter);
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix_count.is_set || is_set(prefix_count.yfilter)) leaf_name_data.push_back(prefix_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-count")
    {
        prefix_count = value;
        prefix_count.value_namespace = name_space;
        prefix_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix-count")
    {
        prefix_count.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "prefix-count")
        return true;
    return false;
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::Prefix()
    :
    target_address{YType::str, "target-address"},
    target_mask{YType::uint32, "target-mask"}
{

    yang_name = "prefix"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::~Prefix()
{
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return target_address.is_set
	|| target_mask.is_set;
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(target_mask.yfilter);
}

std::string Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_mask.is_set || is_set(target_mask.yfilter)) leaf_name_data.push_back(target_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mask")
    {
        target_mask = value;
        target_mask.value_namespace = name_space;
        target_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "target-mask")
    {
        target_mask.yfilter = yfilter;
    }
}

bool Ipsla::MplsData::Discovery::Vpn::Nexthops::Nexthop::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "target-mask")
        return true;
    return false;
}

Ipsla::Responder::Responder()
    :
    ports(std::make_shared<Ipsla::Responder::Ports>())
{
    ports->parent = this;

    yang_name = "responder"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::~Responder()
{
}

bool Ipsla::Responder::has_data() const
{
    if (is_presence_container) return true;
    return (ports !=  nullptr && ports->has_data());
}

bool Ipsla::Responder::has_operation() const
{
    return is_set(yfilter)
	|| (ports !=  nullptr && ports->has_operation());
}

std::string Ipsla::Responder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        if(ports == nullptr)
        {
            ports = std::make_shared<Ipsla::Responder::Ports>();
        }
        return ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ports != nullptr)
    {
        _children["ports"] = ports;
    }

    return _children;
}

void Ipsla::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports")
        return true;
    return false;
}

Ipsla::Responder::Ports::Ports()
    :
    port(this, {"port"})
{

    yang_name = "ports"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::Ports::~Ports()
{
}

bool Ipsla::Responder::Ports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::Responder::Ports::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::Responder::Ports::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::Ports::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::Responder::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::Responder::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Ipsla::Responder::Ports::Port::Port()
    :
    port{YType::uint16, "port"},
    port_xr{YType::uint16, "port-xr"},
    local_address{YType::str, "local-address"},
    num_probes{YType::uint32, "num-probes"},
    ctrl_probes{YType::uint32, "ctrl-probes"},
    permanent{YType::boolean, "permanent"},
    discard_on{YType::boolean, "discard-on"},
    pd_time_stamp_failed{YType::boolean, "pd-time-stamp-failed"},
    is_ipsla{YType::boolean, "is-ipsla"},
    drop_counter{YType::uint32, "drop-counter"},
    socket{YType::int32, "socket"}
        ,
    sender(this, {})
{

    yang_name = "port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::Responder::Ports::Port::~Port()
{
}

bool Ipsla::Responder::Ports::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender.len(); index++)
    {
        if(sender[index]->has_data())
            return true;
    }
    return port.is_set
	|| port_xr.is_set
	|| local_address.is_set
	|| num_probes.is_set
	|| ctrl_probes.is_set
	|| permanent.is_set
	|| discard_on.is_set
	|| pd_time_stamp_failed.is_set
	|| is_ipsla.is_set
	|| drop_counter.is_set
	|| socket.is_set;
}

bool Ipsla::Responder::Ports::Port::has_operation() const
{
    for (std::size_t index=0; index<sender.len(); index++)
    {
        if(sender[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(port_xr.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(num_probes.yfilter)
	|| ydk::is_set(ctrl_probes.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(discard_on.yfilter)
	|| ydk::is_set(pd_time_stamp_failed.yfilter)
	|| ydk::is_set(is_ipsla.yfilter)
	|| ydk::is_set(drop_counter.yfilter)
	|| ydk::is_set(socket.yfilter);
}

std::string Ipsla::Responder::Ports::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/responder/ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::Responder::Ports::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Ports::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.yfilter)) leaf_name_data.push_back(port_xr.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (num_probes.is_set || is_set(num_probes.yfilter)) leaf_name_data.push_back(num_probes.get_name_leafdata());
    if (ctrl_probes.is_set || is_set(ctrl_probes.yfilter)) leaf_name_data.push_back(ctrl_probes.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (discard_on.is_set || is_set(discard_on.yfilter)) leaf_name_data.push_back(discard_on.get_name_leafdata());
    if (pd_time_stamp_failed.is_set || is_set(pd_time_stamp_failed.yfilter)) leaf_name_data.push_back(pd_time_stamp_failed.get_name_leafdata());
    if (is_ipsla.is_set || is_set(is_ipsla.yfilter)) leaf_name_data.push_back(is_ipsla.get_name_leafdata());
    if (drop_counter.is_set || is_set(drop_counter.yfilter)) leaf_name_data.push_back(drop_counter.get_name_leafdata());
    if (socket.is_set || is_set(socket.yfilter)) leaf_name_data.push_back(socket.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Ports::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender")
    {
        auto ent_ = std::make_shared<Ipsla::Responder::Ports::Port::Sender>();
        ent_->parent = this;
        sender.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Ports::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::Responder::Ports::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
        port_xr.value_namespace = name_space;
        port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-probes")
    {
        num_probes = value;
        num_probes.value_namespace = name_space;
        num_probes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl-probes")
    {
        ctrl_probes = value;
        ctrl_probes.value_namespace = name_space;
        ctrl_probes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-on")
    {
        discard_on = value;
        discard_on.value_namespace = name_space;
        discard_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pd-time-stamp-failed")
    {
        pd_time_stamp_failed = value;
        pd_time_stamp_failed.value_namespace = name_space;
        pd_time_stamp_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsla")
    {
        is_ipsla = value;
        is_ipsla.value_namespace = name_space;
        is_ipsla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-counter")
    {
        drop_counter = value;
        drop_counter.value_namespace = name_space;
        drop_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket")
    {
        socket = value;
        socket.value_namespace = name_space;
        socket.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::Ports::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "port-xr")
    {
        port_xr.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "num-probes")
    {
        num_probes.yfilter = yfilter;
    }
    if(value_path == "ctrl-probes")
    {
        ctrl_probes.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "discard-on")
    {
        discard_on.yfilter = yfilter;
    }
    if(value_path == "pd-time-stamp-failed")
    {
        pd_time_stamp_failed.yfilter = yfilter;
    }
    if(value_path == "is-ipsla")
    {
        is_ipsla.yfilter = yfilter;
    }
    if(value_path == "drop-counter")
    {
        drop_counter.yfilter = yfilter;
    }
    if(value_path == "socket")
    {
        socket.yfilter = yfilter;
    }
}

bool Ipsla::Responder::Ports::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender" || name == "port" || name == "port-xr" || name == "local-address" || name == "num-probes" || name == "ctrl-probes" || name == "permanent" || name == "discard-on" || name == "pd-time-stamp-failed" || name == "is-ipsla" || name == "drop-counter" || name == "socket")
        return true;
    return false;
}

Ipsla::Responder::Ports::Port::Sender::Sender()
    :
    ip_address{YType::uint32, "ip-address"},
    port{YType::uint16, "port"},
    last_recv_time{YType::uint64, "last-recv-time"}
{

    yang_name = "sender"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::Responder::Ports::Port::Sender::~Sender()
{
}

bool Ipsla::Responder::Ports::Port::Sender::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| port.is_set
	|| last_recv_time.is_set;
}

bool Ipsla::Responder::Ports::Port::Sender::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(last_recv_time.yfilter);
}

std::string Ipsla::Responder::Ports::Port::Sender::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::Responder::Ports::Port::Sender::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (last_recv_time.is_set || is_set(last_recv_time.yfilter)) leaf_name_data.push_back(last_recv_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::Responder::Ports::Port::Sender::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::Responder::Ports::Port::Sender::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::Responder::Ports::Port::Sender::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-recv-time")
    {
        last_recv_time = value;
        last_recv_time.value_namespace = name_space;
        last_recv_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::Responder::Ports::Port::Sender::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "last-recv-time")
    {
        last_recv_time.yfilter = yfilter;
    }
}

bool Ipsla::Responder::Ports::Port::Sender::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "port" || name == "last-recv-time")
        return true;
    return false;
}

Ipsla::OperationData::OperationData()
    :
    operations(std::make_shared<Ipsla::OperationData::Operations>())
{
    operations->parent = this;

    yang_name = "operation-data"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::OperationData::~OperationData()
{
}

bool Ipsla::OperationData::has_data() const
{
    if (is_presence_container) return true;
    return (operations !=  nullptr && operations->has_data());
}

bool Ipsla::OperationData::has_operation() const
{
    return is_set(yfilter)
	|| (operations !=  nullptr && operations->has_operation());
}

std::string Ipsla::OperationData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::OperationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<Ipsla::OperationData::Operations>();
        }
        return operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operations != nullptr)
    {
        _children["operations"] = operations;
    }

    return _children;
}

void Ipsla::OperationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operations")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operations()
    :
    operation_(this, {"operation_id"})
{

    yang_name = "operations"; yang_parent_name = "operation-data"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::OperationData::Operations::~Operations()
{
}

bool Ipsla::OperationData::Operations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operation_.len(); index++)
    {
        if(operation_[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::has_operation() const
{
    for (std::size_t index=0; index<operation_.len(); index++)
    {
        if(operation_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/operation-data/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::OperationData::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation>();
        ent_->parent = this;
        operation_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operation_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Operation()
    :
    operation_id{YType::uint32, "operation-id"}
        ,
    common(std::make_shared<Ipsla::OperationData::Operations::Operation::Common>())
    , lpd(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd>())
    , history(std::make_shared<Ipsla::OperationData::Operations::Operation::History>())
    , statistics(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics>())
{
    common->parent = this;
    lpd->parent = this;
    history->parent = this;
    statistics->parent = this;

    yang_name = "operation"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::OperationData::Operations::Operation::~Operation()
{
}

bool Ipsla::OperationData::Operations::Operation::has_data() const
{
    if (is_presence_container) return true;
    return operation_id.is_set
	|| (common !=  nullptr && common->has_data())
	|| (lpd !=  nullptr && lpd->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipsla::OperationData::Operations::Operation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (lpd !=  nullptr && lpd->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/operation-data/operations/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::OperationData::Operations::Operation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation";
    ADD_KEY_TOKEN(operation_id, "operation-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ipsla::OperationData::Operations::Operation::Common>();
        }
        return common;
    }

    if(child_yang_name == "lpd")
    {
        if(lpd == nullptr)
        {
            lpd = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd>();
        }
        return lpd;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ipsla::OperationData::Operations::Operation::History>();
        }
        return history;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common != nullptr)
    {
        _children["common"] = common;
    }

    if(lpd != nullptr)
    {
        _children["lpd"] = lpd;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "lpd" || name == "history" || name == "statistics" || name == "operation-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Common::Common()
    :
    operational_state(std::make_shared<Ipsla::OperationData::Operations::Operation::Common::OperationalState>())
{
    operational_state->parent = this;

    yang_name = "common"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Common::~Common()
{
}

bool Ipsla::OperationData::Operations::Operation::Common::has_data() const
{
    if (is_presence_container) return true;
    return (operational_state !=  nullptr && operational_state->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Common::has_operation() const
{
    return is_set(yfilter)
	|| (operational_state !=  nullptr && operational_state->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-state")
    {
        if(operational_state == nullptr)
        {
            operational_state = std::make_shared<Ipsla::OperationData::Operations::Operation::Common::OperationalState>();
        }
        return operational_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operational_state != nullptr)
    {
        _children["operational-state"] = operational_state;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-state")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Common::OperationalState::OperationalState()
    :
    modification_time{YType::uint64, "modification-time"},
    start_time{YType::uint64, "start-time"},
    attempt_count{YType::uint32, "attempt-count"},
    skipped_count{YType::uint32, "skipped-count"},
    life_remaining{YType::uint32, "life-remaining"},
    frequency{YType::uint32, "frequency"},
    recurring{YType::boolean, "recurring"},
    operational_state{YType::enumeration, "operational-state"},
    flags{YType::uint32, "flags"},
    local_port{YType::uint16, "local-port"},
    unexpected_packets{YType::uint32, "unexpected-packets"},
    unexpected_control_packets{YType::uint32, "unexpected-control-packets"},
    operation_time{YType::uint64, "operation-time"}
{

    yang_name = "operational-state"; yang_parent_name = "common"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Common::OperationalState::~OperationalState()
{
}

bool Ipsla::OperationData::Operations::Operation::Common::OperationalState::has_data() const
{
    if (is_presence_container) return true;
    return modification_time.is_set
	|| start_time.is_set
	|| attempt_count.is_set
	|| skipped_count.is_set
	|| life_remaining.is_set
	|| frequency.is_set
	|| recurring.is_set
	|| operational_state.is_set
	|| flags.is_set
	|| local_port.is_set
	|| unexpected_packets.is_set
	|| unexpected_control_packets.is_set
	|| operation_time.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Common::OperationalState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modification_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(attempt_count.yfilter)
	|| ydk::is_set(skipped_count.yfilter)
	|| ydk::is_set(life_remaining.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(unexpected_packets.yfilter)
	|| ydk::is_set(unexpected_control_packets.yfilter)
	|| ydk::is_set(operation_time.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Common::OperationalState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Common::OperationalState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modification_time.is_set || is_set(modification_time.yfilter)) leaf_name_data.push_back(modification_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (attempt_count.is_set || is_set(attempt_count.yfilter)) leaf_name_data.push_back(attempt_count.get_name_leafdata());
    if (skipped_count.is_set || is_set(skipped_count.yfilter)) leaf_name_data.push_back(skipped_count.get_name_leafdata());
    if (life_remaining.is_set || is_set(life_remaining.yfilter)) leaf_name_data.push_back(life_remaining.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (unexpected_packets.is_set || is_set(unexpected_packets.yfilter)) leaf_name_data.push_back(unexpected_packets.get_name_leafdata());
    if (unexpected_control_packets.is_set || is_set(unexpected_control_packets.yfilter)) leaf_name_data.push_back(unexpected_control_packets.get_name_leafdata());
    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Common::OperationalState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Common::OperationalState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Common::OperationalState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modification-time")
    {
        modification_time = value;
        modification_time.value_namespace = name_space;
        modification_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attempt-count")
    {
        attempt_count = value;
        attempt_count.value_namespace = name_space;
        attempt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-count")
    {
        skipped_count = value;
        skipped_count.value_namespace = name_space;
        skipped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-remaining")
    {
        life_remaining = value;
        life_remaining.value_namespace = name_space;
        life_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-packets")
    {
        unexpected_packets = value;
        unexpected_packets.value_namespace = name_space;
        unexpected_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-control-packets")
    {
        unexpected_control_packets = value;
        unexpected_control_packets.value_namespace = name_space;
        unexpected_control_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Common::OperationalState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modification-time")
    {
        modification_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "attempt-count")
    {
        attempt_count.yfilter = yfilter;
    }
    if(value_path == "skipped-count")
    {
        skipped_count.yfilter = yfilter;
    }
    if(value_path == "life-remaining")
    {
        life_remaining.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "unexpected-packets")
    {
        unexpected_packets.yfilter = yfilter;
    }
    if(value_path == "unexpected-control-packets")
    {
        unexpected_control_packets.yfilter = yfilter;
    }
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Common::OperationalState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modification-time" || name == "start-time" || name == "attempt-count" || name == "skipped-count" || name == "life-remaining" || name == "frequency" || name == "recurring" || name == "operational-state" || name == "flags" || name == "local-port" || name == "unexpected-packets" || name == "unexpected-control-packets" || name == "operation-time")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Lpd()
    :
    statistics(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics>())
    , status(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status>())
{
    statistics->parent = this;
    status->parent = this;

    yang_name = "lpd"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::~Lpd()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "status")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Statistics()
    :
    latest(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest>())
    , aggregated(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated>())
{
    latest->parent = this;
    aggregated->parent = this;

    yang_name = "statistics"; yang_parent_name = "lpd"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::~Statistics()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (latest !=  nullptr && latest->has_data())
	|| (aggregated !=  nullptr && aggregated->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (latest !=  nullptr && latest->has_operation())
	|| (aggregated !=  nullptr && aggregated->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "latest")
    {
        if(latest == nullptr)
        {
            latest = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest>();
        }
        return latest;
    }

    if(child_yang_name == "aggregated")
    {
        if(aggregated == nullptr)
        {
            aggregated = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated>();
        }
        return aggregated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(latest != nullptr)
    {
        _children["latest"] = latest;
    }

    if(aggregated != nullptr)
    {
        _children["aggregated"] = aggregated;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "latest" || name == "aggregated")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Latest()
    :
    target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target>())
{
    target->parent = this;

    yang_name = "latest"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::~Latest()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::has_data() const
{
    if (is_presence_container) return true;
    return (target !=  nullptr && target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::has_operation() const
{
    return is_set(yfilter)
	|| (target !=  nullptr && target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target != nullptr)
    {
        _children["target"] = target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::Target()
    :
    start_time{YType::uint64, "start-time"},
    return_code{YType::enumeration, "return-code"},
    completion_time_count{YType::uint32, "completion-time-count"},
    completion_time{YType::uint32, "completion-time"},
    min_completion_time{YType::uint32, "min-completion-time"},
    max_completion_time{YType::uint32, "max-completion-time"},
    sum_completion_time{YType::uint32, "sum-completion-time"},
    path_count{YType::uint32, "path-count"},
    min_path_count{YType::uint32, "min-path-count"},
    max_path_count{YType::uint32, "max-path-count"},
    ok_count{YType::uint32, "ok-count"},
    no_path_count{YType::uint32, "no-path-count"},
    all_paths_broken_count{YType::uint32, "all-paths-broken-count"},
    all_paths_unexplorable_count{YType::uint32, "all-paths-unexplorable-count"},
    all_paths_broken_or_unexplorable_count{YType::uint32, "all-paths-broken-or-unexplorable-count"},
    timeout_count{YType::uint32, "timeout-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    unknown_count{YType::uint32, "unknown-count"}
        ,
    target_address(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress>())
{
    target_address->parent = this;

    yang_name = "target"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::~Target()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| return_code.is_set
	|| completion_time_count.is_set
	|| completion_time.is_set
	|| min_completion_time.is_set
	|| max_completion_time.is_set
	|| sum_completion_time.is_set
	|| path_count.is_set
	|| min_path_count.is_set
	|| max_path_count.is_set
	|| ok_count.is_set
	|| no_path_count.is_set
	|| all_paths_broken_count.is_set
	|| all_paths_unexplorable_count.is_set
	|| all_paths_broken_or_unexplorable_count.is_set
	|| timeout_count.is_set
	|| internal_error_count.is_set
	|| unknown_count.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(completion_time_count.yfilter)
	|| ydk::is_set(completion_time.yfilter)
	|| ydk::is_set(min_completion_time.yfilter)
	|| ydk::is_set(max_completion_time.yfilter)
	|| ydk::is_set(sum_completion_time.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(min_path_count.yfilter)
	|| ydk::is_set(max_path_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(no_path_count.yfilter)
	|| ydk::is_set(all_paths_broken_count.yfilter)
	|| ydk::is_set(all_paths_unexplorable_count.yfilter)
	|| ydk::is_set(all_paths_broken_or_unexplorable_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (completion_time_count.is_set || is_set(completion_time_count.yfilter)) leaf_name_data.push_back(completion_time_count.get_name_leafdata());
    if (completion_time.is_set || is_set(completion_time.yfilter)) leaf_name_data.push_back(completion_time.get_name_leafdata());
    if (min_completion_time.is_set || is_set(min_completion_time.yfilter)) leaf_name_data.push_back(min_completion_time.get_name_leafdata());
    if (max_completion_time.is_set || is_set(max_completion_time.yfilter)) leaf_name_data.push_back(max_completion_time.get_name_leafdata());
    if (sum_completion_time.is_set || is_set(sum_completion_time.yfilter)) leaf_name_data.push_back(sum_completion_time.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (min_path_count.is_set || is_set(min_path_count.yfilter)) leaf_name_data.push_back(min_path_count.get_name_leafdata());
    if (max_path_count.is_set || is_set(max_path_count.yfilter)) leaf_name_data.push_back(max_path_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (no_path_count.is_set || is_set(no_path_count.yfilter)) leaf_name_data.push_back(no_path_count.get_name_leafdata());
    if (all_paths_broken_count.is_set || is_set(all_paths_broken_count.yfilter)) leaf_name_data.push_back(all_paths_broken_count.get_name_leafdata());
    if (all_paths_unexplorable_count.is_set || is_set(all_paths_unexplorable_count.yfilter)) leaf_name_data.push_back(all_paths_unexplorable_count.get_name_leafdata());
    if (all_paths_broken_or_unexplorable_count.is_set || is_set(all_paths_broken_or_unexplorable_count.yfilter)) leaf_name_data.push_back(all_paths_broken_or_unexplorable_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completion-time-count")
    {
        completion_time_count = value;
        completion_time_count.value_namespace = name_space;
        completion_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completion-time")
    {
        completion_time = value;
        completion_time.value_namespace = name_space;
        completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-completion-time")
    {
        min_completion_time = value;
        min_completion_time.value_namespace = name_space;
        min_completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-completion-time")
    {
        max_completion_time = value;
        max_completion_time.value_namespace = name_space;
        max_completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-completion-time")
    {
        sum_completion_time = value;
        sum_completion_time.value_namespace = name_space;
        sum_completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-path-count")
    {
        min_path_count = value;
        min_path_count.value_namespace = name_space;
        min_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-path-count")
    {
        max_path_count = value;
        max_path_count.value_namespace = name_space;
        max_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-path-count")
    {
        no_path_count = value;
        no_path_count.value_namespace = name_space;
        no_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-paths-broken-count")
    {
        all_paths_broken_count = value;
        all_paths_broken_count.value_namespace = name_space;
        all_paths_broken_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-paths-unexplorable-count")
    {
        all_paths_unexplorable_count = value;
        all_paths_unexplorable_count.value_namespace = name_space;
        all_paths_unexplorable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-paths-broken-or-unexplorable-count")
    {
        all_paths_broken_or_unexplorable_count = value;
        all_paths_broken_or_unexplorable_count.value_namespace = name_space;
        all_paths_broken_or_unexplorable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "completion-time-count")
    {
        completion_time_count.yfilter = yfilter;
    }
    if(value_path == "completion-time")
    {
        completion_time.yfilter = yfilter;
    }
    if(value_path == "min-completion-time")
    {
        min_completion_time.yfilter = yfilter;
    }
    if(value_path == "max-completion-time")
    {
        max_completion_time.yfilter = yfilter;
    }
    if(value_path == "sum-completion-time")
    {
        sum_completion_time.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "min-path-count")
    {
        min_path_count.yfilter = yfilter;
    }
    if(value_path == "max-path-count")
    {
        max_path_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "no-path-count")
    {
        no_path_count.yfilter = yfilter;
    }
    if(value_path == "all-paths-broken-count")
    {
        all_paths_broken_count.yfilter = yfilter;
    }
    if(value_path == "all-paths-unexplorable-count")
    {
        all_paths_unexplorable_count.yfilter = yfilter;
    }
    if(value_path == "all-paths-broken-or-unexplorable-count")
    {
        all_paths_broken_or_unexplorable_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "start-time" || name == "return-code" || name == "completion-time-count" || name == "completion-time" || name == "min-completion-time" || name == "max-completion-time" || name == "sum-completion-time" || name == "path-count" || name == "min-path-count" || name == "max-path-count" || name == "ok-count" || name == "no-path-count" || name == "all-paths-broken-count" || name == "all-paths-unexplorable-count" || name == "all-paths-broken-or-unexplorable-count" || name == "timeout-count" || name == "internal-error-count" || name == "unknown-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TargetAddress()
    :
    target_type{YType::enumeration, "target-type"},
    ipv4_address_target{YType::str, "ipv4-address-target"},
    ipv6_address_target{YType::str, "ipv6-address-target"}
        ,
    ipv4_prefix_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget>())
    , tunnel_id_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget>())
    , ipv4_pseudowire_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget>())
{
    ipv4_prefix_target->parent = this;
    tunnel_id_target->parent = this;
    ipv4_pseudowire_target->parent = this;

    yang_name = "target-address"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::~TargetAddress()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return target_type.is_set
	|| ipv4_address_target.is_set
	|| ipv6_address_target.is_set
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_data())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_data())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_type.yfilter)
	|| ydk::is_set(ipv4_address_target.yfilter)
	|| ydk::is_set(ipv6_address_target.yfilter)
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_operation())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_operation())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_type.is_set || is_set(target_type.yfilter)) leaf_name_data.push_back(target_type.get_name_leafdata());
    if (ipv4_address_target.is_set || is_set(ipv4_address_target.yfilter)) leaf_name_data.push_back(ipv4_address_target.get_name_leafdata());
    if (ipv6_address_target.is_set || is_set(ipv6_address_target.yfilter)) leaf_name_data.push_back(ipv6_address_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix-target")
    {
        if(ipv4_prefix_target == nullptr)
        {
            ipv4_prefix_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget>();
        }
        return ipv4_prefix_target;
    }

    if(child_yang_name == "tunnel-id-target")
    {
        if(tunnel_id_target == nullptr)
        {
            tunnel_id_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget>();
        }
        return tunnel_id_target;
    }

    if(child_yang_name == "ipv4-pseudowire-target")
    {
        if(ipv4_pseudowire_target == nullptr)
        {
            ipv4_pseudowire_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget>();
        }
        return ipv4_pseudowire_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_prefix_target != nullptr)
    {
        _children["ipv4-prefix-target"] = ipv4_prefix_target;
    }

    if(tunnel_id_target != nullptr)
    {
        _children["tunnel-id-target"] = tunnel_id_target;
    }

    if(ipv4_pseudowire_target != nullptr)
    {
        _children["ipv4-pseudowire-target"] = ipv4_pseudowire_target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-type")
    {
        target_type = value;
        target_type.value_namespace = name_space;
        target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target = value;
        ipv4_address_target.value_namespace = name_space;
        ipv4_address_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target = value;
        ipv6_address_target.value_namespace = name_space;
        ipv6_address_target.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-type")
    {
        target_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-target" || name == "tunnel-id-target" || name == "ipv4-pseudowire-target" || name == "target-type" || name == "ipv4-address-target" || name == "ipv6-address-target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::Ipv4PrefixTarget()
    :
    address{YType::str, "address"},
    mask_length{YType::uint8, "mask-length"}
{

    yang_name = "ipv4-prefix-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::~Ipv4PrefixTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask_length.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask_length.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PrefixTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask-length")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::TunnelIdTarget()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "tunnel-id-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::~TunnelIdTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::TunnelIdTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::Ipv4PseudowireTarget()
    :
    address{YType::str, "address"},
    virtual_circuit_id{YType::uint32, "virtual-circuit-id"}
{

    yang_name = "ipv4-pseudowire-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::~Ipv4PseudowireTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_circuit_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_circuit_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pseudowire-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_circuit_id.is_set || is_set(virtual_circuit_id.yfilter)) leaf_name_data.push_back(virtual_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id = value;
        virtual_circuit_id.value_namespace = name_space;
        virtual_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Latest::Target::TargetAddress::Ipv4PseudowireTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-circuit-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Aggregated()
    :
    hours(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours>())
{
    hours->parent = this;

    yang_name = "aggregated"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::~Aggregated()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::has_data() const
{
    if (is_presence_container) return true;
    return (hours !=  nullptr && hours->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::has_operation() const
{
    return is_set(yfilter)
	|| (hours !=  nullptr && hours->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hours")
    {
        if(hours == nullptr)
        {
            hours = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours>();
        }
        return hours;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hours != nullptr)
    {
        _children["hours"] = hours;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hours()
    :
    hour(this, {"hour_index"})
{

    yang_name = "hours"; yang_parent_name = "aggregated"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::~Hours()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour.len(); index++)
    {
        if(hour[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::has_operation() const
{
    for (std::size_t index=0; index<hour.len(); index++)
    {
        if(hour[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hours";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour>();
        ent_->parent = this;
        hour.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::Hour()
    :
    hour_index{YType::uint32, "hour-index"},
    start_time{YType::uint64, "start-time"},
    return_code{YType::enumeration, "return-code"},
    completion_time_count{YType::uint32, "completion-time-count"},
    completion_time{YType::uint32, "completion-time"},
    min_completion_time{YType::uint32, "min-completion-time"},
    max_completion_time{YType::uint32, "max-completion-time"},
    sum_completion_time{YType::uint32, "sum-completion-time"},
    path_count{YType::uint32, "path-count"},
    min_path_count{YType::uint32, "min-path-count"},
    max_path_count{YType::uint32, "max-path-count"},
    ok_count{YType::uint32, "ok-count"},
    no_path_count{YType::uint32, "no-path-count"},
    all_paths_broken_count{YType::uint32, "all-paths-broken-count"},
    all_paths_unexplorable_count{YType::uint32, "all-paths-unexplorable-count"},
    all_paths_broken_or_unexplorable_count{YType::uint32, "all-paths-broken-or-unexplorable-count"},
    timeout_count{YType::uint32, "timeout-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    unknown_count{YType::uint32, "unknown-count"}
        ,
    target_address(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress>())
{
    target_address->parent = this;

    yang_name = "hour"; yang_parent_name = "hours"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::~Hour()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::has_data() const
{
    if (is_presence_container) return true;
    return hour_index.is_set
	|| start_time.is_set
	|| return_code.is_set
	|| completion_time_count.is_set
	|| completion_time.is_set
	|| min_completion_time.is_set
	|| max_completion_time.is_set
	|| sum_completion_time.is_set
	|| path_count.is_set
	|| min_path_count.is_set
	|| max_path_count.is_set
	|| ok_count.is_set
	|| no_path_count.is_set
	|| all_paths_broken_count.is_set
	|| all_paths_unexplorable_count.is_set
	|| all_paths_broken_or_unexplorable_count.is_set
	|| timeout_count.is_set
	|| internal_error_count.is_set
	|| unknown_count.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hour_index.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(completion_time_count.yfilter)
	|| ydk::is_set(completion_time.yfilter)
	|| ydk::is_set(min_completion_time.yfilter)
	|| ydk::is_set(max_completion_time.yfilter)
	|| ydk::is_set(sum_completion_time.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(min_path_count.yfilter)
	|| ydk::is_set(max_path_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(no_path_count.yfilter)
	|| ydk::is_set(all_paths_broken_count.yfilter)
	|| ydk::is_set(all_paths_unexplorable_count.yfilter)
	|| ydk::is_set(all_paths_broken_or_unexplorable_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour";
    ADD_KEY_TOKEN(hour_index, "hour-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour_index.is_set || is_set(hour_index.yfilter)) leaf_name_data.push_back(hour_index.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (completion_time_count.is_set || is_set(completion_time_count.yfilter)) leaf_name_data.push_back(completion_time_count.get_name_leafdata());
    if (completion_time.is_set || is_set(completion_time.yfilter)) leaf_name_data.push_back(completion_time.get_name_leafdata());
    if (min_completion_time.is_set || is_set(min_completion_time.yfilter)) leaf_name_data.push_back(min_completion_time.get_name_leafdata());
    if (max_completion_time.is_set || is_set(max_completion_time.yfilter)) leaf_name_data.push_back(max_completion_time.get_name_leafdata());
    if (sum_completion_time.is_set || is_set(sum_completion_time.yfilter)) leaf_name_data.push_back(sum_completion_time.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (min_path_count.is_set || is_set(min_path_count.yfilter)) leaf_name_data.push_back(min_path_count.get_name_leafdata());
    if (max_path_count.is_set || is_set(max_path_count.yfilter)) leaf_name_data.push_back(max_path_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (no_path_count.is_set || is_set(no_path_count.yfilter)) leaf_name_data.push_back(no_path_count.get_name_leafdata());
    if (all_paths_broken_count.is_set || is_set(all_paths_broken_count.yfilter)) leaf_name_data.push_back(all_paths_broken_count.get_name_leafdata());
    if (all_paths_unexplorable_count.is_set || is_set(all_paths_unexplorable_count.yfilter)) leaf_name_data.push_back(all_paths_unexplorable_count.get_name_leafdata());
    if (all_paths_broken_or_unexplorable_count.is_set || is_set(all_paths_broken_or_unexplorable_count.yfilter)) leaf_name_data.push_back(all_paths_broken_or_unexplorable_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hour-index")
    {
        hour_index = value;
        hour_index.value_namespace = name_space;
        hour_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completion-time-count")
    {
        completion_time_count = value;
        completion_time_count.value_namespace = name_space;
        completion_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completion-time")
    {
        completion_time = value;
        completion_time.value_namespace = name_space;
        completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-completion-time")
    {
        min_completion_time = value;
        min_completion_time.value_namespace = name_space;
        min_completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-completion-time")
    {
        max_completion_time = value;
        max_completion_time.value_namespace = name_space;
        max_completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-completion-time")
    {
        sum_completion_time = value;
        sum_completion_time.value_namespace = name_space;
        sum_completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-path-count")
    {
        min_path_count = value;
        min_path_count.value_namespace = name_space;
        min_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-path-count")
    {
        max_path_count = value;
        max_path_count.value_namespace = name_space;
        max_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-path-count")
    {
        no_path_count = value;
        no_path_count.value_namespace = name_space;
        no_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-paths-broken-count")
    {
        all_paths_broken_count = value;
        all_paths_broken_count.value_namespace = name_space;
        all_paths_broken_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-paths-unexplorable-count")
    {
        all_paths_unexplorable_count = value;
        all_paths_unexplorable_count.value_namespace = name_space;
        all_paths_unexplorable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-paths-broken-or-unexplorable-count")
    {
        all_paths_broken_or_unexplorable_count = value;
        all_paths_broken_or_unexplorable_count.value_namespace = name_space;
        all_paths_broken_or_unexplorable_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hour-index")
    {
        hour_index.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "completion-time-count")
    {
        completion_time_count.yfilter = yfilter;
    }
    if(value_path == "completion-time")
    {
        completion_time.yfilter = yfilter;
    }
    if(value_path == "min-completion-time")
    {
        min_completion_time.yfilter = yfilter;
    }
    if(value_path == "max-completion-time")
    {
        max_completion_time.yfilter = yfilter;
    }
    if(value_path == "sum-completion-time")
    {
        sum_completion_time.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "min-path-count")
    {
        min_path_count.yfilter = yfilter;
    }
    if(value_path == "max-path-count")
    {
        max_path_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "no-path-count")
    {
        no_path_count.yfilter = yfilter;
    }
    if(value_path == "all-paths-broken-count")
    {
        all_paths_broken_count.yfilter = yfilter;
    }
    if(value_path == "all-paths-unexplorable-count")
    {
        all_paths_unexplorable_count.yfilter = yfilter;
    }
    if(value_path == "all-paths-broken-or-unexplorable-count")
    {
        all_paths_broken_or_unexplorable_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "hour-index" || name == "start-time" || name == "return-code" || name == "completion-time-count" || name == "completion-time" || name == "min-completion-time" || name == "max-completion-time" || name == "sum-completion-time" || name == "path-count" || name == "min-path-count" || name == "max-path-count" || name == "ok-count" || name == "no-path-count" || name == "all-paths-broken-count" || name == "all-paths-unexplorable-count" || name == "all-paths-broken-or-unexplorable-count" || name == "timeout-count" || name == "internal-error-count" || name == "unknown-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TargetAddress()
    :
    target_type{YType::enumeration, "target-type"},
    ipv4_address_target{YType::str, "ipv4-address-target"},
    ipv6_address_target{YType::str, "ipv6-address-target"}
        ,
    ipv4_prefix_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget>())
    , tunnel_id_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget>())
    , ipv4_pseudowire_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget>())
{
    ipv4_prefix_target->parent = this;
    tunnel_id_target->parent = this;
    ipv4_pseudowire_target->parent = this;

    yang_name = "target-address"; yang_parent_name = "hour"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::~TargetAddress()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return target_type.is_set
	|| ipv4_address_target.is_set
	|| ipv6_address_target.is_set
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_data())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_data())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_type.yfilter)
	|| ydk::is_set(ipv4_address_target.yfilter)
	|| ydk::is_set(ipv6_address_target.yfilter)
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_operation())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_operation())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_type.is_set || is_set(target_type.yfilter)) leaf_name_data.push_back(target_type.get_name_leafdata());
    if (ipv4_address_target.is_set || is_set(ipv4_address_target.yfilter)) leaf_name_data.push_back(ipv4_address_target.get_name_leafdata());
    if (ipv6_address_target.is_set || is_set(ipv6_address_target.yfilter)) leaf_name_data.push_back(ipv6_address_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix-target")
    {
        if(ipv4_prefix_target == nullptr)
        {
            ipv4_prefix_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget>();
        }
        return ipv4_prefix_target;
    }

    if(child_yang_name == "tunnel-id-target")
    {
        if(tunnel_id_target == nullptr)
        {
            tunnel_id_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget>();
        }
        return tunnel_id_target;
    }

    if(child_yang_name == "ipv4-pseudowire-target")
    {
        if(ipv4_pseudowire_target == nullptr)
        {
            ipv4_pseudowire_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget>();
        }
        return ipv4_pseudowire_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_prefix_target != nullptr)
    {
        _children["ipv4-prefix-target"] = ipv4_prefix_target;
    }

    if(tunnel_id_target != nullptr)
    {
        _children["tunnel-id-target"] = tunnel_id_target;
    }

    if(ipv4_pseudowire_target != nullptr)
    {
        _children["ipv4-pseudowire-target"] = ipv4_pseudowire_target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-type")
    {
        target_type = value;
        target_type.value_namespace = name_space;
        target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target = value;
        ipv4_address_target.value_namespace = name_space;
        ipv4_address_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target = value;
        ipv6_address_target.value_namespace = name_space;
        ipv6_address_target.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-type")
    {
        target_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-target" || name == "tunnel-id-target" || name == "ipv4-pseudowire-target" || name == "target-type" || name == "ipv4-address-target" || name == "ipv6-address-target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::Ipv4PrefixTarget()
    :
    address{YType::str, "address"},
    mask_length{YType::uint8, "mask-length"}
{

    yang_name = "ipv4-prefix-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::~Ipv4PrefixTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask_length.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask_length.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PrefixTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask-length")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::TunnelIdTarget()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "tunnel-id-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::~TunnelIdTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::TunnelIdTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::Ipv4PseudowireTarget()
    :
    address{YType::str, "address"},
    virtual_circuit_id{YType::uint32, "virtual-circuit-id"}
{

    yang_name = "ipv4-pseudowire-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::~Ipv4PseudowireTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_circuit_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_circuit_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pseudowire-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_circuit_id.is_set || is_set(virtual_circuit_id.yfilter)) leaf_name_data.push_back(virtual_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id = value;
        virtual_circuit_id.value_namespace = name_space;
        virtual_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Statistics::Aggregated::Hours::Hour::TargetAddress::Ipv4PseudowireTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-circuit-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::Status()
    :
    lpd_paths(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths>())
    , state(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State>())
{
    lpd_paths->parent = this;
    state->parent = this;

    yang_name = "status"; yang_parent_name = "lpd"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::~Status()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::has_data() const
{
    if (is_presence_container) return true;
    return (lpd_paths !=  nullptr && lpd_paths->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::has_operation() const
{
    return is_set(yfilter)
	|| (lpd_paths !=  nullptr && lpd_paths->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpd-paths")
    {
        if(lpd_paths == nullptr)
        {
            lpd_paths = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths>();
        }
        return lpd_paths;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lpd_paths != nullptr)
    {
        _children["lpd-paths"] = lpd_paths;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpd-paths" || name == "state")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPaths()
    :
    lpd_path(this, {"path_index"})
{

    yang_name = "lpd-paths"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::~LpdPaths()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::has_operation() const
{
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpd-path")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath>();
        ent_->parent = this;
        lpd_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lpd_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpd-path")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::LpdPath()
    :
    path_index{YType::uint32, "path-index"},
    path_status{YType::enumeration, "path-status"}
        ,
    path_id(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId>())
{
    path_id->parent = this;

    yang_name = "lpd-path"; yang_parent_name = "lpd-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::~LpdPath()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| path_status.is_set
	|| (path_id !=  nullptr && path_id->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_id !=  nullptr && path_id->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-path";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-id")
    {
        if(path_id == nullptr)
        {
            path_id = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId>();
        }
        return path_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_id != nullptr)
    {
        _children["path-id"] = path_id;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-index" || name == "path-status")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::PathId()
    :
    lsp_selector{YType::str, "lsp-selector"},
    output_interface{YType::str, "output-interface"},
    nexthop_address{YType::str, "nexthop-address"},
    downstream_label{YType::uint32, "downstream-label"}
{

    yang_name = "path-id"; yang_parent_name = "lpd-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::~PathId()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_selector.is_set
	|| output_interface.is_set
	|| nexthop_address.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::has_operation() const
{
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter)
	|| ydk::is_set(downstream_label.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    auto downstream_label_name_datas = downstream_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), downstream_label_name_datas.begin(), downstream_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.append(value);
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::LpdPaths::LpdPath::PathId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selector" || name == "output-interface" || name == "nexthop-address" || name == "downstream-label")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::State()
    :
    monitor_id{YType::uint32, "monitor-id"},
    discovery_mode{YType::enumeration, "discovery-mode"},
    start_time{YType::uint64, "start-time"},
    return_code{YType::enumeration, "return-code"},
    completion_time{YType::uint32, "completion-time"},
    path_count{YType::uint32, "path-count"}
        ,
    target_address(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress>())
{
    target_address->parent = this;

    yang_name = "state"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::~State()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::has_data() const
{
    if (is_presence_container) return true;
    return monitor_id.is_set
	|| discovery_mode.is_set
	|| start_time.is_set
	|| return_code.is_set
	|| completion_time.is_set
	|| path_count.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_id.yfilter)
	|| ydk::is_set(discovery_mode.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(completion_time.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_id.is_set || is_set(monitor_id.yfilter)) leaf_name_data.push_back(monitor_id.get_name_leafdata());
    if (discovery_mode.is_set || is_set(discovery_mode.yfilter)) leaf_name_data.push_back(discovery_mode.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (completion_time.is_set || is_set(completion_time.yfilter)) leaf_name_data.push_back(completion_time.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-id")
    {
        monitor_id = value;
        monitor_id.value_namespace = name_space;
        monitor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-mode")
    {
        discovery_mode = value;
        discovery_mode.value_namespace = name_space;
        discovery_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completion-time")
    {
        completion_time = value;
        completion_time.value_namespace = name_space;
        completion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-id")
    {
        monitor_id.yfilter = yfilter;
    }
    if(value_path == "discovery-mode")
    {
        discovery_mode.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "completion-time")
    {
        completion_time.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "monitor-id" || name == "discovery-mode" || name == "start-time" || name == "return-code" || name == "completion-time" || name == "path-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TargetAddress()
    :
    target_type{YType::enumeration, "target-type"},
    ipv4_address_target{YType::str, "ipv4-address-target"},
    ipv6_address_target{YType::str, "ipv6-address-target"}
        ,
    ipv4_prefix_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget>())
    , tunnel_id_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget>())
    , ipv4_pseudowire_target(std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget>())
{
    ipv4_prefix_target->parent = this;
    tunnel_id_target->parent = this;
    ipv4_pseudowire_target->parent = this;

    yang_name = "target-address"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::~TargetAddress()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return target_type.is_set
	|| ipv4_address_target.is_set
	|| ipv6_address_target.is_set
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_data())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_data())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_type.yfilter)
	|| ydk::is_set(ipv4_address_target.yfilter)
	|| ydk::is_set(ipv6_address_target.yfilter)
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_operation())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_operation())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_type.is_set || is_set(target_type.yfilter)) leaf_name_data.push_back(target_type.get_name_leafdata());
    if (ipv4_address_target.is_set || is_set(ipv4_address_target.yfilter)) leaf_name_data.push_back(ipv4_address_target.get_name_leafdata());
    if (ipv6_address_target.is_set || is_set(ipv6_address_target.yfilter)) leaf_name_data.push_back(ipv6_address_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix-target")
    {
        if(ipv4_prefix_target == nullptr)
        {
            ipv4_prefix_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget>();
        }
        return ipv4_prefix_target;
    }

    if(child_yang_name == "tunnel-id-target")
    {
        if(tunnel_id_target == nullptr)
        {
            tunnel_id_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget>();
        }
        return tunnel_id_target;
    }

    if(child_yang_name == "ipv4-pseudowire-target")
    {
        if(ipv4_pseudowire_target == nullptr)
        {
            ipv4_pseudowire_target = std::make_shared<Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget>();
        }
        return ipv4_pseudowire_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_prefix_target != nullptr)
    {
        _children["ipv4-prefix-target"] = ipv4_prefix_target;
    }

    if(tunnel_id_target != nullptr)
    {
        _children["tunnel-id-target"] = tunnel_id_target;
    }

    if(ipv4_pseudowire_target != nullptr)
    {
        _children["ipv4-pseudowire-target"] = ipv4_pseudowire_target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-type")
    {
        target_type = value;
        target_type.value_namespace = name_space;
        target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target = value;
        ipv4_address_target.value_namespace = name_space;
        ipv4_address_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target = value;
        ipv6_address_target.value_namespace = name_space;
        ipv6_address_target.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-type")
    {
        target_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-target" || name == "tunnel-id-target" || name == "ipv4-pseudowire-target" || name == "target-type" || name == "ipv4-address-target" || name == "ipv6-address-target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::Ipv4PrefixTarget()
    :
    address{YType::str, "address"},
    mask_length{YType::uint8, "mask-length"}
{

    yang_name = "ipv4-prefix-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::~Ipv4PrefixTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask_length.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask_length.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PrefixTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask-length")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::TunnelIdTarget()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "tunnel-id-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::~TunnelIdTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::TunnelIdTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::Ipv4PseudowireTarget()
    :
    address{YType::str, "address"},
    virtual_circuit_id{YType::uint32, "virtual-circuit-id"}
{

    yang_name = "ipv4-pseudowire-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::~Ipv4PseudowireTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_circuit_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_circuit_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pseudowire-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_circuit_id.is_set || is_set(virtual_circuit_id.yfilter)) leaf_name_data.push_back(virtual_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id = value;
        virtual_circuit_id.value_namespace = name_space;
        virtual_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Lpd::Status::State::TargetAddress::Ipv4PseudowireTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-circuit-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::History()
    :
    path(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path>())
    , target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target>())
{
    path->parent = this;
    target->parent = this;

    yang_name = "history"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::~History()
{
}

bool Ipsla::OperationData::Operations::Operation::History::has_data() const
{
    if (is_presence_container) return true;
    return (path !=  nullptr && path->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::has_operation() const
{
    return is_set(yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path>();
        }
        return path;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(target != nullptr)
    {
        _children["target"] = target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Path()
    :
    lifes(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes>())
{
    lifes->parent = this;

    yang_name = "path"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::~Path()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::has_data() const
{
    if (is_presence_container) return true;
    return (lifes !=  nullptr && lifes->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Path::has_operation() const
{
    return is_set(yfilter)
	|| (lifes !=  nullptr && lifes->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifes")
    {
        if(lifes == nullptr)
        {
            lifes = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes>();
        }
        return lifes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifes != nullptr)
    {
        _children["lifes"] = lifes;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifes")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Lifes()
    :
    life(this, {"life_index"})
{

    yang_name = "lifes"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::~Lifes()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<life.len(); index++)
    {
        if(life[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::has_operation() const
{
    for (std::size_t index=0; index<life.len(); index++)
    {
        if(life[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "life")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life>();
        ent_->parent = this;
        life.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : life.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "life")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Life()
    :
    life_index{YType::uint32, "life-index"}
        ,
    buckets(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets>())
{
    buckets->parent = this;

    yang_name = "life"; yang_parent_name = "lifes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::~Life()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::has_data() const
{
    if (is_presence_container) return true;
    return life_index.is_set
	|| (buckets !=  nullptr && buckets->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(life_index.yfilter)
	|| (buckets !=  nullptr && buckets->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "life";
    ADD_KEY_TOKEN(life_index, "life-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (life_index.is_set || is_set(life_index.yfilter)) leaf_name_data.push_back(life_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buckets")
    {
        if(buckets == nullptr)
        {
            buckets = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets>();
        }
        return buckets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(buckets != nullptr)
    {
        _children["buckets"] = buckets;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "life-index")
    {
        life_index = value;
        life_index.value_namespace = name_space;
        life_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "life-index")
    {
        life_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets" || name == "life-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Buckets()
    :
    bucket(this, {"bucket_index"})
{

    yang_name = "buckets"; yang_parent_name = "life"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::~Buckets()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bucket.len(); index++)
    {
        if(bucket[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::has_operation() const
{
    for (std::size_t index=0; index<bucket.len(); index++)
    {
        if(bucket[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buckets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bucket")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket>();
        ent_->parent = this;
        bucket.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bucket.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bucket")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Bucket()
    :
    bucket_index{YType::uint32, "bucket-index"}
        ,
    samples(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples>())
{
    samples->parent = this;

    yang_name = "bucket"; yang_parent_name = "buckets"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::~Bucket()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::has_data() const
{
    if (is_presence_container) return true;
    return bucket_index.is_set
	|| (samples !=  nullptr && samples->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bucket_index.yfilter)
	|| (samples !=  nullptr && samples->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bucket";
    ADD_KEY_TOKEN(bucket_index, "bucket-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_index.is_set || is_set(bucket_index.yfilter)) leaf_name_data.push_back(bucket_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "samples")
    {
        if(samples == nullptr)
        {
            samples = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples>();
        }
        return samples;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(samples != nullptr)
    {
        _children["samples"] = samples;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bucket-index")
    {
        bucket_index = value;
        bucket_index.value_namespace = name_space;
        bucket_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bucket-index")
    {
        bucket_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "bucket-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Samples()
    :
    sample(this, {"sample_index"})
{

    yang_name = "samples"; yang_parent_name = "bucket"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::~Samples()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::has_operation() const
{
    for (std::size_t index=0; index<sample.len(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "samples";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample>();
        ent_->parent = this;
        sample.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sample.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::Sample()
    :
    sample_index{YType::uint32, "sample-index"},
    start_time{YType::uint64, "start-time"},
    response_time{YType::uint32, "response-time"},
    return_code{YType::enumeration, "return-code"}
        ,
    target_address(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress>())
{
    target_address->parent = this;

    yang_name = "sample"; yang_parent_name = "samples"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::~Sample()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::has_data() const
{
    if (is_presence_container) return true;
    return sample_index.is_set
	|| start_time.is_set
	|| response_time.is_set
	|| return_code.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_index.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";
    ADD_KEY_TOKEN(sample_index, "sample-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_index.is_set || is_set(sample_index.yfilter)) leaf_name_data.push_back(sample_index.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-index")
    {
        sample_index = value;
        sample_index.value_namespace = name_space;
        sample_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-index")
    {
        sample_index.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "sample-index" || name == "start-time" || name == "response-time" || name == "return-code")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TargetAddress()
    :
    target_type{YType::enumeration, "target-type"},
    ipv4_address_target{YType::str, "ipv4-address-target"},
    ipv6_address_target{YType::str, "ipv6-address-target"}
        ,
    ipv4_prefix_target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget>())
    , tunnel_id_target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget>())
    , ipv4_pseudowire_target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget>())
{
    ipv4_prefix_target->parent = this;
    tunnel_id_target->parent = this;
    ipv4_pseudowire_target->parent = this;

    yang_name = "target-address"; yang_parent_name = "sample"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::~TargetAddress()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return target_type.is_set
	|| ipv4_address_target.is_set
	|| ipv6_address_target.is_set
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_data())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_data())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_type.yfilter)
	|| ydk::is_set(ipv4_address_target.yfilter)
	|| ydk::is_set(ipv6_address_target.yfilter)
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_operation())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_operation())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_type.is_set || is_set(target_type.yfilter)) leaf_name_data.push_back(target_type.get_name_leafdata());
    if (ipv4_address_target.is_set || is_set(ipv4_address_target.yfilter)) leaf_name_data.push_back(ipv4_address_target.get_name_leafdata());
    if (ipv6_address_target.is_set || is_set(ipv6_address_target.yfilter)) leaf_name_data.push_back(ipv6_address_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix-target")
    {
        if(ipv4_prefix_target == nullptr)
        {
            ipv4_prefix_target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget>();
        }
        return ipv4_prefix_target;
    }

    if(child_yang_name == "tunnel-id-target")
    {
        if(tunnel_id_target == nullptr)
        {
            tunnel_id_target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget>();
        }
        return tunnel_id_target;
    }

    if(child_yang_name == "ipv4-pseudowire-target")
    {
        if(ipv4_pseudowire_target == nullptr)
        {
            ipv4_pseudowire_target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget>();
        }
        return ipv4_pseudowire_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_prefix_target != nullptr)
    {
        _children["ipv4-prefix-target"] = ipv4_prefix_target;
    }

    if(tunnel_id_target != nullptr)
    {
        _children["tunnel-id-target"] = tunnel_id_target;
    }

    if(ipv4_pseudowire_target != nullptr)
    {
        _children["ipv4-pseudowire-target"] = ipv4_pseudowire_target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-type")
    {
        target_type = value;
        target_type.value_namespace = name_space;
        target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target = value;
        ipv4_address_target.value_namespace = name_space;
        ipv4_address_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target = value;
        ipv6_address_target.value_namespace = name_space;
        ipv6_address_target.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-type")
    {
        target_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-target" || name == "tunnel-id-target" || name == "ipv4-pseudowire-target" || name == "target-type" || name == "ipv4-address-target" || name == "ipv6-address-target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::Ipv4PrefixTarget()
    :
    address{YType::str, "address"},
    mask_length{YType::uint8, "mask-length"}
{

    yang_name = "ipv4-prefix-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::~Ipv4PrefixTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask_length.is_set;
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask_length.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PrefixTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask-length")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::TunnelIdTarget()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "tunnel-id-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::~TunnelIdTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::TunnelIdTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::Ipv4PseudowireTarget()
    :
    address{YType::str, "address"},
    virtual_circuit_id{YType::uint32, "virtual-circuit-id"}
{

    yang_name = "ipv4-pseudowire-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::~Ipv4PseudowireTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_circuit_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_circuit_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pseudowire-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_circuit_id.is_set || is_set(virtual_circuit_id.yfilter)) leaf_name_data.push_back(virtual_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id = value;
        virtual_circuit_id.value_namespace = name_space;
        virtual_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Path::Lifes::Life::Buckets::Bucket::Samples::Sample::TargetAddress::Ipv4PseudowireTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-circuit-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Target()
    :
    lifes(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes>())
{
    lifes->parent = this;

    yang_name = "target"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::~Target()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::has_data() const
{
    if (is_presence_container) return true;
    return (lifes !=  nullptr && lifes->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Target::has_operation() const
{
    return is_set(yfilter)
	|| (lifes !=  nullptr && lifes->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifes")
    {
        if(lifes == nullptr)
        {
            lifes = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes>();
        }
        return lifes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifes != nullptr)
    {
        _children["lifes"] = lifes;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifes")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Lifes()
    :
    life(this, {"life_index"})
{

    yang_name = "lifes"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::~Lifes()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<life.len(); index++)
    {
        if(life[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::has_operation() const
{
    for (std::size_t index=0; index<life.len(); index++)
    {
        if(life[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "life")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life>();
        ent_->parent = this;
        life.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : life.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "life")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Life()
    :
    life_index{YType::uint32, "life-index"}
        ,
    buckets(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets>())
{
    buckets->parent = this;

    yang_name = "life"; yang_parent_name = "lifes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::~Life()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::has_data() const
{
    if (is_presence_container) return true;
    return life_index.is_set
	|| (buckets !=  nullptr && buckets->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(life_index.yfilter)
	|| (buckets !=  nullptr && buckets->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "life";
    ADD_KEY_TOKEN(life_index, "life-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (life_index.is_set || is_set(life_index.yfilter)) leaf_name_data.push_back(life_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buckets")
    {
        if(buckets == nullptr)
        {
            buckets = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets>();
        }
        return buckets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(buckets != nullptr)
    {
        _children["buckets"] = buckets;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "life-index")
    {
        life_index = value;
        life_index.value_namespace = name_space;
        life_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "life-index")
    {
        life_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets" || name == "life-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Buckets()
    :
    bucket(this, {"bucket_index"})
{

    yang_name = "buckets"; yang_parent_name = "life"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::~Buckets()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bucket.len(); index++)
    {
        if(bucket[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::has_operation() const
{
    for (std::size_t index=0; index<bucket.len(); index++)
    {
        if(bucket[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buckets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bucket")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket>();
        ent_->parent = this;
        bucket.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bucket.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bucket")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::Bucket()
    :
    bucket_index{YType::uint32, "bucket-index"},
    start_time{YType::uint64, "start-time"},
    response_time{YType::uint32, "response-time"},
    return_code{YType::enumeration, "return-code"}
        ,
    target_address(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress>())
{
    target_address->parent = this;

    yang_name = "bucket"; yang_parent_name = "buckets"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::~Bucket()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::has_data() const
{
    if (is_presence_container) return true;
    return bucket_index.is_set
	|| start_time.is_set
	|| response_time.is_set
	|| return_code.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bucket_index.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bucket";
    ADD_KEY_TOKEN(bucket_index, "bucket-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_index.is_set || is_set(bucket_index.yfilter)) leaf_name_data.push_back(bucket_index.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bucket-index")
    {
        bucket_index = value;
        bucket_index.value_namespace = name_space;
        bucket_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bucket-index")
    {
        bucket_index.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "bucket-index" || name == "start-time" || name == "response-time" || name == "return-code")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TargetAddress()
    :
    target_type{YType::enumeration, "target-type"},
    ipv4_address_target{YType::str, "ipv4-address-target"},
    ipv6_address_target{YType::str, "ipv6-address-target"}
        ,
    ipv4_prefix_target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget>())
    , tunnel_id_target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget>())
    , ipv4_pseudowire_target(std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget>())
{
    ipv4_prefix_target->parent = this;
    tunnel_id_target->parent = this;
    ipv4_pseudowire_target->parent = this;

    yang_name = "target-address"; yang_parent_name = "bucket"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::~TargetAddress()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return target_type.is_set
	|| ipv4_address_target.is_set
	|| ipv6_address_target.is_set
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_data())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_data())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target_type.yfilter)
	|| ydk::is_set(ipv4_address_target.yfilter)
	|| ydk::is_set(ipv6_address_target.yfilter)
	|| (ipv4_prefix_target !=  nullptr && ipv4_prefix_target->has_operation())
	|| (tunnel_id_target !=  nullptr && tunnel_id_target->has_operation())
	|| (ipv4_pseudowire_target !=  nullptr && ipv4_pseudowire_target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target_type.is_set || is_set(target_type.yfilter)) leaf_name_data.push_back(target_type.get_name_leafdata());
    if (ipv4_address_target.is_set || is_set(ipv4_address_target.yfilter)) leaf_name_data.push_back(ipv4_address_target.get_name_leafdata());
    if (ipv6_address_target.is_set || is_set(ipv6_address_target.yfilter)) leaf_name_data.push_back(ipv6_address_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix-target")
    {
        if(ipv4_prefix_target == nullptr)
        {
            ipv4_prefix_target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget>();
        }
        return ipv4_prefix_target;
    }

    if(child_yang_name == "tunnel-id-target")
    {
        if(tunnel_id_target == nullptr)
        {
            tunnel_id_target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget>();
        }
        return tunnel_id_target;
    }

    if(child_yang_name == "ipv4-pseudowire-target")
    {
        if(ipv4_pseudowire_target == nullptr)
        {
            ipv4_pseudowire_target = std::make_shared<Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget>();
        }
        return ipv4_pseudowire_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_prefix_target != nullptr)
    {
        _children["ipv4-prefix-target"] = ipv4_prefix_target;
    }

    if(tunnel_id_target != nullptr)
    {
        _children["tunnel-id-target"] = tunnel_id_target;
    }

    if(ipv4_pseudowire_target != nullptr)
    {
        _children["ipv4-pseudowire-target"] = ipv4_pseudowire_target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target-type")
    {
        target_type = value;
        target_type.value_namespace = name_space;
        target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target = value;
        ipv4_address_target.value_namespace = name_space;
        ipv4_address_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target = value;
        ipv6_address_target.value_namespace = name_space;
        ipv6_address_target.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target-type")
    {
        target_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address-target")
    {
        ipv4_address_target.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-target")
    {
        ipv6_address_target.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-target" || name == "tunnel-id-target" || name == "ipv4-pseudowire-target" || name == "target-type" || name == "ipv4-address-target" || name == "ipv6-address-target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::Ipv4PrefixTarget()
    :
    address{YType::str, "address"},
    mask_length{YType::uint8, "mask-length"}
{

    yang_name = "ipv4-prefix-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::~Ipv4PrefixTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask_length.is_set;
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask_length.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PrefixTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask-length")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::TunnelIdTarget()
    :
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "tunnel-id-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::~TunnelIdTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::TunnelIdTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::Ipv4PseudowireTarget()
    :
    address{YType::str, "address"},
    virtual_circuit_id{YType::uint32, "virtual-circuit-id"}
{

    yang_name = "ipv4-pseudowire-target"; yang_parent_name = "target-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::~Ipv4PseudowireTarget()
{
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| virtual_circuit_id.is_set;
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(virtual_circuit_id.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pseudowire-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (virtual_circuit_id.is_set || is_set(virtual_circuit_id.yfilter)) leaf_name_data.push_back(virtual_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id = value;
        virtual_circuit_id.value_namespace = name_space;
        virtual_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "virtual-circuit-id")
    {
        virtual_circuit_id.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::History::Target::Lifes::Life::Buckets::Bucket::TargetAddress::Ipv4PseudowireTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "virtual-circuit-id")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Statistics()
    :
    latest(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest>())
    , aggregated(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated>())
{
    latest->parent = this;
    aggregated->parent = this;

    yang_name = "statistics"; yang_parent_name = "operation"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::~Statistics()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (latest !=  nullptr && latest->has_data())
	|| (aggregated !=  nullptr && aggregated->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (latest !=  nullptr && latest->has_operation())
	|| (aggregated !=  nullptr && aggregated->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "latest")
    {
        if(latest == nullptr)
        {
            latest = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest>();
        }
        return latest;
    }

    if(child_yang_name == "aggregated")
    {
        if(aggregated == nullptr)
        {
            aggregated = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated>();
        }
        return aggregated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(latest != nullptr)
    {
        _children["latest"] = latest;
    }

    if(aggregated != nullptr)
    {
        _children["aggregated"] = aggregated;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "latest" || name == "aggregated")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Latest()
    :
    target(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target>())
    , hops(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops>())
    , lpd_paths(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths>())
{
    target->parent = this;
    hops->parent = this;
    lpd_paths->parent = this;

    yang_name = "latest"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::~Latest()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::has_data() const
{
    if (is_presence_container) return true;
    return (target !=  nullptr && target->has_data())
	|| (hops !=  nullptr && hops->has_data())
	|| (lpd_paths !=  nullptr && lpd_paths->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::has_operation() const
{
    return is_set(yfilter)
	|| (target !=  nullptr && target->has_operation())
	|| (hops !=  nullptr && hops->has_operation())
	|| (lpd_paths !=  nullptr && lpd_paths->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target>();
        }
        return target;
    }

    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops>();
        }
        return hops;
    }

    if(child_yang_name == "lpd-paths")
    {
        if(lpd_paths == nullptr)
        {
            lpd_paths = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths>();
        }
        return lpd_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target != nullptr)
    {
        _children["target"] = target;
    }

    if(hops != nullptr)
    {
        _children["hops"] = hops;
    }

    if(lpd_paths != nullptr)
    {
        _children["lpd-paths"] = lpd_paths;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target" || name == "hops" || name == "lpd-paths")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::Target()
    :
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "target"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::~Target()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::has_data() const
{
    if (is_presence_container) return true;
    return (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::has_operation() const
{
    return is_set(yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Target::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hops()
    :
    hop(this, {"hop_index"})
{

    yang_name = "hops"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::~Hops()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop>();
        ent_->parent = this;
        hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::Hop()
    :
    hop_index{YType::uint32, "hop-index"}
        ,
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::~Hop()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    ADD_KEY_TOKEN(hop_index, "hop-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats" || name == "hop-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::Hops::Hop::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPaths()
    :
    lpd_path(this, {"path_index"})
{

    yang_name = "lpd-paths"; yang_parent_name = "latest"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::~LpdPaths()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::has_operation() const
{
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpd-path")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath>();
        ent_->parent = this;
        lpd_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lpd_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpd-path")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::LpdPath()
    :
    path_index{YType::uint32, "path-index"},
    return_code{YType::enumeration, "return-code"}
        ,
    path_id(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId>())
{
    path_id->parent = this;

    yang_name = "lpd-path"; yang_parent_name = "lpd-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::~LpdPath()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| return_code.is_set
	|| (path_id !=  nullptr && path_id->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| (path_id !=  nullptr && path_id->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-path";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-id")
    {
        if(path_id == nullptr)
        {
            path_id = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId>();
        }
        return path_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_id != nullptr)
    {
        _children["path-id"] = path_id;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-index" || name == "return-code")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::PathId()
    :
    lsp_selector{YType::str, "lsp-selector"},
    output_interface{YType::str, "output-interface"},
    nexthop_address{YType::str, "nexthop-address"},
    downstream_label{YType::uint32, "downstream-label"}
{

    yang_name = "path-id"; yang_parent_name = "lpd-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::~PathId()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_selector.is_set
	|| output_interface.is_set
	|| nexthop_address.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::has_operation() const
{
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter)
	|| ydk::is_set(downstream_label.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    auto downstream_label_name_datas = downstream_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), downstream_label_name_datas.begin(), downstream_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.append(value);
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Latest::LpdPaths::LpdPath::PathId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selector" || name == "output-interface" || name == "nexthop-address" || name == "downstream-label")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Aggregated()
    :
    enhanced_intervals(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals>())
    , hours(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours>())
{
    enhanced_intervals->parent = this;
    hours->parent = this;

    yang_name = "aggregated"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::~Aggregated()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::has_data() const
{
    if (is_presence_container) return true;
    return (enhanced_intervals !=  nullptr && enhanced_intervals->has_data())
	|| (hours !=  nullptr && hours->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::has_operation() const
{
    return is_set(yfilter)
	|| (enhanced_intervals !=  nullptr && enhanced_intervals->has_operation())
	|| (hours !=  nullptr && hours->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced-intervals")
    {
        if(enhanced_intervals == nullptr)
        {
            enhanced_intervals = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals>();
        }
        return enhanced_intervals;
    }

    if(child_yang_name == "hours")
    {
        if(hours == nullptr)
        {
            hours = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours>();
        }
        return hours;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enhanced_intervals != nullptr)
    {
        _children["enhanced-intervals"] = enhanced_intervals;
    }

    if(hours != nullptr)
    {
        _children["hours"] = hours;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced-intervals" || name == "hours")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedIntervals()
    :
    enhanced_interval(this, {"enhanced_interval"})
{

    yang_name = "enhanced-intervals"; yang_parent_name = "aggregated"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::~EnhancedIntervals()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<enhanced_interval.len(); index++)
    {
        if(enhanced_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::has_operation() const
{
    for (std::size_t index=0; index<enhanced_interval.len(); index++)
    {
        if(enhanced_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced-interval")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval>();
        ent_->parent = this;
        enhanced_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : enhanced_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced-interval")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::EnhancedInterval()
    :
    enhanced_interval{YType::uint32, "enhanced-interval"}
        ,
    start_times(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes>())
{
    start_times->parent = this;

    yang_name = "enhanced-interval"; yang_parent_name = "enhanced-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::~EnhancedInterval()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::has_data() const
{
    if (is_presence_container) return true;
    return enhanced_interval.is_set
	|| (start_times !=  nullptr && start_times->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enhanced_interval.yfilter)
	|| (start_times !=  nullptr && start_times->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced-interval";
    ADD_KEY_TOKEN(enhanced_interval, "enhanced-interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enhanced_interval.is_set || is_set(enhanced_interval.yfilter)) leaf_name_data.push_back(enhanced_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-times")
    {
        if(start_times == nullptr)
        {
            start_times = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes>();
        }
        return start_times;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_times != nullptr)
    {
        _children["start-times"] = start_times;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enhanced-interval")
    {
        enhanced_interval = value;
        enhanced_interval.value_namespace = name_space;
        enhanced_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enhanced-interval")
    {
        enhanced_interval.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-times" || name == "enhanced-interval")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTimes()
    :
    start_time(this, {"interval_start_time"})
{

    yang_name = "start-times"; yang_parent_name = "enhanced-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::~StartTimes()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<start_time.len(); index++)
    {
        if(start_time[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::has_operation() const
{
    for (std::size_t index=0; index<start_time.len(); index++)
    {
        if(start_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-times";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime>();
        ent_->parent = this;
        start_time.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : start_time.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::StartTime()
    :
    interval_start_time{YType::str, "interval-start-time"}
        ,
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "start-time"; yang_parent_name = "start-times"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::~StartTime()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::has_data() const
{
    if (is_presence_container) return true;
    return interval_start_time.is_set
	|| (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_start_time.yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    ADD_KEY_TOKEN(interval_start_time, "interval-start-time");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_start_time.is_set || is_set(interval_start_time.yfilter)) leaf_name_data.push_back(interval_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-start-time")
    {
        interval_start_time = value;
        interval_start_time.value_namespace = name_space;
        interval_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-start-time")
    {
        interval_start_time.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats" || name == "interval-start-time")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "start-time"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "start-time"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::EnhancedIntervals::EnhancedInterval::StartTimes::StartTime::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hours()
    :
    hour(this, {"hour_index"})
{

    yang_name = "hours"; yang_parent_name = "aggregated"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::~Hours()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour.len(); index++)
    {
        if(hour[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::has_operation() const
{
    for (std::size_t index=0; index<hour.len(); index++)
    {
        if(hour[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hours";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour>();
        ent_->parent = this;
        hour.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Hour()
    :
    hour_index{YType::uint32, "hour-index"}
        ,
    distributed(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed>())
    , non_distributed(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed>())
{
    distributed->parent = this;
    non_distributed->parent = this;

    yang_name = "hour"; yang_parent_name = "hours"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::~Hour()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::has_data() const
{
    if (is_presence_container) return true;
    return hour_index.is_set
	|| (distributed !=  nullptr && distributed->has_data())
	|| (non_distributed !=  nullptr && non_distributed->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hour_index.yfilter)
	|| (distributed !=  nullptr && distributed->has_operation())
	|| (non_distributed !=  nullptr && non_distributed->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour";
    ADD_KEY_TOKEN(hour_index, "hour-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour_index.is_set || is_set(hour_index.yfilter)) leaf_name_data.push_back(hour_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distributed")
    {
        if(distributed == nullptr)
        {
            distributed = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed>();
        }
        return distributed;
    }

    if(child_yang_name == "non-distributed")
    {
        if(non_distributed == nullptr)
        {
            non_distributed = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed>();
        }
        return non_distributed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(distributed != nullptr)
    {
        _children["distributed"] = distributed;
    }

    if(non_distributed != nullptr)
    {
        _children["non-distributed"] = non_distributed;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hour-index")
    {
        hour_index = value;
        hour_index.value_namespace = name_space;
        hour_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hour-index")
    {
        hour_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distributed" || name == "non-distributed" || name == "hour-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Distributed()
    :
    paths(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths>())
    , target(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target>())
{
    paths->parent = this;
    target->parent = this;

    yang_name = "distributed"; yang_parent_name = "hour"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::~Distributed()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::has_data() const
{
    if (is_presence_container) return true;
    return (paths !=  nullptr && paths->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::has_operation() const
{
    return is_set(yfilter)
	|| (paths !=  nullptr && paths->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distributed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths>();
        }
        return paths;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(paths != nullptr)
    {
        _children["paths"] = paths;
    }

    if(target != nullptr)
    {
        _children["target"] = target;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "target")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Paths()
    :
    path(this, {"path_index"})
{

    yang_name = "paths"; yang_parent_name = "distributed"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::~Paths()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Path()
    :
    path_index{YType::uint32, "path-index"}
        ,
    hops(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops>())
{
    hops->parent = this;

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::~Path()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops>();
        }
        return hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hops != nullptr)
    {
        _children["hops"] = hops;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "path-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hops()
    :
    hop(this, {"hop_index"})
{

    yang_name = "hops"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::~Hops()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop>();
        ent_->parent = this;
        hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::Hop()
    :
    hop_index{YType::uint32, "hop-index"}
        ,
    distribution_intervals(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals>())
{
    distribution_intervals->parent = this;

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::~Hop()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| (distribution_intervals !=  nullptr && distribution_intervals->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| (distribution_intervals !=  nullptr && distribution_intervals->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    ADD_KEY_TOKEN(hop_index, "hop-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribution-intervals")
    {
        if(distribution_intervals == nullptr)
        {
            distribution_intervals = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals>();
        }
        return distribution_intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(distribution_intervals != nullptr)
    {
        _children["distribution-intervals"] = distribution_intervals;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribution-intervals" || name == "hop-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionIntervals()
    :
    distribution_interval(this, {"distribution_index"})
{

    yang_name = "distribution-intervals"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::~DistributionIntervals()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distribution_interval.len(); index++)
    {
        if(distribution_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::has_operation() const
{
    for (std::size_t index=0; index<distribution_interval.len(); index++)
    {
        if(distribution_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribution-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribution-interval")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval>();
        ent_->parent = this;
        distribution_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : distribution_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribution-interval")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::DistributionInterval()
    :
    distribution_index{YType::uint32, "distribution-index"}
        ,
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "distribution-interval"; yang_parent_name = "distribution-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::~DistributionInterval()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::has_data() const
{
    if (is_presence_container) return true;
    return distribution_index.is_set
	|| (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribution_index.yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribution-interval";
    ADD_KEY_TOKEN(distribution_index, "distribution-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribution_index.is_set || is_set(distribution_index.yfilter)) leaf_name_data.push_back(distribution_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribution-index")
    {
        distribution_index = value;
        distribution_index.value_namespace = name_space;
        distribution_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribution-index")
    {
        distribution_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats" || name == "distribution-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "distribution-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "distribution-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Paths::Path::Hops::Hop::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::Target()
    :
    distribution_intervals(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals>())
{
    distribution_intervals->parent = this;

    yang_name = "target"; yang_parent_name = "distributed"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::~Target()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::has_data() const
{
    if (is_presence_container) return true;
    return (distribution_intervals !=  nullptr && distribution_intervals->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::has_operation() const
{
    return is_set(yfilter)
	|| (distribution_intervals !=  nullptr && distribution_intervals->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribution-intervals")
    {
        if(distribution_intervals == nullptr)
        {
            distribution_intervals = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals>();
        }
        return distribution_intervals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(distribution_intervals != nullptr)
    {
        _children["distribution-intervals"] = distribution_intervals;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribution-intervals")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionIntervals()
    :
    distribution_interval(this, {"distribution_index"})
{

    yang_name = "distribution-intervals"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::~DistributionIntervals()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distribution_interval.len(); index++)
    {
        if(distribution_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::has_operation() const
{
    for (std::size_t index=0; index<distribution_interval.len(); index++)
    {
        if(distribution_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribution-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribution-interval")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval>();
        ent_->parent = this;
        distribution_interval.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : distribution_interval.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribution-interval")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::DistributionInterval()
    :
    distribution_index{YType::uint32, "distribution-index"}
        ,
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "distribution-interval"; yang_parent_name = "distribution-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::~DistributionInterval()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::has_data() const
{
    if (is_presence_container) return true;
    return distribution_index.is_set
	|| (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribution_index.yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribution-interval";
    ADD_KEY_TOKEN(distribution_index, "distribution-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribution_index.is_set || is_set(distribution_index.yfilter)) leaf_name_data.push_back(distribution_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribution-index")
    {
        distribution_index = value;
        distribution_index.value_namespace = name_space;
        distribution_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribution-index")
    {
        distribution_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats" || name == "distribution-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "distribution-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "distribution-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::Distributed::Target::DistributionIntervals::DistributionInterval::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::NonDistributed()
    :
    target(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target>())
    , paths(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths>())
    , lpd_paths(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths>())
{
    target->parent = this;
    paths->parent = this;
    lpd_paths->parent = this;

    yang_name = "non-distributed"; yang_parent_name = "hour"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::~NonDistributed()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::has_data() const
{
    if (is_presence_container) return true;
    return (target !=  nullptr && target->has_data())
	|| (paths !=  nullptr && paths->has_data())
	|| (lpd_paths !=  nullptr && lpd_paths->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::has_operation() const
{
    return is_set(yfilter)
	|| (target !=  nullptr && target->has_operation())
	|| (paths !=  nullptr && paths->has_operation())
	|| (lpd_paths !=  nullptr && lpd_paths->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-distributed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target>();
        }
        return target;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths>();
        }
        return paths;
    }

    if(child_yang_name == "lpd-paths")
    {
        if(lpd_paths == nullptr)
        {
            lpd_paths = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths>();
        }
        return lpd_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target != nullptr)
    {
        _children["target"] = target;
    }

    if(paths != nullptr)
    {
        _children["paths"] = paths;
    }

    if(lpd_paths != nullptr)
    {
        _children["lpd-paths"] = lpd_paths;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target" || name == "paths" || name == "lpd-paths")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::Target()
    :
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "target"; yang_parent_name = "non-distributed"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::~Target()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::has_data() const
{
    if (is_presence_container) return true;
    return (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::has_operation() const
{
    return is_set(yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "target"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Target::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Paths()
    :
    path(this, {"path_index"})
{

    yang_name = "paths"; yang_parent_name = "non-distributed"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::~Paths()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Path()
    :
    path_index{YType::uint32, "path-index"}
        ,
    hops(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops>())
{
    hops->parent = this;

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::~Path()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops>();
        }
        return hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hops != nullptr)
    {
        _children["hops"] = hops;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "path-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hops()
    :
    hop(this, {"hop_index"})
{

    yang_name = "hops"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::~Hops()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop>();
        ent_->parent = this;
        hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::Hop()
    :
    hop_index{YType::uint32, "hop-index"}
        ,
    common_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats>())
    , specific_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats>())
{
    common_stats->parent = this;
    specific_stats->parent = this;

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::~Hop()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| (common_stats !=  nullptr && common_stats->has_data())
	|| (specific_stats !=  nullptr && specific_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| (common_stats !=  nullptr && common_stats->has_operation())
	|| (specific_stats !=  nullptr && specific_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    ADD_KEY_TOKEN(hop_index, "hop-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-stats")
    {
        if(common_stats == nullptr)
        {
            common_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats>();
        }
        return common_stats;
    }

    if(child_yang_name == "specific-stats")
    {
        if(specific_stats == nullptr)
        {
            specific_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats>();
        }
        return specific_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_stats != nullptr)
    {
        _children["common-stats"] = common_stats;
    }

    if(specific_stats != nullptr)
    {
        _children["specific-stats"] = specific_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-stats" || name == "specific-stats" || name == "hop-index")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::CommonStats()
    :
    operation_time{YType::uint64, "operation-time"},
    return_code{YType::enumeration, "return-code"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    update_count{YType::uint32, "update-count"},
    ok_count{YType::uint32, "ok-count"},
    disconnect_count{YType::uint32, "disconnect-count"},
    timeout_count{YType::uint32, "timeout-count"},
    busy_count{YType::uint32, "busy-count"},
    no_connection_count{YType::uint32, "no-connection-count"},
    dropped_count{YType::uint32, "dropped-count"},
    internal_error_count{YType::uint32, "internal-error-count"},
    sequence_error_count{YType::uint32, "sequence-error-count"},
    verify_error_count{YType::uint32, "verify-error-count"}
{

    yang_name = "common-stats"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::~CommonStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::has_data() const
{
    if (is_presence_container) return true;
    return operation_time.is_set
	|| return_code.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| update_count.is_set
	|| ok_count.is_set
	|| disconnect_count.is_set
	|| timeout_count.is_set
	|| busy_count.is_set
	|| no_connection_count.is_set
	|| dropped_count.is_set
	|| internal_error_count.is_set
	|| sequence_error_count.is_set
	|| verify_error_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_time.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(update_count.yfilter)
	|| ydk::is_set(ok_count.yfilter)
	|| ydk::is_set(disconnect_count.yfilter)
	|| ydk::is_set(timeout_count.yfilter)
	|| ydk::is_set(busy_count.yfilter)
	|| ydk::is_set(no_connection_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(sequence_error_count.yfilter)
	|| ydk::is_set(verify_error_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_time.is_set || is_set(operation_time.yfilter)) leaf_name_data.push_back(operation_time.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (update_count.is_set || is_set(update_count.yfilter)) leaf_name_data.push_back(update_count.get_name_leafdata());
    if (ok_count.is_set || is_set(ok_count.yfilter)) leaf_name_data.push_back(ok_count.get_name_leafdata());
    if (disconnect_count.is_set || is_set(disconnect_count.yfilter)) leaf_name_data.push_back(disconnect_count.get_name_leafdata());
    if (timeout_count.is_set || is_set(timeout_count.yfilter)) leaf_name_data.push_back(timeout_count.get_name_leafdata());
    if (busy_count.is_set || is_set(busy_count.yfilter)) leaf_name_data.push_back(busy_count.get_name_leafdata());
    if (no_connection_count.is_set || is_set(no_connection_count.yfilter)) leaf_name_data.push_back(no_connection_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (sequence_error_count.is_set || is_set(sequence_error_count.yfilter)) leaf_name_data.push_back(sequence_error_count.get_name_leafdata());
    if (verify_error_count.is_set || is_set(verify_error_count.yfilter)) leaf_name_data.push_back(verify_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-time")
    {
        operation_time = value;
        operation_time.value_namespace = name_space;
        operation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-count")
    {
        update_count = value;
        update_count.value_namespace = name_space;
        update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ok-count")
    {
        ok_count = value;
        ok_count.value_namespace = name_space;
        ok_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count = value;
        disconnect_count.value_namespace = name_space;
        disconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-count")
    {
        timeout_count = value;
        timeout_count.value_namespace = name_space;
        timeout_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busy-count")
    {
        busy_count = value;
        busy_count.value_namespace = name_space;
        busy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count = value;
        no_connection_count.value_namespace = name_space;
        no_connection_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count = value;
        sequence_error_count.value_namespace = name_space;
        sequence_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count = value;
        verify_error_count.value_namespace = name_space;
        verify_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-time")
    {
        operation_time.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "update-count")
    {
        update_count.yfilter = yfilter;
    }
    if(value_path == "ok-count")
    {
        ok_count.yfilter = yfilter;
    }
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
    if(value_path == "timeout-count")
    {
        timeout_count.yfilter = yfilter;
    }
    if(value_path == "busy-count")
    {
        busy_count.yfilter = yfilter;
    }
    if(value_path == "no-connection-count")
    {
        no_connection_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "sequence-error-count")
    {
        sequence_error_count.yfilter = yfilter;
    }
    if(value_path == "verify-error-count")
    {
        verify_error_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::CommonStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-time" || name == "return-code" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "update-count" || name == "ok-count" || name == "disconnect-count" || name == "timeout-count" || name == "busy-count" || name == "no-connection-count" || name == "dropped-count" || name == "internal-error-count" || name == "sequence-error-count" || name == "verify-error-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::SpecificStats()
    :
    op_type{YType::enumeration, "op-type"}
        ,
    icmp_path_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats>())
    , udp_jitter_stats(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats>())
{
    icmp_path_jitter_stats->parent = this;
    udp_jitter_stats->parent = this;

    yang_name = "specific-stats"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::~SpecificStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::has_data() const
{
    if (is_presence_container) return true;
    return op_type.is_set
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_data())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(op_type.yfilter)
	|| (icmp_path_jitter_stats !=  nullptr && icmp_path_jitter_stats->has_operation())
	|| (udp_jitter_stats !=  nullptr && udp_jitter_stats->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-path-jitter-stats")
    {
        if(icmp_path_jitter_stats == nullptr)
        {
            icmp_path_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats>();
        }
        return icmp_path_jitter_stats;
    }

    if(child_yang_name == "udp-jitter-stats")
    {
        if(udp_jitter_stats == nullptr)
        {
            udp_jitter_stats = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats>();
        }
        return udp_jitter_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_path_jitter_stats != nullptr)
    {
        _children["icmp-path-jitter-stats"] = icmp_path_jitter_stats;
    }

    if(udp_jitter_stats != nullptr)
    {
        _children["udp-jitter-stats"] = udp_jitter_stats;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-path-jitter-stats" || name == "udp-jitter-stats" || name == "op-type")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::IcmpPathJitterStats()
    :
    source_address{YType::str, "source-address"},
    dest_address{YType::str, "dest-address"},
    hop_address{YType::str, "hop-address"},
    packet_interval{YType::uint32, "packet-interval"},
    response_time_count{YType::uint32, "response-time-count"},
    response_time{YType::uint32, "response-time"},
    min_response_time{YType::uint32, "min-response-time"},
    max_response_time{YType::uint32, "max-response-time"},
    sum_response_time{YType::uint32, "sum-response-time"},
    sum2_response_time{YType::uint64, "sum2-response-time"},
    packet_count{YType::uint32, "packet-count"},
    packet_loss_count{YType::uint32, "packet-loss-count"},
    out_of_sequence_count{YType::uint32, "out-of-sequence-count"},
    discarded_sample_count{YType::uint32, "discarded-sample-count"},
    verify_errors_count{YType::uint32, "verify-errors-count"},
    dropped_error_count{YType::uint32, "dropped-error-count"},
    jitter{YType::uint32, "jitter"},
    pos_jitter_sum{YType::uint32, "pos-jitter-sum"},
    pos_jitter_sum2{YType::uint64, "pos-jitter-sum2"},
    pos_jitter_min{YType::uint32, "pos-jitter-min"},
    pos_jitter_max{YType::uint32, "pos-jitter-max"},
    pos_jitter_count{YType::uint32, "pos-jitter-count"},
    neg_jitter_sum{YType::uint32, "neg-jitter-sum"},
    neg_jitter_min{YType::uint32, "neg-jitter-min"},
    neg_jitter_max{YType::uint32, "neg-jitter-max"},
    neg_jitter_sum2{YType::uint64, "neg-jitter-sum2"},
    neg_jitter_count{YType::uint32, "neg-jitter-count"}
{

    yang_name = "icmp-path-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::~IcmpPathJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| dest_address.is_set
	|| hop_address.is_set
	|| packet_interval.is_set
	|| response_time_count.is_set
	|| response_time.is_set
	|| min_response_time.is_set
	|| max_response_time.is_set
	|| sum_response_time.is_set
	|| sum2_response_time.is_set
	|| packet_count.is_set
	|| packet_loss_count.is_set
	|| out_of_sequence_count.is_set
	|| discarded_sample_count.is_set
	|| verify_errors_count.is_set
	|| dropped_error_count.is_set
	|| jitter.is_set
	|| pos_jitter_sum.is_set
	|| pos_jitter_sum2.is_set
	|| pos_jitter_min.is_set
	|| pos_jitter_max.is_set
	|| pos_jitter_count.is_set
	|| neg_jitter_sum.is_set
	|| neg_jitter_min.is_set
	|| neg_jitter_max.is_set
	|| neg_jitter_sum2.is_set
	|| neg_jitter_count.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(dest_address.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(response_time_count.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(min_response_time.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(sum_response_time.yfilter)
	|| ydk::is_set(sum2_response_time.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_loss_count.yfilter)
	|| ydk::is_set(out_of_sequence_count.yfilter)
	|| ydk::is_set(discarded_sample_count.yfilter)
	|| ydk::is_set(verify_errors_count.yfilter)
	|| ydk::is_set(dropped_error_count.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(pos_jitter_sum.yfilter)
	|| ydk::is_set(pos_jitter_sum2.yfilter)
	|| ydk::is_set(pos_jitter_min.yfilter)
	|| ydk::is_set(pos_jitter_max.yfilter)
	|| ydk::is_set(pos_jitter_count.yfilter)
	|| ydk::is_set(neg_jitter_sum.yfilter)
	|| ydk::is_set(neg_jitter_min.yfilter)
	|| ydk::is_set(neg_jitter_max.yfilter)
	|| ydk::is_set(neg_jitter_sum2.yfilter)
	|| ydk::is_set(neg_jitter_count.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-path-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (response_time_count.is_set || is_set(response_time_count.yfilter)) leaf_name_data.push_back(response_time_count.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (min_response_time.is_set || is_set(min_response_time.yfilter)) leaf_name_data.push_back(min_response_time.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (sum_response_time.is_set || is_set(sum_response_time.yfilter)) leaf_name_data.push_back(sum_response_time.get_name_leafdata());
    if (sum2_response_time.is_set || is_set(sum2_response_time.yfilter)) leaf_name_data.push_back(sum2_response_time.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_loss_count.is_set || is_set(packet_loss_count.yfilter)) leaf_name_data.push_back(packet_loss_count.get_name_leafdata());
    if (out_of_sequence_count.is_set || is_set(out_of_sequence_count.yfilter)) leaf_name_data.push_back(out_of_sequence_count.get_name_leafdata());
    if (discarded_sample_count.is_set || is_set(discarded_sample_count.yfilter)) leaf_name_data.push_back(discarded_sample_count.get_name_leafdata());
    if (verify_errors_count.is_set || is_set(verify_errors_count.yfilter)) leaf_name_data.push_back(verify_errors_count.get_name_leafdata());
    if (dropped_error_count.is_set || is_set(dropped_error_count.yfilter)) leaf_name_data.push_back(dropped_error_count.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (pos_jitter_sum.is_set || is_set(pos_jitter_sum.yfilter)) leaf_name_data.push_back(pos_jitter_sum.get_name_leafdata());
    if (pos_jitter_sum2.is_set || is_set(pos_jitter_sum2.yfilter)) leaf_name_data.push_back(pos_jitter_sum2.get_name_leafdata());
    if (pos_jitter_min.is_set || is_set(pos_jitter_min.yfilter)) leaf_name_data.push_back(pos_jitter_min.get_name_leafdata());
    if (pos_jitter_max.is_set || is_set(pos_jitter_max.yfilter)) leaf_name_data.push_back(pos_jitter_max.get_name_leafdata());
    if (pos_jitter_count.is_set || is_set(pos_jitter_count.yfilter)) leaf_name_data.push_back(pos_jitter_count.get_name_leafdata());
    if (neg_jitter_sum.is_set || is_set(neg_jitter_sum.yfilter)) leaf_name_data.push_back(neg_jitter_sum.get_name_leafdata());
    if (neg_jitter_min.is_set || is_set(neg_jitter_min.yfilter)) leaf_name_data.push_back(neg_jitter_min.get_name_leafdata());
    if (neg_jitter_max.is_set || is_set(neg_jitter_max.yfilter)) leaf_name_data.push_back(neg_jitter_max.get_name_leafdata());
    if (neg_jitter_sum2.is_set || is_set(neg_jitter_sum2.yfilter)) leaf_name_data.push_back(neg_jitter_sum2.get_name_leafdata());
    if (neg_jitter_count.is_set || is_set(neg_jitter_count.yfilter)) leaf_name_data.push_back(neg_jitter_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time-count")
    {
        response_time_count = value;
        response_time_count.value_namespace = name_space;
        response_time_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-response-time")
    {
        min_response_time = value;
        min_response_time.value_namespace = name_space;
        min_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time = value;
        sum_response_time.value_namespace = name_space;
        sum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time = value;
        sum2_response_time.value_namespace = name_space;
        sum2_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count = value;
        packet_loss_count.value_namespace = name_space;
        packet_loss_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count = value;
        out_of_sequence_count.value_namespace = name_space;
        out_of_sequence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count = value;
        discarded_sample_count.value_namespace = name_space;
        discarded_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count = value;
        verify_errors_count.value_namespace = name_space;
        verify_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count = value;
        dropped_error_count.value_namespace = name_space;
        dropped_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum = value;
        pos_jitter_sum.value_namespace = name_space;
        pos_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2 = value;
        pos_jitter_sum2.value_namespace = name_space;
        pos_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min = value;
        pos_jitter_min.value_namespace = name_space;
        pos_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max = value;
        pos_jitter_max.value_namespace = name_space;
        pos_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count = value;
        pos_jitter_count.value_namespace = name_space;
        pos_jitter_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum = value;
        neg_jitter_sum.value_namespace = name_space;
        neg_jitter_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min = value;
        neg_jitter_min.value_namespace = name_space;
        neg_jitter_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max = value;
        neg_jitter_max.value_namespace = name_space;
        neg_jitter_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2 = value;
        neg_jitter_sum2.value_namespace = name_space;
        neg_jitter_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count = value;
        neg_jitter_count.value_namespace = name_space;
        neg_jitter_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "response-time-count")
    {
        response_time_count.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "min-response-time")
    {
        min_response_time.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "sum-response-time")
    {
        sum_response_time.yfilter = yfilter;
    }
    if(value_path == "sum2-response-time")
    {
        sum2_response_time.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-loss-count")
    {
        packet_loss_count.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-count")
    {
        out_of_sequence_count.yfilter = yfilter;
    }
    if(value_path == "discarded-sample-count")
    {
        discarded_sample_count.yfilter = yfilter;
    }
    if(value_path == "verify-errors-count")
    {
        verify_errors_count.yfilter = yfilter;
    }
    if(value_path == "dropped-error-count")
    {
        dropped_error_count.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum")
    {
        pos_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-sum2")
    {
        pos_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-min")
    {
        pos_jitter_min.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-max")
    {
        pos_jitter_max.yfilter = yfilter;
    }
    if(value_path == "pos-jitter-count")
    {
        pos_jitter_count.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum")
    {
        neg_jitter_sum.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-min")
    {
        neg_jitter_min.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-max")
    {
        neg_jitter_max.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-sum2")
    {
        neg_jitter_sum2.yfilter = yfilter;
    }
    if(value_path == "neg-jitter-count")
    {
        neg_jitter_count.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::IcmpPathJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "dest-address" || name == "hop-address" || name == "packet-interval" || name == "response-time-count" || name == "response-time" || name == "min-response-time" || name == "max-response-time" || name == "sum-response-time" || name == "sum2-response-time" || name == "packet-count" || name == "packet-loss-count" || name == "out-of-sequence-count" || name == "discarded-sample-count" || name == "verify-errors-count" || name == "dropped-error-count" || name == "jitter" || name == "pos-jitter-sum" || name == "pos-jitter-sum2" || name == "pos-jitter-min" || name == "pos-jitter-max" || name == "pos-jitter-count" || name == "neg-jitter-sum" || name == "neg-jitter-min" || name == "neg-jitter-max" || name == "neg-jitter-sum2" || name == "neg-jitter-count")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::UdpJitterStats()
    :
    jitter_in{YType::uint32, "jitter-in"},
    jitter_out{YType::uint32, "jitter-out"},
    packet_loss_sd{YType::uint32, "packet-loss-sd"},
    packet_loss_ds{YType::uint32, "packet-loss-ds"},
    packet_out_of_sequence{YType::uint32, "packet-out-of-sequence"},
    packet_mia{YType::uint32, "packet-mia"},
    packet_skipped{YType::uint32, "packet-skipped"},
    packet_late_arrivals{YType::uint32, "packet-late-arrivals"},
    packet_invalid_tstamp{YType::uint32, "packet-invalid-tstamp"},
    internal_errors_count{YType::uint32, "internal-errors-count"},
    busies_count{YType::uint32, "busies-count"},
    positive_sd_sum{YType::uint32, "positive-sd-sum"},
    positive_sd_sum2{YType::uint64, "positive-sd-sum2"},
    positive_sd_min{YType::uint32, "positive-sd-min"},
    positive_sd_max{YType::uint32, "positive-sd-max"},
    positive_sd_count{YType::uint32, "positive-sd-count"},
    negative_sd_sum{YType::uint32, "negative-sd-sum"},
    negative_sd_sum2{YType::uint64, "negative-sd-sum2"},
    negative_sd_min{YType::uint32, "negative-sd-min"},
    negative_sd_max{YType::uint32, "negative-sd-max"},
    negative_sd_count{YType::uint32, "negative-sd-count"},
    positive_ds_sum{YType::uint32, "positive-ds-sum"},
    positive_ds_sum2{YType::uint64, "positive-ds-sum2"},
    positive_ds_min{YType::uint32, "positive-ds-min"},
    positive_ds_max{YType::uint32, "positive-ds-max"},
    positive_ds_count{YType::uint32, "positive-ds-count"},
    negative_ds_sum{YType::uint32, "negative-ds-sum"},
    negative_ds_sum2{YType::uint64, "negative-ds-sum2"},
    negative_ds_min{YType::uint32, "negative-ds-min"},
    negative_ds_max{YType::uint32, "negative-ds-max"},
    negative_ds_count{YType::uint32, "negative-ds-count"},
    one_way_count{YType::uint32, "one-way-count"},
    one_way_sd_min{YType::uint32, "one-way-sd-min"},
    one_way_sd_max{YType::uint32, "one-way-sd-max"},
    one_way_sd_sum{YType::uint32, "one-way-sd-sum"},
    one_way_sd_sum2{YType::uint64, "one-way-sd-sum2"},
    one_way_ds_min{YType::uint32, "one-way-ds-min"},
    one_way_ds_max{YType::uint32, "one-way-ds-max"},
    one_way_ds_sum{YType::uint32, "one-way-ds-sum"},
    one_way_ds_sum2{YType::uint64, "one-way-ds-sum2"}
{

    yang_name = "udp-jitter-stats"; yang_parent_name = "specific-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::~UdpJitterStats()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::has_data() const
{
    if (is_presence_container) return true;
    return jitter_in.is_set
	|| jitter_out.is_set
	|| packet_loss_sd.is_set
	|| packet_loss_ds.is_set
	|| packet_out_of_sequence.is_set
	|| packet_mia.is_set
	|| packet_skipped.is_set
	|| packet_late_arrivals.is_set
	|| packet_invalid_tstamp.is_set
	|| internal_errors_count.is_set
	|| busies_count.is_set
	|| positive_sd_sum.is_set
	|| positive_sd_sum2.is_set
	|| positive_sd_min.is_set
	|| positive_sd_max.is_set
	|| positive_sd_count.is_set
	|| negative_sd_sum.is_set
	|| negative_sd_sum2.is_set
	|| negative_sd_min.is_set
	|| negative_sd_max.is_set
	|| negative_sd_count.is_set
	|| positive_ds_sum.is_set
	|| positive_ds_sum2.is_set
	|| positive_ds_min.is_set
	|| positive_ds_max.is_set
	|| positive_ds_count.is_set
	|| negative_ds_sum.is_set
	|| negative_ds_sum2.is_set
	|| negative_ds_min.is_set
	|| negative_ds_max.is_set
	|| negative_ds_count.is_set
	|| one_way_count.is_set
	|| one_way_sd_min.is_set
	|| one_way_sd_max.is_set
	|| one_way_sd_sum.is_set
	|| one_way_sd_sum2.is_set
	|| one_way_ds_min.is_set
	|| one_way_ds_max.is_set
	|| one_way_ds_sum.is_set
	|| one_way_ds_sum2.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jitter_in.yfilter)
	|| ydk::is_set(jitter_out.yfilter)
	|| ydk::is_set(packet_loss_sd.yfilter)
	|| ydk::is_set(packet_loss_ds.yfilter)
	|| ydk::is_set(packet_out_of_sequence.yfilter)
	|| ydk::is_set(packet_mia.yfilter)
	|| ydk::is_set(packet_skipped.yfilter)
	|| ydk::is_set(packet_late_arrivals.yfilter)
	|| ydk::is_set(packet_invalid_tstamp.yfilter)
	|| ydk::is_set(internal_errors_count.yfilter)
	|| ydk::is_set(busies_count.yfilter)
	|| ydk::is_set(positive_sd_sum.yfilter)
	|| ydk::is_set(positive_sd_sum2.yfilter)
	|| ydk::is_set(positive_sd_min.yfilter)
	|| ydk::is_set(positive_sd_max.yfilter)
	|| ydk::is_set(positive_sd_count.yfilter)
	|| ydk::is_set(negative_sd_sum.yfilter)
	|| ydk::is_set(negative_sd_sum2.yfilter)
	|| ydk::is_set(negative_sd_min.yfilter)
	|| ydk::is_set(negative_sd_max.yfilter)
	|| ydk::is_set(negative_sd_count.yfilter)
	|| ydk::is_set(positive_ds_sum.yfilter)
	|| ydk::is_set(positive_ds_sum2.yfilter)
	|| ydk::is_set(positive_ds_min.yfilter)
	|| ydk::is_set(positive_ds_max.yfilter)
	|| ydk::is_set(positive_ds_count.yfilter)
	|| ydk::is_set(negative_ds_sum.yfilter)
	|| ydk::is_set(negative_ds_sum2.yfilter)
	|| ydk::is_set(negative_ds_min.yfilter)
	|| ydk::is_set(negative_ds_max.yfilter)
	|| ydk::is_set(negative_ds_count.yfilter)
	|| ydk::is_set(one_way_count.yfilter)
	|| ydk::is_set(one_way_sd_min.yfilter)
	|| ydk::is_set(one_way_sd_max.yfilter)
	|| ydk::is_set(one_way_sd_sum.yfilter)
	|| ydk::is_set(one_way_sd_sum2.yfilter)
	|| ydk::is_set(one_way_ds_min.yfilter)
	|| ydk::is_set(one_way_ds_max.yfilter)
	|| ydk::is_set(one_way_ds_sum.yfilter)
	|| ydk::is_set(one_way_ds_sum2.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jitter_in.is_set || is_set(jitter_in.yfilter)) leaf_name_data.push_back(jitter_in.get_name_leafdata());
    if (jitter_out.is_set || is_set(jitter_out.yfilter)) leaf_name_data.push_back(jitter_out.get_name_leafdata());
    if (packet_loss_sd.is_set || is_set(packet_loss_sd.yfilter)) leaf_name_data.push_back(packet_loss_sd.get_name_leafdata());
    if (packet_loss_ds.is_set || is_set(packet_loss_ds.yfilter)) leaf_name_data.push_back(packet_loss_ds.get_name_leafdata());
    if (packet_out_of_sequence.is_set || is_set(packet_out_of_sequence.yfilter)) leaf_name_data.push_back(packet_out_of_sequence.get_name_leafdata());
    if (packet_mia.is_set || is_set(packet_mia.yfilter)) leaf_name_data.push_back(packet_mia.get_name_leafdata());
    if (packet_skipped.is_set || is_set(packet_skipped.yfilter)) leaf_name_data.push_back(packet_skipped.get_name_leafdata());
    if (packet_late_arrivals.is_set || is_set(packet_late_arrivals.yfilter)) leaf_name_data.push_back(packet_late_arrivals.get_name_leafdata());
    if (packet_invalid_tstamp.is_set || is_set(packet_invalid_tstamp.yfilter)) leaf_name_data.push_back(packet_invalid_tstamp.get_name_leafdata());
    if (internal_errors_count.is_set || is_set(internal_errors_count.yfilter)) leaf_name_data.push_back(internal_errors_count.get_name_leafdata());
    if (busies_count.is_set || is_set(busies_count.yfilter)) leaf_name_data.push_back(busies_count.get_name_leafdata());
    if (positive_sd_sum.is_set || is_set(positive_sd_sum.yfilter)) leaf_name_data.push_back(positive_sd_sum.get_name_leafdata());
    if (positive_sd_sum2.is_set || is_set(positive_sd_sum2.yfilter)) leaf_name_data.push_back(positive_sd_sum2.get_name_leafdata());
    if (positive_sd_min.is_set || is_set(positive_sd_min.yfilter)) leaf_name_data.push_back(positive_sd_min.get_name_leafdata());
    if (positive_sd_max.is_set || is_set(positive_sd_max.yfilter)) leaf_name_data.push_back(positive_sd_max.get_name_leafdata());
    if (positive_sd_count.is_set || is_set(positive_sd_count.yfilter)) leaf_name_data.push_back(positive_sd_count.get_name_leafdata());
    if (negative_sd_sum.is_set || is_set(negative_sd_sum.yfilter)) leaf_name_data.push_back(negative_sd_sum.get_name_leafdata());
    if (negative_sd_sum2.is_set || is_set(negative_sd_sum2.yfilter)) leaf_name_data.push_back(negative_sd_sum2.get_name_leafdata());
    if (negative_sd_min.is_set || is_set(negative_sd_min.yfilter)) leaf_name_data.push_back(negative_sd_min.get_name_leafdata());
    if (negative_sd_max.is_set || is_set(negative_sd_max.yfilter)) leaf_name_data.push_back(negative_sd_max.get_name_leafdata());
    if (negative_sd_count.is_set || is_set(negative_sd_count.yfilter)) leaf_name_data.push_back(negative_sd_count.get_name_leafdata());
    if (positive_ds_sum.is_set || is_set(positive_ds_sum.yfilter)) leaf_name_data.push_back(positive_ds_sum.get_name_leafdata());
    if (positive_ds_sum2.is_set || is_set(positive_ds_sum2.yfilter)) leaf_name_data.push_back(positive_ds_sum2.get_name_leafdata());
    if (positive_ds_min.is_set || is_set(positive_ds_min.yfilter)) leaf_name_data.push_back(positive_ds_min.get_name_leafdata());
    if (positive_ds_max.is_set || is_set(positive_ds_max.yfilter)) leaf_name_data.push_back(positive_ds_max.get_name_leafdata());
    if (positive_ds_count.is_set || is_set(positive_ds_count.yfilter)) leaf_name_data.push_back(positive_ds_count.get_name_leafdata());
    if (negative_ds_sum.is_set || is_set(negative_ds_sum.yfilter)) leaf_name_data.push_back(negative_ds_sum.get_name_leafdata());
    if (negative_ds_sum2.is_set || is_set(negative_ds_sum2.yfilter)) leaf_name_data.push_back(negative_ds_sum2.get_name_leafdata());
    if (negative_ds_min.is_set || is_set(negative_ds_min.yfilter)) leaf_name_data.push_back(negative_ds_min.get_name_leafdata());
    if (negative_ds_max.is_set || is_set(negative_ds_max.yfilter)) leaf_name_data.push_back(negative_ds_max.get_name_leafdata());
    if (negative_ds_count.is_set || is_set(negative_ds_count.yfilter)) leaf_name_data.push_back(negative_ds_count.get_name_leafdata());
    if (one_way_count.is_set || is_set(one_way_count.yfilter)) leaf_name_data.push_back(one_way_count.get_name_leafdata());
    if (one_way_sd_min.is_set || is_set(one_way_sd_min.yfilter)) leaf_name_data.push_back(one_way_sd_min.get_name_leafdata());
    if (one_way_sd_max.is_set || is_set(one_way_sd_max.yfilter)) leaf_name_data.push_back(one_way_sd_max.get_name_leafdata());
    if (one_way_sd_sum.is_set || is_set(one_way_sd_sum.yfilter)) leaf_name_data.push_back(one_way_sd_sum.get_name_leafdata());
    if (one_way_sd_sum2.is_set || is_set(one_way_sd_sum2.yfilter)) leaf_name_data.push_back(one_way_sd_sum2.get_name_leafdata());
    if (one_way_ds_min.is_set || is_set(one_way_ds_min.yfilter)) leaf_name_data.push_back(one_way_ds_min.get_name_leafdata());
    if (one_way_ds_max.is_set || is_set(one_way_ds_max.yfilter)) leaf_name_data.push_back(one_way_ds_max.get_name_leafdata());
    if (one_way_ds_sum.is_set || is_set(one_way_ds_sum.yfilter)) leaf_name_data.push_back(one_way_ds_sum.get_name_leafdata());
    if (one_way_ds_sum2.is_set || is_set(one_way_ds_sum2.yfilter)) leaf_name_data.push_back(one_way_ds_sum2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jitter-in")
    {
        jitter_in = value;
        jitter_in.value_namespace = name_space;
        jitter_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter-out")
    {
        jitter_out = value;
        jitter_out.value_namespace = name_space;
        jitter_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd = value;
        packet_loss_sd.value_namespace = name_space;
        packet_loss_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds = value;
        packet_loss_ds.value_namespace = name_space;
        packet_loss_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence = value;
        packet_out_of_sequence.value_namespace = name_space;
        packet_out_of_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-mia")
    {
        packet_mia = value;
        packet_mia.value_namespace = name_space;
        packet_mia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped = value;
        packet_skipped.value_namespace = name_space;
        packet_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals = value;
        packet_late_arrivals.value_namespace = name_space;
        packet_late_arrivals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp = value;
        packet_invalid_tstamp.value_namespace = name_space;
        packet_invalid_tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count = value;
        internal_errors_count.value_namespace = name_space;
        internal_errors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "busies-count")
    {
        busies_count = value;
        busies_count.value_namespace = name_space;
        busies_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum = value;
        positive_sd_sum.value_namespace = name_space;
        positive_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2 = value;
        positive_sd_sum2.value_namespace = name_space;
        positive_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min = value;
        positive_sd_min.value_namespace = name_space;
        positive_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max = value;
        positive_sd_max.value_namespace = name_space;
        positive_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count = value;
        positive_sd_count.value_namespace = name_space;
        positive_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum = value;
        negative_sd_sum.value_namespace = name_space;
        negative_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2 = value;
        negative_sd_sum2.value_namespace = name_space;
        negative_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min = value;
        negative_sd_min.value_namespace = name_space;
        negative_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max = value;
        negative_sd_max.value_namespace = name_space;
        negative_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count = value;
        negative_sd_count.value_namespace = name_space;
        negative_sd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum = value;
        positive_ds_sum.value_namespace = name_space;
        positive_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2 = value;
        positive_ds_sum2.value_namespace = name_space;
        positive_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min = value;
        positive_ds_min.value_namespace = name_space;
        positive_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max = value;
        positive_ds_max.value_namespace = name_space;
        positive_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count = value;
        positive_ds_count.value_namespace = name_space;
        positive_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum = value;
        negative_ds_sum.value_namespace = name_space;
        negative_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2 = value;
        negative_ds_sum2.value_namespace = name_space;
        negative_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min = value;
        negative_ds_min.value_namespace = name_space;
        negative_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max = value;
        negative_ds_max.value_namespace = name_space;
        negative_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count = value;
        negative_ds_count.value_namespace = name_space;
        negative_ds_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-count")
    {
        one_way_count = value;
        one_way_count.value_namespace = name_space;
        one_way_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min = value;
        one_way_sd_min.value_namespace = name_space;
        one_way_sd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max = value;
        one_way_sd_max.value_namespace = name_space;
        one_way_sd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum = value;
        one_way_sd_sum.value_namespace = name_space;
        one_way_sd_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2 = value;
        one_way_sd_sum2.value_namespace = name_space;
        one_way_sd_sum2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min = value;
        one_way_ds_min.value_namespace = name_space;
        one_way_ds_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max = value;
        one_way_ds_max.value_namespace = name_space;
        one_way_ds_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum = value;
        one_way_ds_sum.value_namespace = name_space;
        one_way_ds_sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2 = value;
        one_way_ds_sum2.value_namespace = name_space;
        one_way_ds_sum2.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jitter-in")
    {
        jitter_in.yfilter = yfilter;
    }
    if(value_path == "jitter-out")
    {
        jitter_out.yfilter = yfilter;
    }
    if(value_path == "packet-loss-sd")
    {
        packet_loss_sd.yfilter = yfilter;
    }
    if(value_path == "packet-loss-ds")
    {
        packet_loss_ds.yfilter = yfilter;
    }
    if(value_path == "packet-out-of-sequence")
    {
        packet_out_of_sequence.yfilter = yfilter;
    }
    if(value_path == "packet-mia")
    {
        packet_mia.yfilter = yfilter;
    }
    if(value_path == "packet-skipped")
    {
        packet_skipped.yfilter = yfilter;
    }
    if(value_path == "packet-late-arrivals")
    {
        packet_late_arrivals.yfilter = yfilter;
    }
    if(value_path == "packet-invalid-tstamp")
    {
        packet_invalid_tstamp.yfilter = yfilter;
    }
    if(value_path == "internal-errors-count")
    {
        internal_errors_count.yfilter = yfilter;
    }
    if(value_path == "busies-count")
    {
        busies_count.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum")
    {
        positive_sd_sum.yfilter = yfilter;
    }
    if(value_path == "positive-sd-sum2")
    {
        positive_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-sd-min")
    {
        positive_sd_min.yfilter = yfilter;
    }
    if(value_path == "positive-sd-max")
    {
        positive_sd_max.yfilter = yfilter;
    }
    if(value_path == "positive-sd-count")
    {
        positive_sd_count.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum")
    {
        negative_sd_sum.yfilter = yfilter;
    }
    if(value_path == "negative-sd-sum2")
    {
        negative_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-sd-min")
    {
        negative_sd_min.yfilter = yfilter;
    }
    if(value_path == "negative-sd-max")
    {
        negative_sd_max.yfilter = yfilter;
    }
    if(value_path == "negative-sd-count")
    {
        negative_sd_count.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum")
    {
        positive_ds_sum.yfilter = yfilter;
    }
    if(value_path == "positive-ds-sum2")
    {
        positive_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "positive-ds-min")
    {
        positive_ds_min.yfilter = yfilter;
    }
    if(value_path == "positive-ds-max")
    {
        positive_ds_max.yfilter = yfilter;
    }
    if(value_path == "positive-ds-count")
    {
        positive_ds_count.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum")
    {
        negative_ds_sum.yfilter = yfilter;
    }
    if(value_path == "negative-ds-sum2")
    {
        negative_ds_sum2.yfilter = yfilter;
    }
    if(value_path == "negative-ds-min")
    {
        negative_ds_min.yfilter = yfilter;
    }
    if(value_path == "negative-ds-max")
    {
        negative_ds_max.yfilter = yfilter;
    }
    if(value_path == "negative-ds-count")
    {
        negative_ds_count.yfilter = yfilter;
    }
    if(value_path == "one-way-count")
    {
        one_way_count.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-min")
    {
        one_way_sd_min.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-max")
    {
        one_way_sd_max.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum")
    {
        one_way_sd_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-sd-sum2")
    {
        one_way_sd_sum2.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-min")
    {
        one_way_ds_min.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-max")
    {
        one_way_ds_max.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum")
    {
        one_way_ds_sum.yfilter = yfilter;
    }
    if(value_path == "one-way-ds-sum2")
    {
        one_way_ds_sum2.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::Paths::Path::Hops::Hop::SpecificStats::UdpJitterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter-in" || name == "jitter-out" || name == "packet-loss-sd" || name == "packet-loss-ds" || name == "packet-out-of-sequence" || name == "packet-mia" || name == "packet-skipped" || name == "packet-late-arrivals" || name == "packet-invalid-tstamp" || name == "internal-errors-count" || name == "busies-count" || name == "positive-sd-sum" || name == "positive-sd-sum2" || name == "positive-sd-min" || name == "positive-sd-max" || name == "positive-sd-count" || name == "negative-sd-sum" || name == "negative-sd-sum2" || name == "negative-sd-min" || name == "negative-sd-max" || name == "negative-sd-count" || name == "positive-ds-sum" || name == "positive-ds-sum2" || name == "positive-ds-min" || name == "positive-ds-max" || name == "positive-ds-count" || name == "negative-ds-sum" || name == "negative-ds-sum2" || name == "negative-ds-min" || name == "negative-ds-max" || name == "negative-ds-count" || name == "one-way-count" || name == "one-way-sd-min" || name == "one-way-sd-max" || name == "one-way-sd-sum" || name == "one-way-sd-sum2" || name == "one-way-ds-min" || name == "one-way-ds-max" || name == "one-way-ds-sum" || name == "one-way-ds-sum2")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPaths()
    :
    lpd_path(this, {"path_index"})
{

    yang_name = "lpd-paths"; yang_parent_name = "non-distributed"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::~LpdPaths()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_data())
            return true;
    }
    return false;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::has_operation() const
{
    for (std::size_t index=0; index<lpd_path.len(); index++)
    {
        if(lpd_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpd-path")
    {
        auto ent_ = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath>();
        ent_->parent = this;
        lpd_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lpd_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpd-path")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::LpdPath()
    :
    path_index{YType::uint32, "path-index"},
    return_code{YType::enumeration, "return-code"}
        ,
    path_id(std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId>())
{
    path_id->parent = this;

    yang_name = "lpd-path"; yang_parent_name = "lpd-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::~LpdPath()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| return_code.is_set
	|| (path_id !=  nullptr && path_id->has_data());
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(return_code.yfilter)
	|| (path_id !=  nullptr && path_id->has_operation());
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpd-path";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-id")
    {
        if(path_id == nullptr)
        {
            path_id = std::make_shared<Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId>();
        }
        return path_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_id != nullptr)
    {
        _children["path-id"] = path_id;
    }

    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "path-index" || name == "return-code")
        return true;
    return false;
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::PathId()
    :
    lsp_selector{YType::str, "lsp-selector"},
    output_interface{YType::str, "output-interface"},
    nexthop_address{YType::str, "nexthop-address"},
    downstream_label{YType::uint32, "downstream-label"}
{

    yang_name = "path-id"; yang_parent_name = "lpd-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::~PathId()
{
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsp_selector.is_set
	|| output_interface.is_set
	|| nexthop_address.is_set;
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::has_operation() const
{
    for (auto const & leaf : downstream_label.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_selector.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter)
	|| ydk::is_set(downstream_label.yfilter);
}

std::string Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_selector.is_set || is_set(lsp_selector.yfilter)) leaf_name_data.push_back(lsp_selector.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    auto downstream_label_name_datas = downstream_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), downstream_label_name_datas.begin(), downstream_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector = value;
        lsp_selector.value_namespace = name_space;
        lsp_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.append(value);
    }
}

void Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-selector")
    {
        lsp_selector.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
    if(value_path == "downstream-label")
    {
        downstream_label.yfilter = yfilter;
    }
}

bool Ipsla::OperationData::Operations::Operation::Statistics::Aggregated::Hours::Hour::NonDistributed::LpdPaths::LpdPath::PathId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selector" || name == "output-interface" || name == "nexthop-address" || name == "downstream-label")
        return true;
    return false;
}

Ipsla::ApplicationInfo::ApplicationInfo()
    :
    version{YType::str, "version"},
    max_entries{YType::uint32, "max-entries"},
    entries_configured{YType::uint32, "entries-configured"},
    active_entries{YType::uint32, "active-entries"},
    pending_entries{YType::uint32, "pending-entries"},
    inactive_entries{YType::uint32, "inactive-entries"},
    configurable_probes{YType::uint32, "configurable-probes"},
    min_memory{YType::uint32, "min-memory"},
    hw_timestamp_disabled{YType::boolean, "hw-timestamp-disabled"},
    operation_type{YType::enumeration, "operation-type"}
{

    yang_name = "application-info"; yang_parent_name = "ipsla"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipsla::ApplicationInfo::~ApplicationInfo()
{
}

bool Ipsla::ApplicationInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : operation_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return version.is_set
	|| max_entries.is_set
	|| entries_configured.is_set
	|| active_entries.is_set
	|| pending_entries.is_set
	|| inactive_entries.is_set
	|| configurable_probes.is_set
	|| min_memory.is_set
	|| hw_timestamp_disabled.is_set;
}

bool Ipsla::ApplicationInfo::has_operation() const
{
    for (auto const & leaf : operation_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(max_entries.yfilter)
	|| ydk::is_set(entries_configured.yfilter)
	|| ydk::is_set(active_entries.yfilter)
	|| ydk::is_set(pending_entries.yfilter)
	|| ydk::is_set(inactive_entries.yfilter)
	|| ydk::is_set(configurable_probes.yfilter)
	|| ydk::is_set(min_memory.yfilter)
	|| ydk::is_set(hw_timestamp_disabled.yfilter)
	|| ydk::is_set(operation_type.yfilter);
}

std::string Ipsla::ApplicationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ipsla-oper:ipsla/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipsla::ApplicationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipsla::ApplicationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (max_entries.is_set || is_set(max_entries.yfilter)) leaf_name_data.push_back(max_entries.get_name_leafdata());
    if (entries_configured.is_set || is_set(entries_configured.yfilter)) leaf_name_data.push_back(entries_configured.get_name_leafdata());
    if (active_entries.is_set || is_set(active_entries.yfilter)) leaf_name_data.push_back(active_entries.get_name_leafdata());
    if (pending_entries.is_set || is_set(pending_entries.yfilter)) leaf_name_data.push_back(pending_entries.get_name_leafdata());
    if (inactive_entries.is_set || is_set(inactive_entries.yfilter)) leaf_name_data.push_back(inactive_entries.get_name_leafdata());
    if (configurable_probes.is_set || is_set(configurable_probes.yfilter)) leaf_name_data.push_back(configurable_probes.get_name_leafdata());
    if (min_memory.is_set || is_set(min_memory.yfilter)) leaf_name_data.push_back(min_memory.get_name_leafdata());
    if (hw_timestamp_disabled.is_set || is_set(hw_timestamp_disabled.yfilter)) leaf_name_data.push_back(hw_timestamp_disabled.get_name_leafdata());

    auto operation_type_name_datas = operation_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operation_type_name_datas.begin(), operation_type_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipsla::ApplicationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipsla::ApplicationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipsla::ApplicationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-entries")
    {
        max_entries = value;
        max_entries.value_namespace = name_space;
        max_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entries-configured")
    {
        entries_configured = value;
        entries_configured.value_namespace = name_space;
        entries_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-entries")
    {
        active_entries = value;
        active_entries.value_namespace = name_space;
        active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-entries")
    {
        pending_entries = value;
        pending_entries.value_namespace = name_space;
        pending_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive-entries")
    {
        inactive_entries = value;
        inactive_entries.value_namespace = name_space;
        inactive_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurable-probes")
    {
        configurable_probes = value;
        configurable_probes.value_namespace = name_space;
        configurable_probes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-memory")
    {
        min_memory = value;
        min_memory.value_namespace = name_space;
        min_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-timestamp-disabled")
    {
        hw_timestamp_disabled = value;
        hw_timestamp_disabled.value_namespace = name_space;
        hw_timestamp_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-type")
    {
        operation_type.append(value);
    }
}

void Ipsla::ApplicationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "max-entries")
    {
        max_entries.yfilter = yfilter;
    }
    if(value_path == "entries-configured")
    {
        entries_configured.yfilter = yfilter;
    }
    if(value_path == "active-entries")
    {
        active_entries.yfilter = yfilter;
    }
    if(value_path == "pending-entries")
    {
        pending_entries.yfilter = yfilter;
    }
    if(value_path == "inactive-entries")
    {
        inactive_entries.yfilter = yfilter;
    }
    if(value_path == "configurable-probes")
    {
        configurable_probes.yfilter = yfilter;
    }
    if(value_path == "min-memory")
    {
        min_memory.yfilter = yfilter;
    }
    if(value_path == "hw-timestamp-disabled")
    {
        hw_timestamp_disabled.yfilter = yfilter;
    }
    if(value_path == "operation-type")
    {
        operation_type.yfilter = yfilter;
    }
}

bool Ipsla::ApplicationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "max-entries" || name == "entries-configured" || name == "active-entries" || name == "pending-entries" || name == "inactive-entries" || name == "configurable-probes" || name == "min-memory" || name == "hw-timestamp-disabled" || name == "operation-type")
        return true;
    return false;
}

const Enum::YLeaf IpslaTargetTypeEnum::ipv4_address_target_type {1, "ipv4-address-target-type"};
const Enum::YLeaf IpslaTargetTypeEnum::ipv4_prefix_target_type {2, "ipv4-prefix-target-type"};
const Enum::YLeaf IpslaTargetTypeEnum::tunnel_id_target_type {3, "tunnel-id-target-type"};
const Enum::YLeaf IpslaTargetTypeEnum::ipv4_pseudowire_target_type {4, "ipv4-pseudowire-target-type"};
const Enum::YLeaf IpslaTargetTypeEnum::ipv6_address_target_type {5, "ipv6-address-target-type"};

const Enum::YLeaf SlaOpTypes::oper_icmp_echo {1, "oper-icmp-echo"};
const Enum::YLeaf SlaOpTypes::oper_icmp_path_jitter {2, "oper-icmp-path-jitter"};
const Enum::YLeaf SlaOpTypes::oper_icmp_path_echo {4, "oper-icmp-path-echo"};
const Enum::YLeaf SlaOpTypes::oper_udp_jitter {8, "oper-udp-jitter"};
const Enum::YLeaf SlaOpTypes::oper_udp_echo {16, "oper-udp-echo"};
const Enum::YLeaf SlaOpTypes::oper_mpls_lsp_ping {32, "oper-mpls-lsp-ping"};
const Enum::YLeaf SlaOpTypes::oper_mpls_lsp_trace {64, "oper-mpls-lsp-trace"};
const Enum::YLeaf SlaOpTypes::oper_mpls_lsp_group {128, "oper-mpls-lsp-group"};

const Enum::YLeaf IpslaRetCode::ipsla_ret_code_unknown {0, "ipsla-ret-code-unknown"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_ok {1, "ipsla-ret-code-ok"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_disconnect {2, "ipsla-ret-code-disconnect"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_over_threshold {3, "ipsla-ret-code-over-threshold"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_timeout {4, "ipsla-ret-code-timeout"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_busy {5, "ipsla-ret-code-busy"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_no_connection {6, "ipsla-ret-code-no-connection"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_dropped {7, "ipsla-ret-code-dropped"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sequence_error {8, "ipsla-ret-code-sequence-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_verify_error {9, "ipsla-ret-code-verify-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_application_specific {10, "ipsla-ret-code-application-specific"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_dns_server_timeout {11, "ipsla-ret-code-dns-server-timeout"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_tcp_connect_timeout {12, "ipsla-ret-code-tcp-connect-timeout"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_http_transaction_timeout {13, "ipsla-ret-code-http-transaction-timeout"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_dns_query_error {14, "ipsla-ret-code-dns-query-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_http_error {15, "ipsla-ret-code-http-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_internal_error {16, "ipsla-ret-code-internal-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_mpls_lsp_echo_tx_error {17, "ipsla-ret-code-mpls-lsp-echo-tx-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_mpls_lsp_unreachable {18, "ipsla-ret-code-mpls-lsp-unreachable"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_mpls_lsp_malformed_request {19, "ipsla-ret-code-mpls-lsp-malformed-request"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_mpls_lsp_reachable_but_not_fec {20, "ipsla-ret-code-mpls-lsp-reachable-but-not-fec"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_mpls_lsp_ds_map_mismatch {21, "ipsla-ret-code-mpls-lsp-ds-map-mismatch"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_mpls_lsp_duplicate {22, "ipsla-ret-code-mpls-lsp-duplicate"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_failure {23, "ipsla-ret-code-failure"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_malloc_failure {24, "ipsla-ret-code-malloc-failure"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_open_error {25, "ipsla-ret-code-sock-open-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_bind_error {26, "ipsla-ret-code-sock-bind-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_send_error {27, "ipsla-ret-code-sock-send-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_recv_error {28, "ipsla-ret-code-sock-recv-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_connect_error {29, "ipsla-ret-code-sock-connect-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_set_option_error {30, "ipsla-ret-code-sock-set-option-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_sock_attach_error {31, "ipsla-ret-code-sock-attach-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_ctrl_msg_error {32, "ipsla-ret-code-ctrl-msg-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_no_key_chain {33, "ipsla-ret-code-no-key-chain"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_key_chain_lib_fail {34, "ipsla-ret-code-key-chain-lib-fail"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_no_key_id {35, "ipsla-ret-code-no-key-id"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_invalid_key_id {36, "ipsla-ret-code-invalid-key-id"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_entry_exist {37, "ipsla-ret-code-entry-exist"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_entry_not_found {38, "ipsla-ret-code-entry-not-found"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_hop_over_max {39, "ipsla-ret-code-hop-over-max"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_hop_dup_address {40, "ipsla-ret-code-hop-dup-address"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_vrf_name_error {41, "ipsla-ret-code-vrf-name-error"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_resp_failure {42, "ipsla-ret-code-resp-failure"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_auth_failure {43, "ipsla-ret-code-auth-failure"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_format_failure {44, "ipsla-ret-code-format-failure"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_port_in_use {45, "ipsla-ret-code-port-in-use"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_no_route {46, "ipsla-ret-code-no-route"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_pending {47, "ipsla-ret-code-pending"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_invalid_address {48, "ipsla-ret-code-invalid-address"};
const Enum::YLeaf IpslaRetCode::ipsla_ret_code_max {49, "ipsla-ret-code-max"};

const Enum::YLeaf OpTypeEnum::icmp_echo {1, "icmp-echo"};
const Enum::YLeaf OpTypeEnum::icmp_path_jitter {2, "icmp-path-jitter"};
const Enum::YLeaf OpTypeEnum::icmp_path_echo {4, "icmp-path-echo"};
const Enum::YLeaf OpTypeEnum::udp_jitter {8, "udp-jitter"};
const Enum::YLeaf OpTypeEnum::udp_echo {16, "udp-echo"};
const Enum::YLeaf OpTypeEnum::mpls_lsp_ping {32, "mpls-lsp-ping"};
const Enum::YLeaf OpTypeEnum::mpls_lsp_trace {64, "mpls-lsp-trace"};
const Enum::YLeaf OpTypeEnum::mpls_lsp_group {128, "mpls-lsp-group"};

const Enum::YLeaf IpslaLspGrpPathStatusEnum::ipsla_lsp_grp_path_status_unknown {0, "ipsla-lsp-grp-path-status-unknown"};
const Enum::YLeaf IpslaLspGrpPathStatusEnum::ipsla_lsp_grp_path_status_up {1, "ipsla-lsp-grp-path-status-up"};
const Enum::YLeaf IpslaLspGrpPathStatusEnum::ipsla_lsp_grp_path_status_down {2, "ipsla-lsp-grp-path-status-down"};
const Enum::YLeaf IpslaLspGrpPathStatusEnum::ipsla_lsp_grp_path_status_retry {3, "ipsla-lsp-grp-path-status-retry"};
const Enum::YLeaf IpslaLspGrpPathStatusEnum::ipsla_lsp_grp_path_status_pending {4, "ipsla-lsp-grp-path-status-pending"};

const Enum::YLeaf IpslaOperStateEnum::ipsla_oper_state_inactive {0, "ipsla-oper-state-inactive"};
const Enum::YLeaf IpslaOperStateEnum::ipsla_oper_state_pending {1, "ipsla-oper-state-pending"};
const Enum::YLeaf IpslaOperStateEnum::ipsla_oper_state_active {2, "ipsla-oper-state-active"};

const Enum::YLeaf IpslaMplsLpdDiscoveryModeEnum::ipsla_mpls_lpd_unknown {0, "ipsla-mpls-lpd-unknown"};
const Enum::YLeaf IpslaMplsLpdDiscoveryModeEnum::ipsla_mpls_lpd_initial_running {1, "ipsla-mpls-lpd-initial-running"};
const Enum::YLeaf IpslaMplsLpdDiscoveryModeEnum::ipsla_mpls_lpd_initial_complete {2, "ipsla-mpls-lpd-initial-complete"};
const Enum::YLeaf IpslaMplsLpdDiscoveryModeEnum::ipsla_mpls_lpd_rediscovery_running {3, "ipsla-mpls-lpd-rediscovery-running"};
const Enum::YLeaf IpslaMplsLpdDiscoveryModeEnum::ipsla_mpls_lpd_rediscovery_complete {4, "ipsla-mpls-lpd-rediscovery-complete"};

const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_unknown {1, "ipsla-mpls-lpd-ret-code-unknown"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_no_path {2, "ipsla-mpls-lpd-ret-code-no-path"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_all_path_broken {3, "ipsla-mpls-lpd-ret-code-all-path-broken"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_all_path_unexplorable {4, "ipsla-mpls-lpd-ret-code-all-path-unexplorable"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_all_path_broken_or_unexplorable {5, "ipsla-mpls-lpd-ret-code-all-path-broken-or-unexplorable"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_timeout {6, "ipsla-mpls-lpd-ret-code-timeout"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_error {7, "ipsla-mpls-lpd-ret-code-error"};
const Enum::YLeaf IpslaMplsLpdRetCode::ipsla_mpls_lpd_ret_code_ok {8, "ipsla-mpls-lpd-ret-code-ok"};

const Enum::YLeaf IpslaLspGrpStatusEnum::ipsla_lsp_grp_status_unknown {1, "ipsla-lsp-grp-status-unknown"};
const Enum::YLeaf IpslaLspGrpStatusEnum::ipsla_lsp_grp_status_up {2, "ipsla-lsp-grp-status-up"};
const Enum::YLeaf IpslaLspGrpStatusEnum::ipsla_lsp_grp_status_partial {3, "ipsla-lsp-grp-status-partial"};
const Enum::YLeaf IpslaLspGrpStatusEnum::ipsla_lsp_grp_status_down {4, "ipsla-lsp-grp-status-down"};
const Enum::YLeaf IpslaLspGrpStatusEnum::ipsla_lsp_grp_status_pending {5, "ipsla-lsp-grp-status-pending"};

const Enum::YLeaf IpslaMplsAddDeleteEnum::ipsla_mpls_add_delete_add_q {1, "ipsla-mpls-add-delete-add-q"};
const Enum::YLeaf IpslaMplsAddDeleteEnum::ipsla_mpls_add_delete_delete_q {2, "ipsla-mpls-add-delete-delete-q"};

const Enum::YLeaf IpslaMplsLpdPathDiscoveryStatus::ipsla_mpls_lpd_path_discovery_unknown {0, "ipsla-mpls-lpd-path-discovery-unknown"};
const Enum::YLeaf IpslaMplsLpdPathDiscoveryStatus::ipsla_mpls_lpd_path_discovery_ok {1, "ipsla-mpls-lpd-path-discovery-ok"};
const Enum::YLeaf IpslaMplsLpdPathDiscoveryStatus::ipsla_mpls_lpd_path_discovery_broken {2, "ipsla-mpls-lpd-path-discovery-broken"};
const Enum::YLeaf IpslaMplsLpdPathDiscoveryStatus::ipsla_mpls_lpd_path_discovery_unexplorable {3, "ipsla-mpls-lpd-path-discovery-unexplorable"};


}
}

