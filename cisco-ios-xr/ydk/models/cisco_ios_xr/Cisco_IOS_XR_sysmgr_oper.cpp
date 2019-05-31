
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysmgr_oper {

SystemProcess::SystemProcess()
    :
    node_table(std::make_shared<SystemProcess::NodeTable>())
{
    node_table->parent = this;

    yang_name = "system-process"; yang_parent_name = "Cisco-IOS-XR-sysmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SystemProcess::~SystemProcess()
{
}

bool SystemProcess::has_data() const
{
    if (is_presence_container) return true;
    return (node_table !=  nullptr && node_table->has_data());
}

bool SystemProcess::has_operation() const
{
    return is_set(yfilter)
	|| (node_table !=  nullptr && node_table->has_operation());
}

std::string SystemProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-oper:system-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-table")
    {
        if(node_table == nullptr)
        {
            node_table = std::make_shared<SystemProcess::NodeTable>();
        }
        return node_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_table != nullptr)
    {
        _children["node-table"] = node_table;
    }

    return _children;
}

void SystemProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SystemProcess::clone_ptr() const
{
    return std::make_shared<SystemProcess>();
}

std::string SystemProcess::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SystemProcess::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SystemProcess::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SystemProcess::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SystemProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-table")
        return true;
    return false;
}

SystemProcess::NodeTable::NodeTable()
    :
    node(this, {"node_name"})
{

    yang_name = "node-table"; yang_parent_name = "system-process"; is_top_level_class = false; has_list_ancestor = false; 
}

SystemProcess::NodeTable::~NodeTable()
{
}

bool SystemProcess::NodeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-oper:system-process/" << get_segment_path();
    return path_buffer.str();
}

std::string SystemProcess::NodeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::get_children() const
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

void SystemProcess::NodeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    name(std::make_shared<SystemProcess::NodeTable::Node::Name>())
    , jids(std::make_shared<SystemProcess::NodeTable::Node::Jids>())
    , dynamic(std::make_shared<SystemProcess::NodeTable::Node::Dynamic>())
    , boot_stalled(std::make_shared<SystemProcess::NodeTable::Node::BootStalled>())
    , processes(std::make_shared<SystemProcess::NodeTable::Node::Processes>())
    , startup(std::make_shared<SystemProcess::NodeTable::Node::Startup>())
    , mandatory(std::make_shared<SystemProcess::NodeTable::Node::Mandatory>())
    , abort(std::make_shared<SystemProcess::NodeTable::Node::Abort>())
    , failover(std::make_shared<SystemProcess::NodeTable::Node::Failover>())
    , boot(std::make_shared<SystemProcess::NodeTable::Node::Boot>())
    , logs(std::make_shared<SystemProcess::NodeTable::Node::Logs>())
    , searchpath(std::make_shared<SystemProcess::NodeTable::Node::Searchpath>())
{
    name->parent = this;
    jids->parent = this;
    dynamic->parent = this;
    boot_stalled->parent = this;
    processes->parent = this;
    startup->parent = this;
    mandatory->parent = this;
    abort->parent = this;
    failover->parent = this;
    boot->parent = this;
    logs->parent = this;
    searchpath->parent = this;

    yang_name = "node"; yang_parent_name = "node-table"; is_top_level_class = false; has_list_ancestor = false; 
}

SystemProcess::NodeTable::Node::~Node()
{
}

bool SystemProcess::NodeTable::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (name !=  nullptr && name->has_data())
	|| (jids !=  nullptr && jids->has_data())
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (boot_stalled !=  nullptr && boot_stalled->has_data())
	|| (processes !=  nullptr && processes->has_data())
	|| (startup !=  nullptr && startup->has_data())
	|| (mandatory !=  nullptr && mandatory->has_data())
	|| (abort !=  nullptr && abort->has_data())
	|| (failover !=  nullptr && failover->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (logs !=  nullptr && logs->has_data())
	|| (searchpath !=  nullptr && searchpath->has_data());
}

bool SystemProcess::NodeTable::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (name !=  nullptr && name->has_operation())
	|| (jids !=  nullptr && jids->has_operation())
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (boot_stalled !=  nullptr && boot_stalled->has_operation())
	|| (processes !=  nullptr && processes->has_operation())
	|| (startup !=  nullptr && startup->has_operation())
	|| (mandatory !=  nullptr && mandatory->has_operation())
	|| (abort !=  nullptr && abort->has_operation())
	|| (failover !=  nullptr && failover->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (logs !=  nullptr && logs->has_operation())
	|| (searchpath !=  nullptr && searchpath->has_operation());
}

std::string SystemProcess::NodeTable::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-oper:system-process/node-table/" << get_segment_path();
    return path_buffer.str();
}

std::string SystemProcess::NodeTable::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<SystemProcess::NodeTable::Node::Name>();
        }
        return name;
    }

    if(child_yang_name == "jids")
    {
        if(jids == nullptr)
        {
            jids = std::make_shared<SystemProcess::NodeTable::Node::Jids>();
        }
        return jids;
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<SystemProcess::NodeTable::Node::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "boot-stalled")
    {
        if(boot_stalled == nullptr)
        {
            boot_stalled = std::make_shared<SystemProcess::NodeTable::Node::BootStalled>();
        }
        return boot_stalled;
    }

    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<SystemProcess::NodeTable::Node::Processes>();
        }
        return processes;
    }

    if(child_yang_name == "startup")
    {
        if(startup == nullptr)
        {
            startup = std::make_shared<SystemProcess::NodeTable::Node::Startup>();
        }
        return startup;
    }

    if(child_yang_name == "mandatory")
    {
        if(mandatory == nullptr)
        {
            mandatory = std::make_shared<SystemProcess::NodeTable::Node::Mandatory>();
        }
        return mandatory;
    }

    if(child_yang_name == "abort")
    {
        if(abort == nullptr)
        {
            abort = std::make_shared<SystemProcess::NodeTable::Node::Abort>();
        }
        return abort;
    }

    if(child_yang_name == "failover")
    {
        if(failover == nullptr)
        {
            failover = std::make_shared<SystemProcess::NodeTable::Node::Failover>();
        }
        return failover;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<SystemProcess::NodeTable::Node::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<SystemProcess::NodeTable::Node::Logs>();
        }
        return logs;
    }

    if(child_yang_name == "searchpath")
    {
        if(searchpath == nullptr)
        {
            searchpath = std::make_shared<SystemProcess::NodeTable::Node::Searchpath>();
        }
        return searchpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name != nullptr)
    {
        _children["name"] = name;
    }

    if(jids != nullptr)
    {
        _children["jids"] = jids;
    }

    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    if(boot_stalled != nullptr)
    {
        _children["boot-stalled"] = boot_stalled;
    }

    if(processes != nullptr)
    {
        _children["processes"] = processes;
    }

    if(startup != nullptr)
    {
        _children["startup"] = startup;
    }

    if(mandatory != nullptr)
    {
        _children["mandatory"] = mandatory;
    }

    if(abort != nullptr)
    {
        _children["abort"] = abort;
    }

    if(failover != nullptr)
    {
        _children["failover"] = failover;
    }

    if(boot != nullptr)
    {
        _children["boot"] = boot;
    }

    if(logs != nullptr)
    {
        _children["logs"] = logs;
    }

    if(searchpath != nullptr)
    {
        _children["searchpath"] = searchpath;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "jids" || name == "dynamic" || name == "boot-stalled" || name == "processes" || name == "startup" || name == "mandatory" || name == "abort" || name == "failover" || name == "boot" || name == "logs" || name == "searchpath" || name == "node-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::Name()
    :
    process_name_run_infos(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos>())
    , process_name_infos(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameInfos>())
    , process_name_run_details(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails>())
    , process_name_runverboses(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses>())
    , process_name_details(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails>())
    , process_name_verboses(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses>())
{
    process_name_run_infos->parent = this;
    process_name_infos->parent = this;
    process_name_run_details->parent = this;
    process_name_runverboses->parent = this;
    process_name_details->parent = this;
    process_name_verboses->parent = this;

    yang_name = "name"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::~Name()
{
}

bool SystemProcess::NodeTable::Node::Name::has_data() const
{
    if (is_presence_container) return true;
    return (process_name_run_infos !=  nullptr && process_name_run_infos->has_data())
	|| (process_name_infos !=  nullptr && process_name_infos->has_data())
	|| (process_name_run_details !=  nullptr && process_name_run_details->has_data())
	|| (process_name_runverboses !=  nullptr && process_name_runverboses->has_data())
	|| (process_name_details !=  nullptr && process_name_details->has_data())
	|| (process_name_verboses !=  nullptr && process_name_verboses->has_data());
}

bool SystemProcess::NodeTable::Node::Name::has_operation() const
{
    return is_set(yfilter)
	|| (process_name_run_infos !=  nullptr && process_name_run_infos->has_operation())
	|| (process_name_infos !=  nullptr && process_name_infos->has_operation())
	|| (process_name_run_details !=  nullptr && process_name_run_details->has_operation())
	|| (process_name_runverboses !=  nullptr && process_name_runverboses->has_operation())
	|| (process_name_details !=  nullptr && process_name_details->has_operation())
	|| (process_name_verboses !=  nullptr && process_name_verboses->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-run-infos")
    {
        if(process_name_run_infos == nullptr)
        {
            process_name_run_infos = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos>();
        }
        return process_name_run_infos;
    }

    if(child_yang_name == "process-name-infos")
    {
        if(process_name_infos == nullptr)
        {
            process_name_infos = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameInfos>();
        }
        return process_name_infos;
    }

    if(child_yang_name == "process-name-run-details")
    {
        if(process_name_run_details == nullptr)
        {
            process_name_run_details = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails>();
        }
        return process_name_run_details;
    }

    if(child_yang_name == "process-name-runverboses")
    {
        if(process_name_runverboses == nullptr)
        {
            process_name_runverboses = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses>();
        }
        return process_name_runverboses;
    }

    if(child_yang_name == "process-name-details")
    {
        if(process_name_details == nullptr)
        {
            process_name_details = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails>();
        }
        return process_name_details;
    }

    if(child_yang_name == "process-name-verboses")
    {
        if(process_name_verboses == nullptr)
        {
            process_name_verboses = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses>();
        }
        return process_name_verboses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(process_name_run_infos != nullptr)
    {
        _children["process-name-run-infos"] = process_name_run_infos;
    }

    if(process_name_infos != nullptr)
    {
        _children["process-name-infos"] = process_name_infos;
    }

    if(process_name_run_details != nullptr)
    {
        _children["process-name-run-details"] = process_name_run_details;
    }

    if(process_name_runverboses != nullptr)
    {
        _children["process-name-runverboses"] = process_name_runverboses;
    }

    if(process_name_details != nullptr)
    {
        _children["process-name-details"] = process_name_details;
    }

    if(process_name_verboses != nullptr)
    {
        _children["process-name-verboses"] = process_name_verboses;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-run-infos" || name == "process-name-infos" || name == "process-name-run-details" || name == "process-name-runverboses" || name == "process-name-details" || name == "process-name-verboses")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfos()
    :
    process_name_run_info(this, {"proc_name"})
{

    yang_name = "process-name-run-infos"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::~ProcessNameRunInfos()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_name_run_info.len(); index++)
    {
        if(process_name_run_info[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::has_operation() const
{
    for (std::size_t index=0; index<process_name_run_info.len(); index++)
    {
        if(process_name_run_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-run-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-run-info")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo>();
        ent_->parent = this;
        process_name_run_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_name_run_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-run-info")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcessNameRunInfo()
    :
    proc_name{YType::str, "proc-name"},
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "process-name-run-info"; yang_parent_name = "process-name-run-infos"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::~ProcessNameRunInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return proc_name.is_set
	|| job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-run-info";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());
    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "proc-name" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "process-name-run-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "process-name-run-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfos()
    :
    process_name_info(this, {"proc_name"})
{

    yang_name = "process-name-infos"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::~ProcessNameInfos()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_name_info.len(); index++)
    {
        if(process_name_info[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::has_operation() const
{
    for (std::size_t index=0; index<process_name_info.len(); index++)
    {
        if(process_name_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-info")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo>();
        ent_->parent = this;
        process_name_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_name_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-info")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcessNameInfo()
    :
    proc_name{YType::str, "proc-name"},
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "process-name-info"; yang_parent_name = "process-name-infos"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::~ProcessNameInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return proc_name.is_set
	|| job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-info";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());
    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "proc-name" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "process-name-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "process-name-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetails()
    :
    process_name_run_detail(this, {"proc_name"})
{

    yang_name = "process-name-run-details"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::~ProcessNameRunDetails()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_name_run_detail.len(); index++)
    {
        if(process_name_run_detail[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::has_operation() const
{
    for (std::size_t index=0; index<process_name_run_detail.len(); index++)
    {
        if(process_name_run_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-run-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-run-detail")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail>();
        ent_->parent = this;
        process_name_run_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_name_run_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-run-detail")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::ProcessNameRunDetail()
    :
    proc_name{YType::str, "proc-name"}
        ,
    basic_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo>())
    , detail_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo>())
{
    basic_info->parent = this;
    detail_info->parent = this;

    yang_name = "process-name-run-detail"; yang_parent_name = "process-name-run-details"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::~ProcessNameRunDetail()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::has_data() const
{
    if (is_presence_container) return true;
    return proc_name.is_set
	|| (basic_info !=  nullptr && basic_info->has_data())
	|| (detail_info !=  nullptr && detail_info->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (detail_info !=  nullptr && detail_info->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-run-detail";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "detail-info")
    {
        if(detail_info == nullptr)
        {
            detail_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo>();
        }
        return detail_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(detail_info != nullptr)
    {
        _children["detail-info"] = detail_info;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "detail-info" || name == "proc-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::BasicInfo()
    :
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "basic-info"; yang_parent_name = "process-name-run-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::~BasicInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::DetailInfo()
    :
    running_path{YType::str, "running-path"},
    package_path{YType::str, "package-path"},
    job_id_link{YType::int32, "job-id-link"},
    group_jid{YType::str, "group-jid"},
    fail_count{YType::uint32, "fail-count"},
    restart_needed{YType::boolean, "restart-needed"},
    init_process{YType::boolean, "init-process"},
    last_online{YType::str, "last-online"},
    this_pcb{YType::str, "this-pcb"},
    next_pcb{YType::str, "next-pcb"},
    envs{YType::str, "envs"},
    wait_for{YType::str, "wait-for"},
    job_id_on_rp{YType::int32, "job-id-on-rp"},
    is_standby_capable{YType::boolean, "is-standby-capable"},
    disable_kill{YType::boolean, "disable-kill"},
    send_avail{YType::boolean, "send-avail"},
    node_event_cli_info{YType::int32, "node-event-cli-info"},
    node_redundancy_state{YType::str, "node-redundancy-state"},
    role_event_cli_info{YType::int32, "role-event-cli-info"},
    proc_role_state{YType::str, "proc-role-state"},
    standby_event_cli_info{YType::int32, "standby-event-cli-info"},
    cleanup_event_cli_info{YType::int32, "cleanup-event-cli-info"},
    band_ready_event_cli_info{YType::int32, "band-ready-event-cli-info"},
    lr_event_cli_info{YType::int32, "lr-event-cli-info"},
    plane_ready_event_cli_info{YType::int32, "plane-ready-event-cli-info"},
    mdr_is_done_cli_info{YType::int32, "mdr-is-done-cli-info"}
{

    yang_name = "detail-info"; yang_parent_name = "process-name-run-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::~DetailInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return running_path.is_set
	|| package_path.is_set
	|| job_id_link.is_set
	|| group_jid.is_set
	|| fail_count.is_set
	|| restart_needed.is_set
	|| init_process.is_set
	|| last_online.is_set
	|| this_pcb.is_set
	|| next_pcb.is_set
	|| envs.is_set
	|| wait_for.is_set
	|| job_id_on_rp.is_set
	|| is_standby_capable.is_set
	|| disable_kill.is_set
	|| send_avail.is_set
	|| node_event_cli_info.is_set
	|| node_redundancy_state.is_set
	|| role_event_cli_info.is_set
	|| proc_role_state.is_set
	|| standby_event_cli_info.is_set
	|| cleanup_event_cli_info.is_set
	|| band_ready_event_cli_info.is_set
	|| lr_event_cli_info.is_set
	|| plane_ready_event_cli_info.is_set
	|| mdr_is_done_cli_info.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_path.yfilter)
	|| ydk::is_set(package_path.yfilter)
	|| ydk::is_set(job_id_link.yfilter)
	|| ydk::is_set(group_jid.yfilter)
	|| ydk::is_set(fail_count.yfilter)
	|| ydk::is_set(restart_needed.yfilter)
	|| ydk::is_set(init_process.yfilter)
	|| ydk::is_set(last_online.yfilter)
	|| ydk::is_set(this_pcb.yfilter)
	|| ydk::is_set(next_pcb.yfilter)
	|| ydk::is_set(envs.yfilter)
	|| ydk::is_set(wait_for.yfilter)
	|| ydk::is_set(job_id_on_rp.yfilter)
	|| ydk::is_set(is_standby_capable.yfilter)
	|| ydk::is_set(disable_kill.yfilter)
	|| ydk::is_set(send_avail.yfilter)
	|| ydk::is_set(node_event_cli_info.yfilter)
	|| ydk::is_set(node_redundancy_state.yfilter)
	|| ydk::is_set(role_event_cli_info.yfilter)
	|| ydk::is_set(proc_role_state.yfilter)
	|| ydk::is_set(standby_event_cli_info.yfilter)
	|| ydk::is_set(cleanup_event_cli_info.yfilter)
	|| ydk::is_set(band_ready_event_cli_info.yfilter)
	|| ydk::is_set(lr_event_cli_info.yfilter)
	|| ydk::is_set(plane_ready_event_cli_info.yfilter)
	|| ydk::is_set(mdr_is_done_cli_info.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_path.is_set || is_set(running_path.yfilter)) leaf_name_data.push_back(running_path.get_name_leafdata());
    if (package_path.is_set || is_set(package_path.yfilter)) leaf_name_data.push_back(package_path.get_name_leafdata());
    if (job_id_link.is_set || is_set(job_id_link.yfilter)) leaf_name_data.push_back(job_id_link.get_name_leafdata());
    if (group_jid.is_set || is_set(group_jid.yfilter)) leaf_name_data.push_back(group_jid.get_name_leafdata());
    if (fail_count.is_set || is_set(fail_count.yfilter)) leaf_name_data.push_back(fail_count.get_name_leafdata());
    if (restart_needed.is_set || is_set(restart_needed.yfilter)) leaf_name_data.push_back(restart_needed.get_name_leafdata());
    if (init_process.is_set || is_set(init_process.yfilter)) leaf_name_data.push_back(init_process.get_name_leafdata());
    if (last_online.is_set || is_set(last_online.yfilter)) leaf_name_data.push_back(last_online.get_name_leafdata());
    if (this_pcb.is_set || is_set(this_pcb.yfilter)) leaf_name_data.push_back(this_pcb.get_name_leafdata());
    if (next_pcb.is_set || is_set(next_pcb.yfilter)) leaf_name_data.push_back(next_pcb.get_name_leafdata());
    if (envs.is_set || is_set(envs.yfilter)) leaf_name_data.push_back(envs.get_name_leafdata());
    if (wait_for.is_set || is_set(wait_for.yfilter)) leaf_name_data.push_back(wait_for.get_name_leafdata());
    if (job_id_on_rp.is_set || is_set(job_id_on_rp.yfilter)) leaf_name_data.push_back(job_id_on_rp.get_name_leafdata());
    if (is_standby_capable.is_set || is_set(is_standby_capable.yfilter)) leaf_name_data.push_back(is_standby_capable.get_name_leafdata());
    if (disable_kill.is_set || is_set(disable_kill.yfilter)) leaf_name_data.push_back(disable_kill.get_name_leafdata());
    if (send_avail.is_set || is_set(send_avail.yfilter)) leaf_name_data.push_back(send_avail.get_name_leafdata());
    if (node_event_cli_info.is_set || is_set(node_event_cli_info.yfilter)) leaf_name_data.push_back(node_event_cli_info.get_name_leafdata());
    if (node_redundancy_state.is_set || is_set(node_redundancy_state.yfilter)) leaf_name_data.push_back(node_redundancy_state.get_name_leafdata());
    if (role_event_cli_info.is_set || is_set(role_event_cli_info.yfilter)) leaf_name_data.push_back(role_event_cli_info.get_name_leafdata());
    if (proc_role_state.is_set || is_set(proc_role_state.yfilter)) leaf_name_data.push_back(proc_role_state.get_name_leafdata());
    if (standby_event_cli_info.is_set || is_set(standby_event_cli_info.yfilter)) leaf_name_data.push_back(standby_event_cli_info.get_name_leafdata());
    if (cleanup_event_cli_info.is_set || is_set(cleanup_event_cli_info.yfilter)) leaf_name_data.push_back(cleanup_event_cli_info.get_name_leafdata());
    if (band_ready_event_cli_info.is_set || is_set(band_ready_event_cli_info.yfilter)) leaf_name_data.push_back(band_ready_event_cli_info.get_name_leafdata());
    if (lr_event_cli_info.is_set || is_set(lr_event_cli_info.yfilter)) leaf_name_data.push_back(lr_event_cli_info.get_name_leafdata());
    if (plane_ready_event_cli_info.is_set || is_set(plane_ready_event_cli_info.yfilter)) leaf_name_data.push_back(plane_ready_event_cli_info.get_name_leafdata());
    if (mdr_is_done_cli_info.is_set || is_set(mdr_is_done_cli_info.yfilter)) leaf_name_data.push_back(mdr_is_done_cli_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-path")
    {
        running_path = value;
        running_path.value_namespace = name_space;
        running_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-path")
    {
        package_path = value;
        package_path.value_namespace = name_space;
        package_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-link")
    {
        job_id_link = value;
        job_id_link.value_namespace = name_space;
        job_id_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-jid")
    {
        group_jid = value;
        group_jid.value_namespace = name_space;
        group_jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-count")
    {
        fail_count = value;
        fail_count.value_namespace = name_space;
        fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-needed")
    {
        restart_needed = value;
        restart_needed.value_namespace = name_space;
        restart_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-process")
    {
        init_process = value;
        init_process.value_namespace = name_space;
        init_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-online")
    {
        last_online = value;
        last_online.value_namespace = name_space;
        last_online.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "this-pcb")
    {
        this_pcb = value;
        this_pcb.value_namespace = name_space;
        this_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pcb")
    {
        next_pcb = value;
        next_pcb.value_namespace = name_space;
        next_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "envs")
    {
        envs = value;
        envs.value_namespace = name_space;
        envs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for")
    {
        wait_for = value;
        wait_for.value_namespace = name_space;
        wait_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp = value;
        job_id_on_rp.value_namespace = name_space;
        job_id_on_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable = value;
        is_standby_capable.value_namespace = name_space;
        is_standby_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-kill")
    {
        disable_kill = value;
        disable_kill.value_namespace = name_space;
        disable_kill.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-avail")
    {
        send_avail = value;
        send_avail.value_namespace = name_space;
        send_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info = value;
        node_event_cli_info.value_namespace = name_space;
        node_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state = value;
        node_redundancy_state.value_namespace = name_space;
        node_redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info = value;
        role_event_cli_info.value_namespace = name_space;
        role_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state = value;
        proc_role_state.value_namespace = name_space;
        proc_role_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info = value;
        standby_event_cli_info.value_namespace = name_space;
        standby_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info = value;
        cleanup_event_cli_info.value_namespace = name_space;
        cleanup_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info = value;
        band_ready_event_cli_info.value_namespace = name_space;
        band_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info = value;
        lr_event_cli_info.value_namespace = name_space;
        lr_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info = value;
        plane_ready_event_cli_info.value_namespace = name_space;
        plane_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info = value;
        mdr_is_done_cli_info.value_namespace = name_space;
        mdr_is_done_cli_info.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-path")
    {
        running_path.yfilter = yfilter;
    }
    if(value_path == "package-path")
    {
        package_path.yfilter = yfilter;
    }
    if(value_path == "job-id-link")
    {
        job_id_link.yfilter = yfilter;
    }
    if(value_path == "group-jid")
    {
        group_jid.yfilter = yfilter;
    }
    if(value_path == "fail-count")
    {
        fail_count.yfilter = yfilter;
    }
    if(value_path == "restart-needed")
    {
        restart_needed.yfilter = yfilter;
    }
    if(value_path == "init-process")
    {
        init_process.yfilter = yfilter;
    }
    if(value_path == "last-online")
    {
        last_online.yfilter = yfilter;
    }
    if(value_path == "this-pcb")
    {
        this_pcb.yfilter = yfilter;
    }
    if(value_path == "next-pcb")
    {
        next_pcb.yfilter = yfilter;
    }
    if(value_path == "envs")
    {
        envs.yfilter = yfilter;
    }
    if(value_path == "wait-for")
    {
        wait_for.yfilter = yfilter;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp.yfilter = yfilter;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable.yfilter = yfilter;
    }
    if(value_path == "disable-kill")
    {
        disable_kill.yfilter = yfilter;
    }
    if(value_path == "send-avail")
    {
        send_avail.yfilter = yfilter;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state.yfilter = yfilter;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state.yfilter = yfilter;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-path" || name == "package-path" || name == "job-id-link" || name == "group-jid" || name == "fail-count" || name == "restart-needed" || name == "init-process" || name == "last-online" || name == "this-pcb" || name == "next-pcb" || name == "envs" || name == "wait-for" || name == "job-id-on-rp" || name == "is-standby-capable" || name == "disable-kill" || name == "send-avail" || name == "node-event-cli-info" || name == "node-redundancy-state" || name == "role-event-cli-info" || name == "proc-role-state" || name == "standby-event-cli-info" || name == "cleanup-event-cli-info" || name == "band-ready-event-cli-info" || name == "lr-event-cli-info" || name == "plane-ready-event-cli-info" || name == "mdr-is-done-cli-info")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverboses()
    :
    process_name_runverbose(this, {"proc_name"})
{

    yang_name = "process-name-runverboses"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::~ProcessNameRunverboses()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_name_runverbose.len(); index++)
    {
        if(process_name_runverbose[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::has_operation() const
{
    for (std::size_t index=0; index<process_name_runverbose.len(); index++)
    {
        if(process_name_runverbose[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-runverboses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-runverbose")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose>();
        ent_->parent = this;
        process_name_runverbose.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_name_runverbose.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-runverbose")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::ProcessNameRunverbose()
    :
    proc_name{YType::str, "proc-name"}
        ,
    basic_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo>())
    , detail_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo>())
    , verbose_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo>())
{
    basic_info->parent = this;
    detail_info->parent = this;
    verbose_info->parent = this;

    yang_name = "process-name-runverbose"; yang_parent_name = "process-name-runverboses"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::~ProcessNameRunverbose()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::has_data() const
{
    if (is_presence_container) return true;
    return proc_name.is_set
	|| (basic_info !=  nullptr && basic_info->has_data())
	|| (detail_info !=  nullptr && detail_info->has_data())
	|| (verbose_info !=  nullptr && verbose_info->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (detail_info !=  nullptr && detail_info->has_operation())
	|| (verbose_info !=  nullptr && verbose_info->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-runverbose";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "detail-info")
    {
        if(detail_info == nullptr)
        {
            detail_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo>();
        }
        return detail_info;
    }

    if(child_yang_name == "verbose-info")
    {
        if(verbose_info == nullptr)
        {
            verbose_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo>();
        }
        return verbose_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(detail_info != nullptr)
    {
        _children["detail-info"] = detail_info;
    }

    if(verbose_info != nullptr)
    {
        _children["verbose-info"] = verbose_info;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "detail-info" || name == "verbose-info" || name == "proc-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::BasicInfo()
    :
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "basic-info"; yang_parent_name = "process-name-runverbose"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::~BasicInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::DetailInfo()
    :
    running_path{YType::str, "running-path"},
    package_path{YType::str, "package-path"},
    job_id_link{YType::int32, "job-id-link"},
    group_jid{YType::str, "group-jid"},
    fail_count{YType::uint32, "fail-count"},
    restart_needed{YType::boolean, "restart-needed"},
    init_process{YType::boolean, "init-process"},
    last_online{YType::str, "last-online"},
    this_pcb{YType::str, "this-pcb"},
    next_pcb{YType::str, "next-pcb"},
    envs{YType::str, "envs"},
    wait_for{YType::str, "wait-for"},
    job_id_on_rp{YType::int32, "job-id-on-rp"},
    is_standby_capable{YType::boolean, "is-standby-capable"},
    disable_kill{YType::boolean, "disable-kill"},
    send_avail{YType::boolean, "send-avail"},
    node_event_cli_info{YType::int32, "node-event-cli-info"},
    node_redundancy_state{YType::str, "node-redundancy-state"},
    role_event_cli_info{YType::int32, "role-event-cli-info"},
    proc_role_state{YType::str, "proc-role-state"},
    standby_event_cli_info{YType::int32, "standby-event-cli-info"},
    cleanup_event_cli_info{YType::int32, "cleanup-event-cli-info"},
    band_ready_event_cli_info{YType::int32, "band-ready-event-cli-info"},
    lr_event_cli_info{YType::int32, "lr-event-cli-info"},
    plane_ready_event_cli_info{YType::int32, "plane-ready-event-cli-info"},
    mdr_is_done_cli_info{YType::int32, "mdr-is-done-cli-info"}
{

    yang_name = "detail-info"; yang_parent_name = "process-name-runverbose"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::~DetailInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return running_path.is_set
	|| package_path.is_set
	|| job_id_link.is_set
	|| group_jid.is_set
	|| fail_count.is_set
	|| restart_needed.is_set
	|| init_process.is_set
	|| last_online.is_set
	|| this_pcb.is_set
	|| next_pcb.is_set
	|| envs.is_set
	|| wait_for.is_set
	|| job_id_on_rp.is_set
	|| is_standby_capable.is_set
	|| disable_kill.is_set
	|| send_avail.is_set
	|| node_event_cli_info.is_set
	|| node_redundancy_state.is_set
	|| role_event_cli_info.is_set
	|| proc_role_state.is_set
	|| standby_event_cli_info.is_set
	|| cleanup_event_cli_info.is_set
	|| band_ready_event_cli_info.is_set
	|| lr_event_cli_info.is_set
	|| plane_ready_event_cli_info.is_set
	|| mdr_is_done_cli_info.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_path.yfilter)
	|| ydk::is_set(package_path.yfilter)
	|| ydk::is_set(job_id_link.yfilter)
	|| ydk::is_set(group_jid.yfilter)
	|| ydk::is_set(fail_count.yfilter)
	|| ydk::is_set(restart_needed.yfilter)
	|| ydk::is_set(init_process.yfilter)
	|| ydk::is_set(last_online.yfilter)
	|| ydk::is_set(this_pcb.yfilter)
	|| ydk::is_set(next_pcb.yfilter)
	|| ydk::is_set(envs.yfilter)
	|| ydk::is_set(wait_for.yfilter)
	|| ydk::is_set(job_id_on_rp.yfilter)
	|| ydk::is_set(is_standby_capable.yfilter)
	|| ydk::is_set(disable_kill.yfilter)
	|| ydk::is_set(send_avail.yfilter)
	|| ydk::is_set(node_event_cli_info.yfilter)
	|| ydk::is_set(node_redundancy_state.yfilter)
	|| ydk::is_set(role_event_cli_info.yfilter)
	|| ydk::is_set(proc_role_state.yfilter)
	|| ydk::is_set(standby_event_cli_info.yfilter)
	|| ydk::is_set(cleanup_event_cli_info.yfilter)
	|| ydk::is_set(band_ready_event_cli_info.yfilter)
	|| ydk::is_set(lr_event_cli_info.yfilter)
	|| ydk::is_set(plane_ready_event_cli_info.yfilter)
	|| ydk::is_set(mdr_is_done_cli_info.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_path.is_set || is_set(running_path.yfilter)) leaf_name_data.push_back(running_path.get_name_leafdata());
    if (package_path.is_set || is_set(package_path.yfilter)) leaf_name_data.push_back(package_path.get_name_leafdata());
    if (job_id_link.is_set || is_set(job_id_link.yfilter)) leaf_name_data.push_back(job_id_link.get_name_leafdata());
    if (group_jid.is_set || is_set(group_jid.yfilter)) leaf_name_data.push_back(group_jid.get_name_leafdata());
    if (fail_count.is_set || is_set(fail_count.yfilter)) leaf_name_data.push_back(fail_count.get_name_leafdata());
    if (restart_needed.is_set || is_set(restart_needed.yfilter)) leaf_name_data.push_back(restart_needed.get_name_leafdata());
    if (init_process.is_set || is_set(init_process.yfilter)) leaf_name_data.push_back(init_process.get_name_leafdata());
    if (last_online.is_set || is_set(last_online.yfilter)) leaf_name_data.push_back(last_online.get_name_leafdata());
    if (this_pcb.is_set || is_set(this_pcb.yfilter)) leaf_name_data.push_back(this_pcb.get_name_leafdata());
    if (next_pcb.is_set || is_set(next_pcb.yfilter)) leaf_name_data.push_back(next_pcb.get_name_leafdata());
    if (envs.is_set || is_set(envs.yfilter)) leaf_name_data.push_back(envs.get_name_leafdata());
    if (wait_for.is_set || is_set(wait_for.yfilter)) leaf_name_data.push_back(wait_for.get_name_leafdata());
    if (job_id_on_rp.is_set || is_set(job_id_on_rp.yfilter)) leaf_name_data.push_back(job_id_on_rp.get_name_leafdata());
    if (is_standby_capable.is_set || is_set(is_standby_capable.yfilter)) leaf_name_data.push_back(is_standby_capable.get_name_leafdata());
    if (disable_kill.is_set || is_set(disable_kill.yfilter)) leaf_name_data.push_back(disable_kill.get_name_leafdata());
    if (send_avail.is_set || is_set(send_avail.yfilter)) leaf_name_data.push_back(send_avail.get_name_leafdata());
    if (node_event_cli_info.is_set || is_set(node_event_cli_info.yfilter)) leaf_name_data.push_back(node_event_cli_info.get_name_leafdata());
    if (node_redundancy_state.is_set || is_set(node_redundancy_state.yfilter)) leaf_name_data.push_back(node_redundancy_state.get_name_leafdata());
    if (role_event_cli_info.is_set || is_set(role_event_cli_info.yfilter)) leaf_name_data.push_back(role_event_cli_info.get_name_leafdata());
    if (proc_role_state.is_set || is_set(proc_role_state.yfilter)) leaf_name_data.push_back(proc_role_state.get_name_leafdata());
    if (standby_event_cli_info.is_set || is_set(standby_event_cli_info.yfilter)) leaf_name_data.push_back(standby_event_cli_info.get_name_leafdata());
    if (cleanup_event_cli_info.is_set || is_set(cleanup_event_cli_info.yfilter)) leaf_name_data.push_back(cleanup_event_cli_info.get_name_leafdata());
    if (band_ready_event_cli_info.is_set || is_set(band_ready_event_cli_info.yfilter)) leaf_name_data.push_back(band_ready_event_cli_info.get_name_leafdata());
    if (lr_event_cli_info.is_set || is_set(lr_event_cli_info.yfilter)) leaf_name_data.push_back(lr_event_cli_info.get_name_leafdata());
    if (plane_ready_event_cli_info.is_set || is_set(plane_ready_event_cli_info.yfilter)) leaf_name_data.push_back(plane_ready_event_cli_info.get_name_leafdata());
    if (mdr_is_done_cli_info.is_set || is_set(mdr_is_done_cli_info.yfilter)) leaf_name_data.push_back(mdr_is_done_cli_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-path")
    {
        running_path = value;
        running_path.value_namespace = name_space;
        running_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-path")
    {
        package_path = value;
        package_path.value_namespace = name_space;
        package_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-link")
    {
        job_id_link = value;
        job_id_link.value_namespace = name_space;
        job_id_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-jid")
    {
        group_jid = value;
        group_jid.value_namespace = name_space;
        group_jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-count")
    {
        fail_count = value;
        fail_count.value_namespace = name_space;
        fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-needed")
    {
        restart_needed = value;
        restart_needed.value_namespace = name_space;
        restart_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-process")
    {
        init_process = value;
        init_process.value_namespace = name_space;
        init_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-online")
    {
        last_online = value;
        last_online.value_namespace = name_space;
        last_online.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "this-pcb")
    {
        this_pcb = value;
        this_pcb.value_namespace = name_space;
        this_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pcb")
    {
        next_pcb = value;
        next_pcb.value_namespace = name_space;
        next_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "envs")
    {
        envs = value;
        envs.value_namespace = name_space;
        envs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for")
    {
        wait_for = value;
        wait_for.value_namespace = name_space;
        wait_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp = value;
        job_id_on_rp.value_namespace = name_space;
        job_id_on_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable = value;
        is_standby_capable.value_namespace = name_space;
        is_standby_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-kill")
    {
        disable_kill = value;
        disable_kill.value_namespace = name_space;
        disable_kill.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-avail")
    {
        send_avail = value;
        send_avail.value_namespace = name_space;
        send_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info = value;
        node_event_cli_info.value_namespace = name_space;
        node_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state = value;
        node_redundancy_state.value_namespace = name_space;
        node_redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info = value;
        role_event_cli_info.value_namespace = name_space;
        role_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state = value;
        proc_role_state.value_namespace = name_space;
        proc_role_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info = value;
        standby_event_cli_info.value_namespace = name_space;
        standby_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info = value;
        cleanup_event_cli_info.value_namespace = name_space;
        cleanup_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info = value;
        band_ready_event_cli_info.value_namespace = name_space;
        band_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info = value;
        lr_event_cli_info.value_namespace = name_space;
        lr_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info = value;
        plane_ready_event_cli_info.value_namespace = name_space;
        plane_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info = value;
        mdr_is_done_cli_info.value_namespace = name_space;
        mdr_is_done_cli_info.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-path")
    {
        running_path.yfilter = yfilter;
    }
    if(value_path == "package-path")
    {
        package_path.yfilter = yfilter;
    }
    if(value_path == "job-id-link")
    {
        job_id_link.yfilter = yfilter;
    }
    if(value_path == "group-jid")
    {
        group_jid.yfilter = yfilter;
    }
    if(value_path == "fail-count")
    {
        fail_count.yfilter = yfilter;
    }
    if(value_path == "restart-needed")
    {
        restart_needed.yfilter = yfilter;
    }
    if(value_path == "init-process")
    {
        init_process.yfilter = yfilter;
    }
    if(value_path == "last-online")
    {
        last_online.yfilter = yfilter;
    }
    if(value_path == "this-pcb")
    {
        this_pcb.yfilter = yfilter;
    }
    if(value_path == "next-pcb")
    {
        next_pcb.yfilter = yfilter;
    }
    if(value_path == "envs")
    {
        envs.yfilter = yfilter;
    }
    if(value_path == "wait-for")
    {
        wait_for.yfilter = yfilter;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp.yfilter = yfilter;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable.yfilter = yfilter;
    }
    if(value_path == "disable-kill")
    {
        disable_kill.yfilter = yfilter;
    }
    if(value_path == "send-avail")
    {
        send_avail.yfilter = yfilter;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state.yfilter = yfilter;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state.yfilter = yfilter;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-path" || name == "package-path" || name == "job-id-link" || name == "group-jid" || name == "fail-count" || name == "restart-needed" || name == "init-process" || name == "last-online" || name == "this-pcb" || name == "next-pcb" || name == "envs" || name == "wait-for" || name == "job-id-on-rp" || name == "is-standby-capable" || name == "disable-kill" || name == "send-avail" || name == "node-event-cli-info" || name == "node-redundancy-state" || name == "role-event-cli-info" || name == "proc-role-state" || name == "standby-event-cli-info" || name == "cleanup-event-cli-info" || name == "band-ready-event-cli-info" || name == "lr-event-cli-info" || name == "plane-ready-event-cli-info" || name == "mdr-is-done-cli-info")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::VerboseInfo()
    :
    process_group{YType::str, "process-group"},
    respawn_allowed{YType::int32, "respawn-allowed"},
    wait_for_exit{YType::int32, "wait-for-exit"},
    dynamic_tag{YType::int32, "dynamic-tag"},
    forced_stop{YType::int32, "forced-stop"},
    critical_process{YType::int32, "critical-process"},
    hold{YType::int32, "hold"},
    transient{YType::int32, "transient"},
    tuple_cfgmgr{YType::int32, "tuple-cfgmgr"},
    standby_capable{YType::int32, "standby-capable"},
    edm_startup{YType::int32, "edm-startup"},
    placement{YType::int32, "placement"},
    skip_kill_notif{YType::int32, "skip-kill-notif"},
    init_proc{YType::int32, "init-proc"},
    sysdb_event{YType::int32, "sysdb-event"},
    level_started{YType::int32, "level-started"},
    proc_avail{YType::int32, "proc-avail"},
    tuples_scanned{YType::int32, "tuples-scanned"},
    no_chkpt_start{YType::int32, "no-chkpt-start"},
    in_shut_down{YType::int32, "in-shut-down"},
    sm_started{YType::int32, "sm-started"},
    ignore_on_sc{YType::int32, "ignore-on-sc"},
    ignore_on_easy_bake{YType::int32, "ignore-on-easy-bake"},
    pre_init{YType::int32, "pre-init"},
    eoi_received{YType::int32, "eoi-received"},
    eoi_timeout{YType::int32, "eoi-timeout"},
    avail_timeout{YType::int32, "avail-timeout"},
    reserved_memory{YType::int32, "reserved-memory"},
    allow_warned{YType::int32, "allow-warned"},
    arg_change{YType::int32, "arg-change"},
    restart_on_tuple{YType::int32, "restart-on-tuple"},
    boot_hold{YType::int32, "boot-hold"},
    reg_id{YType::int32, "reg-id"},
    memory_limit{YType::int32, "memory-limit"},
    parent_job_id{YType::int32, "parent-job-id"},
    tuple_index{YType::int32, "tuple-index"},
    dump_count{YType::int32, "dump-count"},
    respawn_interval_user{YType::int32, "respawn-interval-user"},
    silent_restart_count{YType::int32, "silent-restart-count"},
    critical_tier{YType::int32, "critical-tier"},
    exit_type{YType::int32, "exit-type"},
    init_timeout{YType::int32, "init-timeout"},
    restart_by_cmd{YType::int32, "restart-by-cmd"},
    boot_pref{YType::int32, "boot-pref"},
    mdr_mbi_proc{YType::int32, "mdr-mbi-proc"},
    mdr_non_mbi_kld{YType::int32, "mdr-non-mbi-kld"},
    mdr_mbi_kld{YType::int32, "mdr-mbi-kld"},
    mdr_shut_delay{YType::int32, "mdr-shut-delay"},
    mdr_keep_thru{YType::int32, "mdr-keep-thru"},
    mdr_spoofer{YType::int32, "mdr-spoofer"},
    mdr_spoofed{YType::int32, "mdr-spoofed"},
    mdr_spoofed_last{YType::int32, "mdr-spoofed-last"},
    mdr_spoofed_ready{YType::int32, "mdr-spoofed-ready"},
    mdr_pcb_check{YType::int32, "mdr-pcb-check"},
    mdr_kill_tier{YType::int32, "mdr-kill-tier"},
    mdr_kld{YType::int32, "mdr-kld"},
    mdr_level{YType::int32, "mdr-level"},
    fm_restart_cnt{YType::int32, "fm-restart-cnt"},
    self_managed{YType::int32, "self-managed"}
        ,
    tuple(this, {})
    , orig_tuple(this, {})
{

    yang_name = "verbose-info"; yang_parent_name = "process-name-runverbose"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::~VerboseInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tuple.len(); index++)
    {
        if(tuple[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<orig_tuple.len(); index++)
    {
        if(orig_tuple[index]->has_data())
            return true;
    }
    return process_group.is_set
	|| respawn_allowed.is_set
	|| wait_for_exit.is_set
	|| dynamic_tag.is_set
	|| forced_stop.is_set
	|| critical_process.is_set
	|| hold.is_set
	|| transient.is_set
	|| tuple_cfgmgr.is_set
	|| standby_capable.is_set
	|| edm_startup.is_set
	|| placement.is_set
	|| skip_kill_notif.is_set
	|| init_proc.is_set
	|| sysdb_event.is_set
	|| level_started.is_set
	|| proc_avail.is_set
	|| tuples_scanned.is_set
	|| no_chkpt_start.is_set
	|| in_shut_down.is_set
	|| sm_started.is_set
	|| ignore_on_sc.is_set
	|| ignore_on_easy_bake.is_set
	|| pre_init.is_set
	|| eoi_received.is_set
	|| eoi_timeout.is_set
	|| avail_timeout.is_set
	|| reserved_memory.is_set
	|| allow_warned.is_set
	|| arg_change.is_set
	|| restart_on_tuple.is_set
	|| boot_hold.is_set
	|| reg_id.is_set
	|| memory_limit.is_set
	|| parent_job_id.is_set
	|| tuple_index.is_set
	|| dump_count.is_set
	|| respawn_interval_user.is_set
	|| silent_restart_count.is_set
	|| critical_tier.is_set
	|| exit_type.is_set
	|| init_timeout.is_set
	|| restart_by_cmd.is_set
	|| boot_pref.is_set
	|| mdr_mbi_proc.is_set
	|| mdr_non_mbi_kld.is_set
	|| mdr_mbi_kld.is_set
	|| mdr_shut_delay.is_set
	|| mdr_keep_thru.is_set
	|| mdr_spoofer.is_set
	|| mdr_spoofed.is_set
	|| mdr_spoofed_last.is_set
	|| mdr_spoofed_ready.is_set
	|| mdr_pcb_check.is_set
	|| mdr_kill_tier.is_set
	|| mdr_kld.is_set
	|| mdr_level.is_set
	|| fm_restart_cnt.is_set
	|| self_managed.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::has_operation() const
{
    for (std::size_t index=0; index<tuple.len(); index++)
    {
        if(tuple[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<orig_tuple.len(); index++)
    {
        if(orig_tuple[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_group.yfilter)
	|| ydk::is_set(respawn_allowed.yfilter)
	|| ydk::is_set(wait_for_exit.yfilter)
	|| ydk::is_set(dynamic_tag.yfilter)
	|| ydk::is_set(forced_stop.yfilter)
	|| ydk::is_set(critical_process.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(transient.yfilter)
	|| ydk::is_set(tuple_cfgmgr.yfilter)
	|| ydk::is_set(standby_capable.yfilter)
	|| ydk::is_set(edm_startup.yfilter)
	|| ydk::is_set(placement.yfilter)
	|| ydk::is_set(skip_kill_notif.yfilter)
	|| ydk::is_set(init_proc.yfilter)
	|| ydk::is_set(sysdb_event.yfilter)
	|| ydk::is_set(level_started.yfilter)
	|| ydk::is_set(proc_avail.yfilter)
	|| ydk::is_set(tuples_scanned.yfilter)
	|| ydk::is_set(no_chkpt_start.yfilter)
	|| ydk::is_set(in_shut_down.yfilter)
	|| ydk::is_set(sm_started.yfilter)
	|| ydk::is_set(ignore_on_sc.yfilter)
	|| ydk::is_set(ignore_on_easy_bake.yfilter)
	|| ydk::is_set(pre_init.yfilter)
	|| ydk::is_set(eoi_received.yfilter)
	|| ydk::is_set(eoi_timeout.yfilter)
	|| ydk::is_set(avail_timeout.yfilter)
	|| ydk::is_set(reserved_memory.yfilter)
	|| ydk::is_set(allow_warned.yfilter)
	|| ydk::is_set(arg_change.yfilter)
	|| ydk::is_set(restart_on_tuple.yfilter)
	|| ydk::is_set(boot_hold.yfilter)
	|| ydk::is_set(reg_id.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(parent_job_id.yfilter)
	|| ydk::is_set(tuple_index.yfilter)
	|| ydk::is_set(dump_count.yfilter)
	|| ydk::is_set(respawn_interval_user.yfilter)
	|| ydk::is_set(silent_restart_count.yfilter)
	|| ydk::is_set(critical_tier.yfilter)
	|| ydk::is_set(exit_type.yfilter)
	|| ydk::is_set(init_timeout.yfilter)
	|| ydk::is_set(restart_by_cmd.yfilter)
	|| ydk::is_set(boot_pref.yfilter)
	|| ydk::is_set(mdr_mbi_proc.yfilter)
	|| ydk::is_set(mdr_non_mbi_kld.yfilter)
	|| ydk::is_set(mdr_mbi_kld.yfilter)
	|| ydk::is_set(mdr_shut_delay.yfilter)
	|| ydk::is_set(mdr_keep_thru.yfilter)
	|| ydk::is_set(mdr_spoofer.yfilter)
	|| ydk::is_set(mdr_spoofed.yfilter)
	|| ydk::is_set(mdr_spoofed_last.yfilter)
	|| ydk::is_set(mdr_spoofed_ready.yfilter)
	|| ydk::is_set(mdr_pcb_check.yfilter)
	|| ydk::is_set(mdr_kill_tier.yfilter)
	|| ydk::is_set(mdr_kld.yfilter)
	|| ydk::is_set(mdr_level.yfilter)
	|| ydk::is_set(fm_restart_cnt.yfilter)
	|| ydk::is_set(self_managed.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verbose-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_group.is_set || is_set(process_group.yfilter)) leaf_name_data.push_back(process_group.get_name_leafdata());
    if (respawn_allowed.is_set || is_set(respawn_allowed.yfilter)) leaf_name_data.push_back(respawn_allowed.get_name_leafdata());
    if (wait_for_exit.is_set || is_set(wait_for_exit.yfilter)) leaf_name_data.push_back(wait_for_exit.get_name_leafdata());
    if (dynamic_tag.is_set || is_set(dynamic_tag.yfilter)) leaf_name_data.push_back(dynamic_tag.get_name_leafdata());
    if (forced_stop.is_set || is_set(forced_stop.yfilter)) leaf_name_data.push_back(forced_stop.get_name_leafdata());
    if (critical_process.is_set || is_set(critical_process.yfilter)) leaf_name_data.push_back(critical_process.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());
    if (tuple_cfgmgr.is_set || is_set(tuple_cfgmgr.yfilter)) leaf_name_data.push_back(tuple_cfgmgr.get_name_leafdata());
    if (standby_capable.is_set || is_set(standby_capable.yfilter)) leaf_name_data.push_back(standby_capable.get_name_leafdata());
    if (edm_startup.is_set || is_set(edm_startup.yfilter)) leaf_name_data.push_back(edm_startup.get_name_leafdata());
    if (placement.is_set || is_set(placement.yfilter)) leaf_name_data.push_back(placement.get_name_leafdata());
    if (skip_kill_notif.is_set || is_set(skip_kill_notif.yfilter)) leaf_name_data.push_back(skip_kill_notif.get_name_leafdata());
    if (init_proc.is_set || is_set(init_proc.yfilter)) leaf_name_data.push_back(init_proc.get_name_leafdata());
    if (sysdb_event.is_set || is_set(sysdb_event.yfilter)) leaf_name_data.push_back(sysdb_event.get_name_leafdata());
    if (level_started.is_set || is_set(level_started.yfilter)) leaf_name_data.push_back(level_started.get_name_leafdata());
    if (proc_avail.is_set || is_set(proc_avail.yfilter)) leaf_name_data.push_back(proc_avail.get_name_leafdata());
    if (tuples_scanned.is_set || is_set(tuples_scanned.yfilter)) leaf_name_data.push_back(tuples_scanned.get_name_leafdata());
    if (no_chkpt_start.is_set || is_set(no_chkpt_start.yfilter)) leaf_name_data.push_back(no_chkpt_start.get_name_leafdata());
    if (in_shut_down.is_set || is_set(in_shut_down.yfilter)) leaf_name_data.push_back(in_shut_down.get_name_leafdata());
    if (sm_started.is_set || is_set(sm_started.yfilter)) leaf_name_data.push_back(sm_started.get_name_leafdata());
    if (ignore_on_sc.is_set || is_set(ignore_on_sc.yfilter)) leaf_name_data.push_back(ignore_on_sc.get_name_leafdata());
    if (ignore_on_easy_bake.is_set || is_set(ignore_on_easy_bake.yfilter)) leaf_name_data.push_back(ignore_on_easy_bake.get_name_leafdata());
    if (pre_init.is_set || is_set(pre_init.yfilter)) leaf_name_data.push_back(pre_init.get_name_leafdata());
    if (eoi_received.is_set || is_set(eoi_received.yfilter)) leaf_name_data.push_back(eoi_received.get_name_leafdata());
    if (eoi_timeout.is_set || is_set(eoi_timeout.yfilter)) leaf_name_data.push_back(eoi_timeout.get_name_leafdata());
    if (avail_timeout.is_set || is_set(avail_timeout.yfilter)) leaf_name_data.push_back(avail_timeout.get_name_leafdata());
    if (reserved_memory.is_set || is_set(reserved_memory.yfilter)) leaf_name_data.push_back(reserved_memory.get_name_leafdata());
    if (allow_warned.is_set || is_set(allow_warned.yfilter)) leaf_name_data.push_back(allow_warned.get_name_leafdata());
    if (arg_change.is_set || is_set(arg_change.yfilter)) leaf_name_data.push_back(arg_change.get_name_leafdata());
    if (restart_on_tuple.is_set || is_set(restart_on_tuple.yfilter)) leaf_name_data.push_back(restart_on_tuple.get_name_leafdata());
    if (boot_hold.is_set || is_set(boot_hold.yfilter)) leaf_name_data.push_back(boot_hold.get_name_leafdata());
    if (reg_id.is_set || is_set(reg_id.yfilter)) leaf_name_data.push_back(reg_id.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (parent_job_id.is_set || is_set(parent_job_id.yfilter)) leaf_name_data.push_back(parent_job_id.get_name_leafdata());
    if (tuple_index.is_set || is_set(tuple_index.yfilter)) leaf_name_data.push_back(tuple_index.get_name_leafdata());
    if (dump_count.is_set || is_set(dump_count.yfilter)) leaf_name_data.push_back(dump_count.get_name_leafdata());
    if (respawn_interval_user.is_set || is_set(respawn_interval_user.yfilter)) leaf_name_data.push_back(respawn_interval_user.get_name_leafdata());
    if (silent_restart_count.is_set || is_set(silent_restart_count.yfilter)) leaf_name_data.push_back(silent_restart_count.get_name_leafdata());
    if (critical_tier.is_set || is_set(critical_tier.yfilter)) leaf_name_data.push_back(critical_tier.get_name_leafdata());
    if (exit_type.is_set || is_set(exit_type.yfilter)) leaf_name_data.push_back(exit_type.get_name_leafdata());
    if (init_timeout.is_set || is_set(init_timeout.yfilter)) leaf_name_data.push_back(init_timeout.get_name_leafdata());
    if (restart_by_cmd.is_set || is_set(restart_by_cmd.yfilter)) leaf_name_data.push_back(restart_by_cmd.get_name_leafdata());
    if (boot_pref.is_set || is_set(boot_pref.yfilter)) leaf_name_data.push_back(boot_pref.get_name_leafdata());
    if (mdr_mbi_proc.is_set || is_set(mdr_mbi_proc.yfilter)) leaf_name_data.push_back(mdr_mbi_proc.get_name_leafdata());
    if (mdr_non_mbi_kld.is_set || is_set(mdr_non_mbi_kld.yfilter)) leaf_name_data.push_back(mdr_non_mbi_kld.get_name_leafdata());
    if (mdr_mbi_kld.is_set || is_set(mdr_mbi_kld.yfilter)) leaf_name_data.push_back(mdr_mbi_kld.get_name_leafdata());
    if (mdr_shut_delay.is_set || is_set(mdr_shut_delay.yfilter)) leaf_name_data.push_back(mdr_shut_delay.get_name_leafdata());
    if (mdr_keep_thru.is_set || is_set(mdr_keep_thru.yfilter)) leaf_name_data.push_back(mdr_keep_thru.get_name_leafdata());
    if (mdr_spoofer.is_set || is_set(mdr_spoofer.yfilter)) leaf_name_data.push_back(mdr_spoofer.get_name_leafdata());
    if (mdr_spoofed.is_set || is_set(mdr_spoofed.yfilter)) leaf_name_data.push_back(mdr_spoofed.get_name_leafdata());
    if (mdr_spoofed_last.is_set || is_set(mdr_spoofed_last.yfilter)) leaf_name_data.push_back(mdr_spoofed_last.get_name_leafdata());
    if (mdr_spoofed_ready.is_set || is_set(mdr_spoofed_ready.yfilter)) leaf_name_data.push_back(mdr_spoofed_ready.get_name_leafdata());
    if (mdr_pcb_check.is_set || is_set(mdr_pcb_check.yfilter)) leaf_name_data.push_back(mdr_pcb_check.get_name_leafdata());
    if (mdr_kill_tier.is_set || is_set(mdr_kill_tier.yfilter)) leaf_name_data.push_back(mdr_kill_tier.get_name_leafdata());
    if (mdr_kld.is_set || is_set(mdr_kld.yfilter)) leaf_name_data.push_back(mdr_kld.get_name_leafdata());
    if (mdr_level.is_set || is_set(mdr_level.yfilter)) leaf_name_data.push_back(mdr_level.get_name_leafdata());
    if (fm_restart_cnt.is_set || is_set(fm_restart_cnt.yfilter)) leaf_name_data.push_back(fm_restart_cnt.get_name_leafdata());
    if (self_managed.is_set || is_set(self_managed.yfilter)) leaf_name_data.push_back(self_managed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tuple")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple>();
        ent_->parent = this;
        tuple.append(ent_);
        return ent_;
    }

    if(child_yang_name == "orig-tuple")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple>();
        ent_->parent = this;
        orig_tuple.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tuple.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : orig_tuple.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-group")
    {
        process_group = value;
        process_group.value_namespace = name_space;
        process_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-allowed")
    {
        respawn_allowed = value;
        respawn_allowed.value_namespace = name_space;
        respawn_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-exit")
    {
        wait_for_exit = value;
        wait_for_exit.value_namespace = name_space;
        wait_for_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-tag")
    {
        dynamic_tag = value;
        dynamic_tag.value_namespace = name_space;
        dynamic_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced-stop")
    {
        forced_stop = value;
        forced_stop.value_namespace = name_space;
        forced_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-process")
    {
        critical_process = value;
        critical_process.value_namespace = name_space;
        critical_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tuple-cfgmgr")
    {
        tuple_cfgmgr = value;
        tuple_cfgmgr.value_namespace = name_space;
        tuple_cfgmgr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-capable")
    {
        standby_capable = value;
        standby_capable.value_namespace = name_space;
        standby_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edm-startup")
    {
        edm_startup = value;
        edm_startup.value_namespace = name_space;
        edm_startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement")
    {
        placement = value;
        placement.value_namespace = name_space;
        placement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skip-kill-notif")
    {
        skip_kill_notif = value;
        skip_kill_notif.value_namespace = name_space;
        skip_kill_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-proc")
    {
        init_proc = value;
        init_proc.value_namespace = name_space;
        init_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysdb-event")
    {
        sysdb_event = value;
        sysdb_event.value_namespace = name_space;
        sysdb_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-started")
    {
        level_started = value;
        level_started.value_namespace = name_space;
        level_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-avail")
    {
        proc_avail = value;
        proc_avail.value_namespace = name_space;
        proc_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tuples-scanned")
    {
        tuples_scanned = value;
        tuples_scanned.value_namespace = name_space;
        tuples_scanned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-chkpt-start")
    {
        no_chkpt_start = value;
        no_chkpt_start.value_namespace = name_space;
        no_chkpt_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-shut-down")
    {
        in_shut_down = value;
        in_shut_down.value_namespace = name_space;
        in_shut_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sm-started")
    {
        sm_started = value;
        sm_started.value_namespace = name_space;
        sm_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-on-sc")
    {
        ignore_on_sc = value;
        ignore_on_sc.value_namespace = name_space;
        ignore_on_sc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-on-easy-bake")
    {
        ignore_on_easy_bake = value;
        ignore_on_easy_bake.value_namespace = name_space;
        ignore_on_easy_bake.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-init")
    {
        pre_init = value;
        pre_init.value_namespace = name_space;
        pre_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoi-received")
    {
        eoi_received = value;
        eoi_received.value_namespace = name_space;
        eoi_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoi-timeout")
    {
        eoi_timeout = value;
        eoi_timeout.value_namespace = name_space;
        eoi_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avail-timeout")
    {
        avail_timeout = value;
        avail_timeout.value_namespace = name_space;
        avail_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory = value;
        reserved_memory.value_namespace = name_space;
        reserved_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-warned")
    {
        allow_warned = value;
        allow_warned.value_namespace = name_space;
        allow_warned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arg-change")
    {
        arg_change = value;
        arg_change.value_namespace = name_space;
        arg_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-on-tuple")
    {
        restart_on_tuple = value;
        restart_on_tuple.value_namespace = name_space;
        restart_on_tuple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-hold")
    {
        boot_hold = value;
        boot_hold.value_namespace = name_space;
        boot_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-id")
    {
        reg_id = value;
        reg_id.value_namespace = name_space;
        reg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-job-id")
    {
        parent_job_id = value;
        parent_job_id.value_namespace = name_space;
        parent_job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tuple-index")
    {
        tuple_index = value;
        tuple_index.value_namespace = name_space;
        tuple_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dump-count")
    {
        dump_count = value;
        dump_count.value_namespace = name_space;
        dump_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-interval-user")
    {
        respawn_interval_user = value;
        respawn_interval_user.value_namespace = name_space;
        respawn_interval_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "silent-restart-count")
    {
        silent_restart_count = value;
        silent_restart_count.value_namespace = name_space;
        silent_restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-tier")
    {
        critical_tier = value;
        critical_tier.value_namespace = name_space;
        critical_tier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exit-type")
    {
        exit_type = value;
        exit_type.value_namespace = name_space;
        exit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-timeout")
    {
        init_timeout = value;
        init_timeout.value_namespace = name_space;
        init_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-by-cmd")
    {
        restart_by_cmd = value;
        restart_by_cmd.value_namespace = name_space;
        restart_by_cmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-pref")
    {
        boot_pref = value;
        boot_pref.value_namespace = name_space;
        boot_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-mbi-proc")
    {
        mdr_mbi_proc = value;
        mdr_mbi_proc.value_namespace = name_space;
        mdr_mbi_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-non-mbi-kld")
    {
        mdr_non_mbi_kld = value;
        mdr_non_mbi_kld.value_namespace = name_space;
        mdr_non_mbi_kld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-mbi-kld")
    {
        mdr_mbi_kld = value;
        mdr_mbi_kld.value_namespace = name_space;
        mdr_mbi_kld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-shut-delay")
    {
        mdr_shut_delay = value;
        mdr_shut_delay.value_namespace = name_space;
        mdr_shut_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-keep-thru")
    {
        mdr_keep_thru = value;
        mdr_keep_thru.value_namespace = name_space;
        mdr_keep_thru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofer")
    {
        mdr_spoofer = value;
        mdr_spoofer.value_namespace = name_space;
        mdr_spoofer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofed")
    {
        mdr_spoofed = value;
        mdr_spoofed.value_namespace = name_space;
        mdr_spoofed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofed-last")
    {
        mdr_spoofed_last = value;
        mdr_spoofed_last.value_namespace = name_space;
        mdr_spoofed_last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofed-ready")
    {
        mdr_spoofed_ready = value;
        mdr_spoofed_ready.value_namespace = name_space;
        mdr_spoofed_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-pcb-check")
    {
        mdr_pcb_check = value;
        mdr_pcb_check.value_namespace = name_space;
        mdr_pcb_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-kill-tier")
    {
        mdr_kill_tier = value;
        mdr_kill_tier.value_namespace = name_space;
        mdr_kill_tier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-kld")
    {
        mdr_kld = value;
        mdr_kld.value_namespace = name_space;
        mdr_kld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-level")
    {
        mdr_level = value;
        mdr_level.value_namespace = name_space;
        mdr_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm-restart-cnt")
    {
        fm_restart_cnt = value;
        fm_restart_cnt.value_namespace = name_space;
        fm_restart_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-managed")
    {
        self_managed = value;
        self_managed.value_namespace = name_space;
        self_managed.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-group")
    {
        process_group.yfilter = yfilter;
    }
    if(value_path == "respawn-allowed")
    {
        respawn_allowed.yfilter = yfilter;
    }
    if(value_path == "wait-for-exit")
    {
        wait_for_exit.yfilter = yfilter;
    }
    if(value_path == "dynamic-tag")
    {
        dynamic_tag.yfilter = yfilter;
    }
    if(value_path == "forced-stop")
    {
        forced_stop.yfilter = yfilter;
    }
    if(value_path == "critical-process")
    {
        critical_process.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
    if(value_path == "tuple-cfgmgr")
    {
        tuple_cfgmgr.yfilter = yfilter;
    }
    if(value_path == "standby-capable")
    {
        standby_capable.yfilter = yfilter;
    }
    if(value_path == "edm-startup")
    {
        edm_startup.yfilter = yfilter;
    }
    if(value_path == "placement")
    {
        placement.yfilter = yfilter;
    }
    if(value_path == "skip-kill-notif")
    {
        skip_kill_notif.yfilter = yfilter;
    }
    if(value_path == "init-proc")
    {
        init_proc.yfilter = yfilter;
    }
    if(value_path == "sysdb-event")
    {
        sysdb_event.yfilter = yfilter;
    }
    if(value_path == "level-started")
    {
        level_started.yfilter = yfilter;
    }
    if(value_path == "proc-avail")
    {
        proc_avail.yfilter = yfilter;
    }
    if(value_path == "tuples-scanned")
    {
        tuples_scanned.yfilter = yfilter;
    }
    if(value_path == "no-chkpt-start")
    {
        no_chkpt_start.yfilter = yfilter;
    }
    if(value_path == "in-shut-down")
    {
        in_shut_down.yfilter = yfilter;
    }
    if(value_path == "sm-started")
    {
        sm_started.yfilter = yfilter;
    }
    if(value_path == "ignore-on-sc")
    {
        ignore_on_sc.yfilter = yfilter;
    }
    if(value_path == "ignore-on-easy-bake")
    {
        ignore_on_easy_bake.yfilter = yfilter;
    }
    if(value_path == "pre-init")
    {
        pre_init.yfilter = yfilter;
    }
    if(value_path == "eoi-received")
    {
        eoi_received.yfilter = yfilter;
    }
    if(value_path == "eoi-timeout")
    {
        eoi_timeout.yfilter = yfilter;
    }
    if(value_path == "avail-timeout")
    {
        avail_timeout.yfilter = yfilter;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory.yfilter = yfilter;
    }
    if(value_path == "allow-warned")
    {
        allow_warned.yfilter = yfilter;
    }
    if(value_path == "arg-change")
    {
        arg_change.yfilter = yfilter;
    }
    if(value_path == "restart-on-tuple")
    {
        restart_on_tuple.yfilter = yfilter;
    }
    if(value_path == "boot-hold")
    {
        boot_hold.yfilter = yfilter;
    }
    if(value_path == "reg-id")
    {
        reg_id.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "parent-job-id")
    {
        parent_job_id.yfilter = yfilter;
    }
    if(value_path == "tuple-index")
    {
        tuple_index.yfilter = yfilter;
    }
    if(value_path == "dump-count")
    {
        dump_count.yfilter = yfilter;
    }
    if(value_path == "respawn-interval-user")
    {
        respawn_interval_user.yfilter = yfilter;
    }
    if(value_path == "silent-restart-count")
    {
        silent_restart_count.yfilter = yfilter;
    }
    if(value_path == "critical-tier")
    {
        critical_tier.yfilter = yfilter;
    }
    if(value_path == "exit-type")
    {
        exit_type.yfilter = yfilter;
    }
    if(value_path == "init-timeout")
    {
        init_timeout.yfilter = yfilter;
    }
    if(value_path == "restart-by-cmd")
    {
        restart_by_cmd.yfilter = yfilter;
    }
    if(value_path == "boot-pref")
    {
        boot_pref.yfilter = yfilter;
    }
    if(value_path == "mdr-mbi-proc")
    {
        mdr_mbi_proc.yfilter = yfilter;
    }
    if(value_path == "mdr-non-mbi-kld")
    {
        mdr_non_mbi_kld.yfilter = yfilter;
    }
    if(value_path == "mdr-mbi-kld")
    {
        mdr_mbi_kld.yfilter = yfilter;
    }
    if(value_path == "mdr-shut-delay")
    {
        mdr_shut_delay.yfilter = yfilter;
    }
    if(value_path == "mdr-keep-thru")
    {
        mdr_keep_thru.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofer")
    {
        mdr_spoofer.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofed")
    {
        mdr_spoofed.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofed-last")
    {
        mdr_spoofed_last.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofed-ready")
    {
        mdr_spoofed_ready.yfilter = yfilter;
    }
    if(value_path == "mdr-pcb-check")
    {
        mdr_pcb_check.yfilter = yfilter;
    }
    if(value_path == "mdr-kill-tier")
    {
        mdr_kill_tier.yfilter = yfilter;
    }
    if(value_path == "mdr-kld")
    {
        mdr_kld.yfilter = yfilter;
    }
    if(value_path == "mdr-level")
    {
        mdr_level.yfilter = yfilter;
    }
    if(value_path == "fm-restart-cnt")
    {
        fm_restart_cnt.yfilter = yfilter;
    }
    if(value_path == "self-managed")
    {
        self_managed.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple" || name == "orig-tuple" || name == "process-group" || name == "respawn-allowed" || name == "wait-for-exit" || name == "dynamic-tag" || name == "forced-stop" || name == "critical-process" || name == "hold" || name == "transient" || name == "tuple-cfgmgr" || name == "standby-capable" || name == "edm-startup" || name == "placement" || name == "skip-kill-notif" || name == "init-proc" || name == "sysdb-event" || name == "level-started" || name == "proc-avail" || name == "tuples-scanned" || name == "no-chkpt-start" || name == "in-shut-down" || name == "sm-started" || name == "ignore-on-sc" || name == "ignore-on-easy-bake" || name == "pre-init" || name == "eoi-received" || name == "eoi-timeout" || name == "avail-timeout" || name == "reserved-memory" || name == "allow-warned" || name == "arg-change" || name == "restart-on-tuple" || name == "boot-hold" || name == "reg-id" || name == "memory-limit" || name == "parent-job-id" || name == "tuple-index" || name == "dump-count" || name == "respawn-interval-user" || name == "silent-restart-count" || name == "critical-tier" || name == "exit-type" || name == "init-timeout" || name == "restart-by-cmd" || name == "boot-pref" || name == "mdr-mbi-proc" || name == "mdr-non-mbi-kld" || name == "mdr-mbi-kld" || name == "mdr-shut-delay" || name == "mdr-keep-thru" || name == "mdr-spoofer" || name == "mdr-spoofed" || name == "mdr-spoofed-last" || name == "mdr-spoofed-ready" || name == "mdr-pcb-check" || name == "mdr-kill-tier" || name == "mdr-kld" || name == "mdr-level" || name == "fm-restart-cnt" || name == "self-managed")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::Tuple()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "tuple"; yang_parent_name = "verbose-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::~Tuple()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tuple";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::OrigTuple()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "orig-tuple"; yang_parent_name = "verbose-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::~OrigTuple()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-tuple";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetails()
    :
    process_name_detail(this, {"proc_name"})
{

    yang_name = "process-name-details"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::~ProcessNameDetails()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_name_detail.len(); index++)
    {
        if(process_name_detail[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::has_operation() const
{
    for (std::size_t index=0; index<process_name_detail.len(); index++)
    {
        if(process_name_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-detail")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail>();
        ent_->parent = this;
        process_name_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_name_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-detail")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::ProcessNameDetail()
    :
    proc_name{YType::str, "proc-name"}
        ,
    basic_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo>())
    , detail_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo>())
{
    basic_info->parent = this;
    detail_info->parent = this;

    yang_name = "process-name-detail"; yang_parent_name = "process-name-details"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::~ProcessNameDetail()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::has_data() const
{
    if (is_presence_container) return true;
    return proc_name.is_set
	|| (basic_info !=  nullptr && basic_info->has_data())
	|| (detail_info !=  nullptr && detail_info->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (detail_info !=  nullptr && detail_info->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-detail";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "detail-info")
    {
        if(detail_info == nullptr)
        {
            detail_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo>();
        }
        return detail_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(detail_info != nullptr)
    {
        _children["detail-info"] = detail_info;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "detail-info" || name == "proc-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::BasicInfo()
    :
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "basic-info"; yang_parent_name = "process-name-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::~BasicInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::DetailInfo()
    :
    running_path{YType::str, "running-path"},
    package_path{YType::str, "package-path"},
    job_id_link{YType::int32, "job-id-link"},
    group_jid{YType::str, "group-jid"},
    fail_count{YType::uint32, "fail-count"},
    restart_needed{YType::boolean, "restart-needed"},
    init_process{YType::boolean, "init-process"},
    last_online{YType::str, "last-online"},
    this_pcb{YType::str, "this-pcb"},
    next_pcb{YType::str, "next-pcb"},
    envs{YType::str, "envs"},
    wait_for{YType::str, "wait-for"},
    job_id_on_rp{YType::int32, "job-id-on-rp"},
    is_standby_capable{YType::boolean, "is-standby-capable"},
    disable_kill{YType::boolean, "disable-kill"},
    send_avail{YType::boolean, "send-avail"},
    node_event_cli_info{YType::int32, "node-event-cli-info"},
    node_redundancy_state{YType::str, "node-redundancy-state"},
    role_event_cli_info{YType::int32, "role-event-cli-info"},
    proc_role_state{YType::str, "proc-role-state"},
    standby_event_cli_info{YType::int32, "standby-event-cli-info"},
    cleanup_event_cli_info{YType::int32, "cleanup-event-cli-info"},
    band_ready_event_cli_info{YType::int32, "band-ready-event-cli-info"},
    lr_event_cli_info{YType::int32, "lr-event-cli-info"},
    plane_ready_event_cli_info{YType::int32, "plane-ready-event-cli-info"},
    mdr_is_done_cli_info{YType::int32, "mdr-is-done-cli-info"}
{

    yang_name = "detail-info"; yang_parent_name = "process-name-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::~DetailInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return running_path.is_set
	|| package_path.is_set
	|| job_id_link.is_set
	|| group_jid.is_set
	|| fail_count.is_set
	|| restart_needed.is_set
	|| init_process.is_set
	|| last_online.is_set
	|| this_pcb.is_set
	|| next_pcb.is_set
	|| envs.is_set
	|| wait_for.is_set
	|| job_id_on_rp.is_set
	|| is_standby_capable.is_set
	|| disable_kill.is_set
	|| send_avail.is_set
	|| node_event_cli_info.is_set
	|| node_redundancy_state.is_set
	|| role_event_cli_info.is_set
	|| proc_role_state.is_set
	|| standby_event_cli_info.is_set
	|| cleanup_event_cli_info.is_set
	|| band_ready_event_cli_info.is_set
	|| lr_event_cli_info.is_set
	|| plane_ready_event_cli_info.is_set
	|| mdr_is_done_cli_info.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_path.yfilter)
	|| ydk::is_set(package_path.yfilter)
	|| ydk::is_set(job_id_link.yfilter)
	|| ydk::is_set(group_jid.yfilter)
	|| ydk::is_set(fail_count.yfilter)
	|| ydk::is_set(restart_needed.yfilter)
	|| ydk::is_set(init_process.yfilter)
	|| ydk::is_set(last_online.yfilter)
	|| ydk::is_set(this_pcb.yfilter)
	|| ydk::is_set(next_pcb.yfilter)
	|| ydk::is_set(envs.yfilter)
	|| ydk::is_set(wait_for.yfilter)
	|| ydk::is_set(job_id_on_rp.yfilter)
	|| ydk::is_set(is_standby_capable.yfilter)
	|| ydk::is_set(disable_kill.yfilter)
	|| ydk::is_set(send_avail.yfilter)
	|| ydk::is_set(node_event_cli_info.yfilter)
	|| ydk::is_set(node_redundancy_state.yfilter)
	|| ydk::is_set(role_event_cli_info.yfilter)
	|| ydk::is_set(proc_role_state.yfilter)
	|| ydk::is_set(standby_event_cli_info.yfilter)
	|| ydk::is_set(cleanup_event_cli_info.yfilter)
	|| ydk::is_set(band_ready_event_cli_info.yfilter)
	|| ydk::is_set(lr_event_cli_info.yfilter)
	|| ydk::is_set(plane_ready_event_cli_info.yfilter)
	|| ydk::is_set(mdr_is_done_cli_info.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_path.is_set || is_set(running_path.yfilter)) leaf_name_data.push_back(running_path.get_name_leafdata());
    if (package_path.is_set || is_set(package_path.yfilter)) leaf_name_data.push_back(package_path.get_name_leafdata());
    if (job_id_link.is_set || is_set(job_id_link.yfilter)) leaf_name_data.push_back(job_id_link.get_name_leafdata());
    if (group_jid.is_set || is_set(group_jid.yfilter)) leaf_name_data.push_back(group_jid.get_name_leafdata());
    if (fail_count.is_set || is_set(fail_count.yfilter)) leaf_name_data.push_back(fail_count.get_name_leafdata());
    if (restart_needed.is_set || is_set(restart_needed.yfilter)) leaf_name_data.push_back(restart_needed.get_name_leafdata());
    if (init_process.is_set || is_set(init_process.yfilter)) leaf_name_data.push_back(init_process.get_name_leafdata());
    if (last_online.is_set || is_set(last_online.yfilter)) leaf_name_data.push_back(last_online.get_name_leafdata());
    if (this_pcb.is_set || is_set(this_pcb.yfilter)) leaf_name_data.push_back(this_pcb.get_name_leafdata());
    if (next_pcb.is_set || is_set(next_pcb.yfilter)) leaf_name_data.push_back(next_pcb.get_name_leafdata());
    if (envs.is_set || is_set(envs.yfilter)) leaf_name_data.push_back(envs.get_name_leafdata());
    if (wait_for.is_set || is_set(wait_for.yfilter)) leaf_name_data.push_back(wait_for.get_name_leafdata());
    if (job_id_on_rp.is_set || is_set(job_id_on_rp.yfilter)) leaf_name_data.push_back(job_id_on_rp.get_name_leafdata());
    if (is_standby_capable.is_set || is_set(is_standby_capable.yfilter)) leaf_name_data.push_back(is_standby_capable.get_name_leafdata());
    if (disable_kill.is_set || is_set(disable_kill.yfilter)) leaf_name_data.push_back(disable_kill.get_name_leafdata());
    if (send_avail.is_set || is_set(send_avail.yfilter)) leaf_name_data.push_back(send_avail.get_name_leafdata());
    if (node_event_cli_info.is_set || is_set(node_event_cli_info.yfilter)) leaf_name_data.push_back(node_event_cli_info.get_name_leafdata());
    if (node_redundancy_state.is_set || is_set(node_redundancy_state.yfilter)) leaf_name_data.push_back(node_redundancy_state.get_name_leafdata());
    if (role_event_cli_info.is_set || is_set(role_event_cli_info.yfilter)) leaf_name_data.push_back(role_event_cli_info.get_name_leafdata());
    if (proc_role_state.is_set || is_set(proc_role_state.yfilter)) leaf_name_data.push_back(proc_role_state.get_name_leafdata());
    if (standby_event_cli_info.is_set || is_set(standby_event_cli_info.yfilter)) leaf_name_data.push_back(standby_event_cli_info.get_name_leafdata());
    if (cleanup_event_cli_info.is_set || is_set(cleanup_event_cli_info.yfilter)) leaf_name_data.push_back(cleanup_event_cli_info.get_name_leafdata());
    if (band_ready_event_cli_info.is_set || is_set(band_ready_event_cli_info.yfilter)) leaf_name_data.push_back(band_ready_event_cli_info.get_name_leafdata());
    if (lr_event_cli_info.is_set || is_set(lr_event_cli_info.yfilter)) leaf_name_data.push_back(lr_event_cli_info.get_name_leafdata());
    if (plane_ready_event_cli_info.is_set || is_set(plane_ready_event_cli_info.yfilter)) leaf_name_data.push_back(plane_ready_event_cli_info.get_name_leafdata());
    if (mdr_is_done_cli_info.is_set || is_set(mdr_is_done_cli_info.yfilter)) leaf_name_data.push_back(mdr_is_done_cli_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-path")
    {
        running_path = value;
        running_path.value_namespace = name_space;
        running_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-path")
    {
        package_path = value;
        package_path.value_namespace = name_space;
        package_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-link")
    {
        job_id_link = value;
        job_id_link.value_namespace = name_space;
        job_id_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-jid")
    {
        group_jid = value;
        group_jid.value_namespace = name_space;
        group_jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-count")
    {
        fail_count = value;
        fail_count.value_namespace = name_space;
        fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-needed")
    {
        restart_needed = value;
        restart_needed.value_namespace = name_space;
        restart_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-process")
    {
        init_process = value;
        init_process.value_namespace = name_space;
        init_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-online")
    {
        last_online = value;
        last_online.value_namespace = name_space;
        last_online.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "this-pcb")
    {
        this_pcb = value;
        this_pcb.value_namespace = name_space;
        this_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pcb")
    {
        next_pcb = value;
        next_pcb.value_namespace = name_space;
        next_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "envs")
    {
        envs = value;
        envs.value_namespace = name_space;
        envs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for")
    {
        wait_for = value;
        wait_for.value_namespace = name_space;
        wait_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp = value;
        job_id_on_rp.value_namespace = name_space;
        job_id_on_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable = value;
        is_standby_capable.value_namespace = name_space;
        is_standby_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-kill")
    {
        disable_kill = value;
        disable_kill.value_namespace = name_space;
        disable_kill.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-avail")
    {
        send_avail = value;
        send_avail.value_namespace = name_space;
        send_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info = value;
        node_event_cli_info.value_namespace = name_space;
        node_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state = value;
        node_redundancy_state.value_namespace = name_space;
        node_redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info = value;
        role_event_cli_info.value_namespace = name_space;
        role_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state = value;
        proc_role_state.value_namespace = name_space;
        proc_role_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info = value;
        standby_event_cli_info.value_namespace = name_space;
        standby_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info = value;
        cleanup_event_cli_info.value_namespace = name_space;
        cleanup_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info = value;
        band_ready_event_cli_info.value_namespace = name_space;
        band_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info = value;
        lr_event_cli_info.value_namespace = name_space;
        lr_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info = value;
        plane_ready_event_cli_info.value_namespace = name_space;
        plane_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info = value;
        mdr_is_done_cli_info.value_namespace = name_space;
        mdr_is_done_cli_info.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-path")
    {
        running_path.yfilter = yfilter;
    }
    if(value_path == "package-path")
    {
        package_path.yfilter = yfilter;
    }
    if(value_path == "job-id-link")
    {
        job_id_link.yfilter = yfilter;
    }
    if(value_path == "group-jid")
    {
        group_jid.yfilter = yfilter;
    }
    if(value_path == "fail-count")
    {
        fail_count.yfilter = yfilter;
    }
    if(value_path == "restart-needed")
    {
        restart_needed.yfilter = yfilter;
    }
    if(value_path == "init-process")
    {
        init_process.yfilter = yfilter;
    }
    if(value_path == "last-online")
    {
        last_online.yfilter = yfilter;
    }
    if(value_path == "this-pcb")
    {
        this_pcb.yfilter = yfilter;
    }
    if(value_path == "next-pcb")
    {
        next_pcb.yfilter = yfilter;
    }
    if(value_path == "envs")
    {
        envs.yfilter = yfilter;
    }
    if(value_path == "wait-for")
    {
        wait_for.yfilter = yfilter;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp.yfilter = yfilter;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable.yfilter = yfilter;
    }
    if(value_path == "disable-kill")
    {
        disable_kill.yfilter = yfilter;
    }
    if(value_path == "send-avail")
    {
        send_avail.yfilter = yfilter;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state.yfilter = yfilter;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state.yfilter = yfilter;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-path" || name == "package-path" || name == "job-id-link" || name == "group-jid" || name == "fail-count" || name == "restart-needed" || name == "init-process" || name == "last-online" || name == "this-pcb" || name == "next-pcb" || name == "envs" || name == "wait-for" || name == "job-id-on-rp" || name == "is-standby-capable" || name == "disable-kill" || name == "send-avail" || name == "node-event-cli-info" || name == "node-redundancy-state" || name == "role-event-cli-info" || name == "proc-role-state" || name == "standby-event-cli-info" || name == "cleanup-event-cli-info" || name == "band-ready-event-cli-info" || name == "lr-event-cli-info" || name == "plane-ready-event-cli-info" || name == "mdr-is-done-cli-info")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerboses()
    :
    process_name_verbose(this, {"proc_name"})
{

    yang_name = "process-name-verboses"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::~ProcessNameVerboses()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_name_verbose.len(); index++)
    {
        if(process_name_verbose[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::has_operation() const
{
    for (std::size_t index=0; index<process_name_verbose.len(); index++)
    {
        if(process_name_verbose[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-verboses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-name-verbose")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose>();
        ent_->parent = this;
        process_name_verbose.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_name_verbose.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name-verbose")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::ProcessNameVerbose()
    :
    proc_name{YType::str, "proc-name"}
        ,
    basic_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo>())
    , detail_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo>())
    , verbose_info(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo>())
{
    basic_info->parent = this;
    detail_info->parent = this;
    verbose_info->parent = this;

    yang_name = "process-name-verbose"; yang_parent_name = "process-name-verboses"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::~ProcessNameVerbose()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::has_data() const
{
    if (is_presence_container) return true;
    return proc_name.is_set
	|| (basic_info !=  nullptr && basic_info->has_data())
	|| (detail_info !=  nullptr && detail_info->has_data())
	|| (verbose_info !=  nullptr && verbose_info->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (detail_info !=  nullptr && detail_info->has_operation())
	|| (verbose_info !=  nullptr && verbose_info->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-name-verbose";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "detail-info")
    {
        if(detail_info == nullptr)
        {
            detail_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo>();
        }
        return detail_info;
    }

    if(child_yang_name == "verbose-info")
    {
        if(verbose_info == nullptr)
        {
            verbose_info = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo>();
        }
        return verbose_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(basic_info != nullptr)
    {
        _children["basic-info"] = basic_info;
    }

    if(detail_info != nullptr)
    {
        _children["detail-info"] = detail_info;
    }

    if(verbose_info != nullptr)
    {
        _children["verbose-info"] = verbose_info;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "detail-info" || name == "verbose-info" || name == "proc-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::BasicInfo()
    :
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "basic-info"; yang_parent_name = "process-name-verbose"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::~BasicInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "basic-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::DetailInfo()
    :
    running_path{YType::str, "running-path"},
    package_path{YType::str, "package-path"},
    job_id_link{YType::int32, "job-id-link"},
    group_jid{YType::str, "group-jid"},
    fail_count{YType::uint32, "fail-count"},
    restart_needed{YType::boolean, "restart-needed"},
    init_process{YType::boolean, "init-process"},
    last_online{YType::str, "last-online"},
    this_pcb{YType::str, "this-pcb"},
    next_pcb{YType::str, "next-pcb"},
    envs{YType::str, "envs"},
    wait_for{YType::str, "wait-for"},
    job_id_on_rp{YType::int32, "job-id-on-rp"},
    is_standby_capable{YType::boolean, "is-standby-capable"},
    disable_kill{YType::boolean, "disable-kill"},
    send_avail{YType::boolean, "send-avail"},
    node_event_cli_info{YType::int32, "node-event-cli-info"},
    node_redundancy_state{YType::str, "node-redundancy-state"},
    role_event_cli_info{YType::int32, "role-event-cli-info"},
    proc_role_state{YType::str, "proc-role-state"},
    standby_event_cli_info{YType::int32, "standby-event-cli-info"},
    cleanup_event_cli_info{YType::int32, "cleanup-event-cli-info"},
    band_ready_event_cli_info{YType::int32, "band-ready-event-cli-info"},
    lr_event_cli_info{YType::int32, "lr-event-cli-info"},
    plane_ready_event_cli_info{YType::int32, "plane-ready-event-cli-info"},
    mdr_is_done_cli_info{YType::int32, "mdr-is-done-cli-info"}
{

    yang_name = "detail-info"; yang_parent_name = "process-name-verbose"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::~DetailInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return running_path.is_set
	|| package_path.is_set
	|| job_id_link.is_set
	|| group_jid.is_set
	|| fail_count.is_set
	|| restart_needed.is_set
	|| init_process.is_set
	|| last_online.is_set
	|| this_pcb.is_set
	|| next_pcb.is_set
	|| envs.is_set
	|| wait_for.is_set
	|| job_id_on_rp.is_set
	|| is_standby_capable.is_set
	|| disable_kill.is_set
	|| send_avail.is_set
	|| node_event_cli_info.is_set
	|| node_redundancy_state.is_set
	|| role_event_cli_info.is_set
	|| proc_role_state.is_set
	|| standby_event_cli_info.is_set
	|| cleanup_event_cli_info.is_set
	|| band_ready_event_cli_info.is_set
	|| lr_event_cli_info.is_set
	|| plane_ready_event_cli_info.is_set
	|| mdr_is_done_cli_info.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_path.yfilter)
	|| ydk::is_set(package_path.yfilter)
	|| ydk::is_set(job_id_link.yfilter)
	|| ydk::is_set(group_jid.yfilter)
	|| ydk::is_set(fail_count.yfilter)
	|| ydk::is_set(restart_needed.yfilter)
	|| ydk::is_set(init_process.yfilter)
	|| ydk::is_set(last_online.yfilter)
	|| ydk::is_set(this_pcb.yfilter)
	|| ydk::is_set(next_pcb.yfilter)
	|| ydk::is_set(envs.yfilter)
	|| ydk::is_set(wait_for.yfilter)
	|| ydk::is_set(job_id_on_rp.yfilter)
	|| ydk::is_set(is_standby_capable.yfilter)
	|| ydk::is_set(disable_kill.yfilter)
	|| ydk::is_set(send_avail.yfilter)
	|| ydk::is_set(node_event_cli_info.yfilter)
	|| ydk::is_set(node_redundancy_state.yfilter)
	|| ydk::is_set(role_event_cli_info.yfilter)
	|| ydk::is_set(proc_role_state.yfilter)
	|| ydk::is_set(standby_event_cli_info.yfilter)
	|| ydk::is_set(cleanup_event_cli_info.yfilter)
	|| ydk::is_set(band_ready_event_cli_info.yfilter)
	|| ydk::is_set(lr_event_cli_info.yfilter)
	|| ydk::is_set(plane_ready_event_cli_info.yfilter)
	|| ydk::is_set(mdr_is_done_cli_info.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_path.is_set || is_set(running_path.yfilter)) leaf_name_data.push_back(running_path.get_name_leafdata());
    if (package_path.is_set || is_set(package_path.yfilter)) leaf_name_data.push_back(package_path.get_name_leafdata());
    if (job_id_link.is_set || is_set(job_id_link.yfilter)) leaf_name_data.push_back(job_id_link.get_name_leafdata());
    if (group_jid.is_set || is_set(group_jid.yfilter)) leaf_name_data.push_back(group_jid.get_name_leafdata());
    if (fail_count.is_set || is_set(fail_count.yfilter)) leaf_name_data.push_back(fail_count.get_name_leafdata());
    if (restart_needed.is_set || is_set(restart_needed.yfilter)) leaf_name_data.push_back(restart_needed.get_name_leafdata());
    if (init_process.is_set || is_set(init_process.yfilter)) leaf_name_data.push_back(init_process.get_name_leafdata());
    if (last_online.is_set || is_set(last_online.yfilter)) leaf_name_data.push_back(last_online.get_name_leafdata());
    if (this_pcb.is_set || is_set(this_pcb.yfilter)) leaf_name_data.push_back(this_pcb.get_name_leafdata());
    if (next_pcb.is_set || is_set(next_pcb.yfilter)) leaf_name_data.push_back(next_pcb.get_name_leafdata());
    if (envs.is_set || is_set(envs.yfilter)) leaf_name_data.push_back(envs.get_name_leafdata());
    if (wait_for.is_set || is_set(wait_for.yfilter)) leaf_name_data.push_back(wait_for.get_name_leafdata());
    if (job_id_on_rp.is_set || is_set(job_id_on_rp.yfilter)) leaf_name_data.push_back(job_id_on_rp.get_name_leafdata());
    if (is_standby_capable.is_set || is_set(is_standby_capable.yfilter)) leaf_name_data.push_back(is_standby_capable.get_name_leafdata());
    if (disable_kill.is_set || is_set(disable_kill.yfilter)) leaf_name_data.push_back(disable_kill.get_name_leafdata());
    if (send_avail.is_set || is_set(send_avail.yfilter)) leaf_name_data.push_back(send_avail.get_name_leafdata());
    if (node_event_cli_info.is_set || is_set(node_event_cli_info.yfilter)) leaf_name_data.push_back(node_event_cli_info.get_name_leafdata());
    if (node_redundancy_state.is_set || is_set(node_redundancy_state.yfilter)) leaf_name_data.push_back(node_redundancy_state.get_name_leafdata());
    if (role_event_cli_info.is_set || is_set(role_event_cli_info.yfilter)) leaf_name_data.push_back(role_event_cli_info.get_name_leafdata());
    if (proc_role_state.is_set || is_set(proc_role_state.yfilter)) leaf_name_data.push_back(proc_role_state.get_name_leafdata());
    if (standby_event_cli_info.is_set || is_set(standby_event_cli_info.yfilter)) leaf_name_data.push_back(standby_event_cli_info.get_name_leafdata());
    if (cleanup_event_cli_info.is_set || is_set(cleanup_event_cli_info.yfilter)) leaf_name_data.push_back(cleanup_event_cli_info.get_name_leafdata());
    if (band_ready_event_cli_info.is_set || is_set(band_ready_event_cli_info.yfilter)) leaf_name_data.push_back(band_ready_event_cli_info.get_name_leafdata());
    if (lr_event_cli_info.is_set || is_set(lr_event_cli_info.yfilter)) leaf_name_data.push_back(lr_event_cli_info.get_name_leafdata());
    if (plane_ready_event_cli_info.is_set || is_set(plane_ready_event_cli_info.yfilter)) leaf_name_data.push_back(plane_ready_event_cli_info.get_name_leafdata());
    if (mdr_is_done_cli_info.is_set || is_set(mdr_is_done_cli_info.yfilter)) leaf_name_data.push_back(mdr_is_done_cli_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-path")
    {
        running_path = value;
        running_path.value_namespace = name_space;
        running_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-path")
    {
        package_path = value;
        package_path.value_namespace = name_space;
        package_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-link")
    {
        job_id_link = value;
        job_id_link.value_namespace = name_space;
        job_id_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-jid")
    {
        group_jid = value;
        group_jid.value_namespace = name_space;
        group_jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-count")
    {
        fail_count = value;
        fail_count.value_namespace = name_space;
        fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-needed")
    {
        restart_needed = value;
        restart_needed.value_namespace = name_space;
        restart_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-process")
    {
        init_process = value;
        init_process.value_namespace = name_space;
        init_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-online")
    {
        last_online = value;
        last_online.value_namespace = name_space;
        last_online.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "this-pcb")
    {
        this_pcb = value;
        this_pcb.value_namespace = name_space;
        this_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pcb")
    {
        next_pcb = value;
        next_pcb.value_namespace = name_space;
        next_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "envs")
    {
        envs = value;
        envs.value_namespace = name_space;
        envs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for")
    {
        wait_for = value;
        wait_for.value_namespace = name_space;
        wait_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp = value;
        job_id_on_rp.value_namespace = name_space;
        job_id_on_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable = value;
        is_standby_capable.value_namespace = name_space;
        is_standby_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-kill")
    {
        disable_kill = value;
        disable_kill.value_namespace = name_space;
        disable_kill.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-avail")
    {
        send_avail = value;
        send_avail.value_namespace = name_space;
        send_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info = value;
        node_event_cli_info.value_namespace = name_space;
        node_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state = value;
        node_redundancy_state.value_namespace = name_space;
        node_redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info = value;
        role_event_cli_info.value_namespace = name_space;
        role_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state = value;
        proc_role_state.value_namespace = name_space;
        proc_role_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info = value;
        standby_event_cli_info.value_namespace = name_space;
        standby_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info = value;
        cleanup_event_cli_info.value_namespace = name_space;
        cleanup_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info = value;
        band_ready_event_cli_info.value_namespace = name_space;
        band_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info = value;
        lr_event_cli_info.value_namespace = name_space;
        lr_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info = value;
        plane_ready_event_cli_info.value_namespace = name_space;
        plane_ready_event_cli_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info = value;
        mdr_is_done_cli_info.value_namespace = name_space;
        mdr_is_done_cli_info.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-path")
    {
        running_path.yfilter = yfilter;
    }
    if(value_path == "package-path")
    {
        package_path.yfilter = yfilter;
    }
    if(value_path == "job-id-link")
    {
        job_id_link.yfilter = yfilter;
    }
    if(value_path == "group-jid")
    {
        group_jid.yfilter = yfilter;
    }
    if(value_path == "fail-count")
    {
        fail_count.yfilter = yfilter;
    }
    if(value_path == "restart-needed")
    {
        restart_needed.yfilter = yfilter;
    }
    if(value_path == "init-process")
    {
        init_process.yfilter = yfilter;
    }
    if(value_path == "last-online")
    {
        last_online.yfilter = yfilter;
    }
    if(value_path == "this-pcb")
    {
        this_pcb.yfilter = yfilter;
    }
    if(value_path == "next-pcb")
    {
        next_pcb.yfilter = yfilter;
    }
    if(value_path == "envs")
    {
        envs.yfilter = yfilter;
    }
    if(value_path == "wait-for")
    {
        wait_for.yfilter = yfilter;
    }
    if(value_path == "job-id-on-rp")
    {
        job_id_on_rp.yfilter = yfilter;
    }
    if(value_path == "is-standby-capable")
    {
        is_standby_capable.yfilter = yfilter;
    }
    if(value_path == "disable-kill")
    {
        disable_kill.yfilter = yfilter;
    }
    if(value_path == "send-avail")
    {
        send_avail.yfilter = yfilter;
    }
    if(value_path == "node-event-cli-info")
    {
        node_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "node-redundancy-state")
    {
        node_redundancy_state.yfilter = yfilter;
    }
    if(value_path == "role-event-cli-info")
    {
        role_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "proc-role-state")
    {
        proc_role_state.yfilter = yfilter;
    }
    if(value_path == "standby-event-cli-info")
    {
        standby_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "cleanup-event-cli-info")
    {
        cleanup_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "band-ready-event-cli-info")
    {
        band_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "lr-event-cli-info")
    {
        lr_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "plane-ready-event-cli-info")
    {
        plane_ready_event_cli_info.yfilter = yfilter;
    }
    if(value_path == "mdr-is-done-cli-info")
    {
        mdr_is_done_cli_info.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-path" || name == "package-path" || name == "job-id-link" || name == "group-jid" || name == "fail-count" || name == "restart-needed" || name == "init-process" || name == "last-online" || name == "this-pcb" || name == "next-pcb" || name == "envs" || name == "wait-for" || name == "job-id-on-rp" || name == "is-standby-capable" || name == "disable-kill" || name == "send-avail" || name == "node-event-cli-info" || name == "node-redundancy-state" || name == "role-event-cli-info" || name == "proc-role-state" || name == "standby-event-cli-info" || name == "cleanup-event-cli-info" || name == "band-ready-event-cli-info" || name == "lr-event-cli-info" || name == "plane-ready-event-cli-info" || name == "mdr-is-done-cli-info")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::VerboseInfo()
    :
    process_group{YType::str, "process-group"},
    respawn_allowed{YType::int32, "respawn-allowed"},
    wait_for_exit{YType::int32, "wait-for-exit"},
    dynamic_tag{YType::int32, "dynamic-tag"},
    forced_stop{YType::int32, "forced-stop"},
    critical_process{YType::int32, "critical-process"},
    hold{YType::int32, "hold"},
    transient{YType::int32, "transient"},
    tuple_cfgmgr{YType::int32, "tuple-cfgmgr"},
    standby_capable{YType::int32, "standby-capable"},
    edm_startup{YType::int32, "edm-startup"},
    placement{YType::int32, "placement"},
    skip_kill_notif{YType::int32, "skip-kill-notif"},
    init_proc{YType::int32, "init-proc"},
    sysdb_event{YType::int32, "sysdb-event"},
    level_started{YType::int32, "level-started"},
    proc_avail{YType::int32, "proc-avail"},
    tuples_scanned{YType::int32, "tuples-scanned"},
    no_chkpt_start{YType::int32, "no-chkpt-start"},
    in_shut_down{YType::int32, "in-shut-down"},
    sm_started{YType::int32, "sm-started"},
    ignore_on_sc{YType::int32, "ignore-on-sc"},
    ignore_on_easy_bake{YType::int32, "ignore-on-easy-bake"},
    pre_init{YType::int32, "pre-init"},
    eoi_received{YType::int32, "eoi-received"},
    eoi_timeout{YType::int32, "eoi-timeout"},
    avail_timeout{YType::int32, "avail-timeout"},
    reserved_memory{YType::int32, "reserved-memory"},
    allow_warned{YType::int32, "allow-warned"},
    arg_change{YType::int32, "arg-change"},
    restart_on_tuple{YType::int32, "restart-on-tuple"},
    boot_hold{YType::int32, "boot-hold"},
    reg_id{YType::int32, "reg-id"},
    memory_limit{YType::int32, "memory-limit"},
    parent_job_id{YType::int32, "parent-job-id"},
    tuple_index{YType::int32, "tuple-index"},
    dump_count{YType::int32, "dump-count"},
    respawn_interval_user{YType::int32, "respawn-interval-user"},
    silent_restart_count{YType::int32, "silent-restart-count"},
    critical_tier{YType::int32, "critical-tier"},
    exit_type{YType::int32, "exit-type"},
    init_timeout{YType::int32, "init-timeout"},
    restart_by_cmd{YType::int32, "restart-by-cmd"},
    boot_pref{YType::int32, "boot-pref"},
    mdr_mbi_proc{YType::int32, "mdr-mbi-proc"},
    mdr_non_mbi_kld{YType::int32, "mdr-non-mbi-kld"},
    mdr_mbi_kld{YType::int32, "mdr-mbi-kld"},
    mdr_shut_delay{YType::int32, "mdr-shut-delay"},
    mdr_keep_thru{YType::int32, "mdr-keep-thru"},
    mdr_spoofer{YType::int32, "mdr-spoofer"},
    mdr_spoofed{YType::int32, "mdr-spoofed"},
    mdr_spoofed_last{YType::int32, "mdr-spoofed-last"},
    mdr_spoofed_ready{YType::int32, "mdr-spoofed-ready"},
    mdr_pcb_check{YType::int32, "mdr-pcb-check"},
    mdr_kill_tier{YType::int32, "mdr-kill-tier"},
    mdr_kld{YType::int32, "mdr-kld"},
    mdr_level{YType::int32, "mdr-level"},
    fm_restart_cnt{YType::int32, "fm-restart-cnt"},
    self_managed{YType::int32, "self-managed"}
        ,
    tuple(this, {})
    , orig_tuple(this, {})
{

    yang_name = "verbose-info"; yang_parent_name = "process-name-verbose"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::~VerboseInfo()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tuple.len(); index++)
    {
        if(tuple[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<orig_tuple.len(); index++)
    {
        if(orig_tuple[index]->has_data())
            return true;
    }
    return process_group.is_set
	|| respawn_allowed.is_set
	|| wait_for_exit.is_set
	|| dynamic_tag.is_set
	|| forced_stop.is_set
	|| critical_process.is_set
	|| hold.is_set
	|| transient.is_set
	|| tuple_cfgmgr.is_set
	|| standby_capable.is_set
	|| edm_startup.is_set
	|| placement.is_set
	|| skip_kill_notif.is_set
	|| init_proc.is_set
	|| sysdb_event.is_set
	|| level_started.is_set
	|| proc_avail.is_set
	|| tuples_scanned.is_set
	|| no_chkpt_start.is_set
	|| in_shut_down.is_set
	|| sm_started.is_set
	|| ignore_on_sc.is_set
	|| ignore_on_easy_bake.is_set
	|| pre_init.is_set
	|| eoi_received.is_set
	|| eoi_timeout.is_set
	|| avail_timeout.is_set
	|| reserved_memory.is_set
	|| allow_warned.is_set
	|| arg_change.is_set
	|| restart_on_tuple.is_set
	|| boot_hold.is_set
	|| reg_id.is_set
	|| memory_limit.is_set
	|| parent_job_id.is_set
	|| tuple_index.is_set
	|| dump_count.is_set
	|| respawn_interval_user.is_set
	|| silent_restart_count.is_set
	|| critical_tier.is_set
	|| exit_type.is_set
	|| init_timeout.is_set
	|| restart_by_cmd.is_set
	|| boot_pref.is_set
	|| mdr_mbi_proc.is_set
	|| mdr_non_mbi_kld.is_set
	|| mdr_mbi_kld.is_set
	|| mdr_shut_delay.is_set
	|| mdr_keep_thru.is_set
	|| mdr_spoofer.is_set
	|| mdr_spoofed.is_set
	|| mdr_spoofed_last.is_set
	|| mdr_spoofed_ready.is_set
	|| mdr_pcb_check.is_set
	|| mdr_kill_tier.is_set
	|| mdr_kld.is_set
	|| mdr_level.is_set
	|| fm_restart_cnt.is_set
	|| self_managed.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::has_operation() const
{
    for (std::size_t index=0; index<tuple.len(); index++)
    {
        if(tuple[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<orig_tuple.len(); index++)
    {
        if(orig_tuple[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_group.yfilter)
	|| ydk::is_set(respawn_allowed.yfilter)
	|| ydk::is_set(wait_for_exit.yfilter)
	|| ydk::is_set(dynamic_tag.yfilter)
	|| ydk::is_set(forced_stop.yfilter)
	|| ydk::is_set(critical_process.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(transient.yfilter)
	|| ydk::is_set(tuple_cfgmgr.yfilter)
	|| ydk::is_set(standby_capable.yfilter)
	|| ydk::is_set(edm_startup.yfilter)
	|| ydk::is_set(placement.yfilter)
	|| ydk::is_set(skip_kill_notif.yfilter)
	|| ydk::is_set(init_proc.yfilter)
	|| ydk::is_set(sysdb_event.yfilter)
	|| ydk::is_set(level_started.yfilter)
	|| ydk::is_set(proc_avail.yfilter)
	|| ydk::is_set(tuples_scanned.yfilter)
	|| ydk::is_set(no_chkpt_start.yfilter)
	|| ydk::is_set(in_shut_down.yfilter)
	|| ydk::is_set(sm_started.yfilter)
	|| ydk::is_set(ignore_on_sc.yfilter)
	|| ydk::is_set(ignore_on_easy_bake.yfilter)
	|| ydk::is_set(pre_init.yfilter)
	|| ydk::is_set(eoi_received.yfilter)
	|| ydk::is_set(eoi_timeout.yfilter)
	|| ydk::is_set(avail_timeout.yfilter)
	|| ydk::is_set(reserved_memory.yfilter)
	|| ydk::is_set(allow_warned.yfilter)
	|| ydk::is_set(arg_change.yfilter)
	|| ydk::is_set(restart_on_tuple.yfilter)
	|| ydk::is_set(boot_hold.yfilter)
	|| ydk::is_set(reg_id.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(parent_job_id.yfilter)
	|| ydk::is_set(tuple_index.yfilter)
	|| ydk::is_set(dump_count.yfilter)
	|| ydk::is_set(respawn_interval_user.yfilter)
	|| ydk::is_set(silent_restart_count.yfilter)
	|| ydk::is_set(critical_tier.yfilter)
	|| ydk::is_set(exit_type.yfilter)
	|| ydk::is_set(init_timeout.yfilter)
	|| ydk::is_set(restart_by_cmd.yfilter)
	|| ydk::is_set(boot_pref.yfilter)
	|| ydk::is_set(mdr_mbi_proc.yfilter)
	|| ydk::is_set(mdr_non_mbi_kld.yfilter)
	|| ydk::is_set(mdr_mbi_kld.yfilter)
	|| ydk::is_set(mdr_shut_delay.yfilter)
	|| ydk::is_set(mdr_keep_thru.yfilter)
	|| ydk::is_set(mdr_spoofer.yfilter)
	|| ydk::is_set(mdr_spoofed.yfilter)
	|| ydk::is_set(mdr_spoofed_last.yfilter)
	|| ydk::is_set(mdr_spoofed_ready.yfilter)
	|| ydk::is_set(mdr_pcb_check.yfilter)
	|| ydk::is_set(mdr_kill_tier.yfilter)
	|| ydk::is_set(mdr_kld.yfilter)
	|| ydk::is_set(mdr_level.yfilter)
	|| ydk::is_set(fm_restart_cnt.yfilter)
	|| ydk::is_set(self_managed.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verbose-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_group.is_set || is_set(process_group.yfilter)) leaf_name_data.push_back(process_group.get_name_leafdata());
    if (respawn_allowed.is_set || is_set(respawn_allowed.yfilter)) leaf_name_data.push_back(respawn_allowed.get_name_leafdata());
    if (wait_for_exit.is_set || is_set(wait_for_exit.yfilter)) leaf_name_data.push_back(wait_for_exit.get_name_leafdata());
    if (dynamic_tag.is_set || is_set(dynamic_tag.yfilter)) leaf_name_data.push_back(dynamic_tag.get_name_leafdata());
    if (forced_stop.is_set || is_set(forced_stop.yfilter)) leaf_name_data.push_back(forced_stop.get_name_leafdata());
    if (critical_process.is_set || is_set(critical_process.yfilter)) leaf_name_data.push_back(critical_process.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());
    if (tuple_cfgmgr.is_set || is_set(tuple_cfgmgr.yfilter)) leaf_name_data.push_back(tuple_cfgmgr.get_name_leafdata());
    if (standby_capable.is_set || is_set(standby_capable.yfilter)) leaf_name_data.push_back(standby_capable.get_name_leafdata());
    if (edm_startup.is_set || is_set(edm_startup.yfilter)) leaf_name_data.push_back(edm_startup.get_name_leafdata());
    if (placement.is_set || is_set(placement.yfilter)) leaf_name_data.push_back(placement.get_name_leafdata());
    if (skip_kill_notif.is_set || is_set(skip_kill_notif.yfilter)) leaf_name_data.push_back(skip_kill_notif.get_name_leafdata());
    if (init_proc.is_set || is_set(init_proc.yfilter)) leaf_name_data.push_back(init_proc.get_name_leafdata());
    if (sysdb_event.is_set || is_set(sysdb_event.yfilter)) leaf_name_data.push_back(sysdb_event.get_name_leafdata());
    if (level_started.is_set || is_set(level_started.yfilter)) leaf_name_data.push_back(level_started.get_name_leafdata());
    if (proc_avail.is_set || is_set(proc_avail.yfilter)) leaf_name_data.push_back(proc_avail.get_name_leafdata());
    if (tuples_scanned.is_set || is_set(tuples_scanned.yfilter)) leaf_name_data.push_back(tuples_scanned.get_name_leafdata());
    if (no_chkpt_start.is_set || is_set(no_chkpt_start.yfilter)) leaf_name_data.push_back(no_chkpt_start.get_name_leafdata());
    if (in_shut_down.is_set || is_set(in_shut_down.yfilter)) leaf_name_data.push_back(in_shut_down.get_name_leafdata());
    if (sm_started.is_set || is_set(sm_started.yfilter)) leaf_name_data.push_back(sm_started.get_name_leafdata());
    if (ignore_on_sc.is_set || is_set(ignore_on_sc.yfilter)) leaf_name_data.push_back(ignore_on_sc.get_name_leafdata());
    if (ignore_on_easy_bake.is_set || is_set(ignore_on_easy_bake.yfilter)) leaf_name_data.push_back(ignore_on_easy_bake.get_name_leafdata());
    if (pre_init.is_set || is_set(pre_init.yfilter)) leaf_name_data.push_back(pre_init.get_name_leafdata());
    if (eoi_received.is_set || is_set(eoi_received.yfilter)) leaf_name_data.push_back(eoi_received.get_name_leafdata());
    if (eoi_timeout.is_set || is_set(eoi_timeout.yfilter)) leaf_name_data.push_back(eoi_timeout.get_name_leafdata());
    if (avail_timeout.is_set || is_set(avail_timeout.yfilter)) leaf_name_data.push_back(avail_timeout.get_name_leafdata());
    if (reserved_memory.is_set || is_set(reserved_memory.yfilter)) leaf_name_data.push_back(reserved_memory.get_name_leafdata());
    if (allow_warned.is_set || is_set(allow_warned.yfilter)) leaf_name_data.push_back(allow_warned.get_name_leafdata());
    if (arg_change.is_set || is_set(arg_change.yfilter)) leaf_name_data.push_back(arg_change.get_name_leafdata());
    if (restart_on_tuple.is_set || is_set(restart_on_tuple.yfilter)) leaf_name_data.push_back(restart_on_tuple.get_name_leafdata());
    if (boot_hold.is_set || is_set(boot_hold.yfilter)) leaf_name_data.push_back(boot_hold.get_name_leafdata());
    if (reg_id.is_set || is_set(reg_id.yfilter)) leaf_name_data.push_back(reg_id.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (parent_job_id.is_set || is_set(parent_job_id.yfilter)) leaf_name_data.push_back(parent_job_id.get_name_leafdata());
    if (tuple_index.is_set || is_set(tuple_index.yfilter)) leaf_name_data.push_back(tuple_index.get_name_leafdata());
    if (dump_count.is_set || is_set(dump_count.yfilter)) leaf_name_data.push_back(dump_count.get_name_leafdata());
    if (respawn_interval_user.is_set || is_set(respawn_interval_user.yfilter)) leaf_name_data.push_back(respawn_interval_user.get_name_leafdata());
    if (silent_restart_count.is_set || is_set(silent_restart_count.yfilter)) leaf_name_data.push_back(silent_restart_count.get_name_leafdata());
    if (critical_tier.is_set || is_set(critical_tier.yfilter)) leaf_name_data.push_back(critical_tier.get_name_leafdata());
    if (exit_type.is_set || is_set(exit_type.yfilter)) leaf_name_data.push_back(exit_type.get_name_leafdata());
    if (init_timeout.is_set || is_set(init_timeout.yfilter)) leaf_name_data.push_back(init_timeout.get_name_leafdata());
    if (restart_by_cmd.is_set || is_set(restart_by_cmd.yfilter)) leaf_name_data.push_back(restart_by_cmd.get_name_leafdata());
    if (boot_pref.is_set || is_set(boot_pref.yfilter)) leaf_name_data.push_back(boot_pref.get_name_leafdata());
    if (mdr_mbi_proc.is_set || is_set(mdr_mbi_proc.yfilter)) leaf_name_data.push_back(mdr_mbi_proc.get_name_leafdata());
    if (mdr_non_mbi_kld.is_set || is_set(mdr_non_mbi_kld.yfilter)) leaf_name_data.push_back(mdr_non_mbi_kld.get_name_leafdata());
    if (mdr_mbi_kld.is_set || is_set(mdr_mbi_kld.yfilter)) leaf_name_data.push_back(mdr_mbi_kld.get_name_leafdata());
    if (mdr_shut_delay.is_set || is_set(mdr_shut_delay.yfilter)) leaf_name_data.push_back(mdr_shut_delay.get_name_leafdata());
    if (mdr_keep_thru.is_set || is_set(mdr_keep_thru.yfilter)) leaf_name_data.push_back(mdr_keep_thru.get_name_leafdata());
    if (mdr_spoofer.is_set || is_set(mdr_spoofer.yfilter)) leaf_name_data.push_back(mdr_spoofer.get_name_leafdata());
    if (mdr_spoofed.is_set || is_set(mdr_spoofed.yfilter)) leaf_name_data.push_back(mdr_spoofed.get_name_leafdata());
    if (mdr_spoofed_last.is_set || is_set(mdr_spoofed_last.yfilter)) leaf_name_data.push_back(mdr_spoofed_last.get_name_leafdata());
    if (mdr_spoofed_ready.is_set || is_set(mdr_spoofed_ready.yfilter)) leaf_name_data.push_back(mdr_spoofed_ready.get_name_leafdata());
    if (mdr_pcb_check.is_set || is_set(mdr_pcb_check.yfilter)) leaf_name_data.push_back(mdr_pcb_check.get_name_leafdata());
    if (mdr_kill_tier.is_set || is_set(mdr_kill_tier.yfilter)) leaf_name_data.push_back(mdr_kill_tier.get_name_leafdata());
    if (mdr_kld.is_set || is_set(mdr_kld.yfilter)) leaf_name_data.push_back(mdr_kld.get_name_leafdata());
    if (mdr_level.is_set || is_set(mdr_level.yfilter)) leaf_name_data.push_back(mdr_level.get_name_leafdata());
    if (fm_restart_cnt.is_set || is_set(fm_restart_cnt.yfilter)) leaf_name_data.push_back(fm_restart_cnt.get_name_leafdata());
    if (self_managed.is_set || is_set(self_managed.yfilter)) leaf_name_data.push_back(self_managed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tuple")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple>();
        ent_->parent = this;
        tuple.append(ent_);
        return ent_;
    }

    if(child_yang_name == "orig-tuple")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple>();
        ent_->parent = this;
        orig_tuple.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tuple.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : orig_tuple.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-group")
    {
        process_group = value;
        process_group.value_namespace = name_space;
        process_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-allowed")
    {
        respawn_allowed = value;
        respawn_allowed.value_namespace = name_space;
        respawn_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-exit")
    {
        wait_for_exit = value;
        wait_for_exit.value_namespace = name_space;
        wait_for_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-tag")
    {
        dynamic_tag = value;
        dynamic_tag.value_namespace = name_space;
        dynamic_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced-stop")
    {
        forced_stop = value;
        forced_stop.value_namespace = name_space;
        forced_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-process")
    {
        critical_process = value;
        critical_process.value_namespace = name_space;
        critical_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tuple-cfgmgr")
    {
        tuple_cfgmgr = value;
        tuple_cfgmgr.value_namespace = name_space;
        tuple_cfgmgr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-capable")
    {
        standby_capable = value;
        standby_capable.value_namespace = name_space;
        standby_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edm-startup")
    {
        edm_startup = value;
        edm_startup.value_namespace = name_space;
        edm_startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement")
    {
        placement = value;
        placement.value_namespace = name_space;
        placement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skip-kill-notif")
    {
        skip_kill_notif = value;
        skip_kill_notif.value_namespace = name_space;
        skip_kill_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-proc")
    {
        init_proc = value;
        init_proc.value_namespace = name_space;
        init_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysdb-event")
    {
        sysdb_event = value;
        sysdb_event.value_namespace = name_space;
        sysdb_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-started")
    {
        level_started = value;
        level_started.value_namespace = name_space;
        level_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-avail")
    {
        proc_avail = value;
        proc_avail.value_namespace = name_space;
        proc_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tuples-scanned")
    {
        tuples_scanned = value;
        tuples_scanned.value_namespace = name_space;
        tuples_scanned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-chkpt-start")
    {
        no_chkpt_start = value;
        no_chkpt_start.value_namespace = name_space;
        no_chkpt_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-shut-down")
    {
        in_shut_down = value;
        in_shut_down.value_namespace = name_space;
        in_shut_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sm-started")
    {
        sm_started = value;
        sm_started.value_namespace = name_space;
        sm_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-on-sc")
    {
        ignore_on_sc = value;
        ignore_on_sc.value_namespace = name_space;
        ignore_on_sc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-on-easy-bake")
    {
        ignore_on_easy_bake = value;
        ignore_on_easy_bake.value_namespace = name_space;
        ignore_on_easy_bake.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-init")
    {
        pre_init = value;
        pre_init.value_namespace = name_space;
        pre_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoi-received")
    {
        eoi_received = value;
        eoi_received.value_namespace = name_space;
        eoi_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoi-timeout")
    {
        eoi_timeout = value;
        eoi_timeout.value_namespace = name_space;
        eoi_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avail-timeout")
    {
        avail_timeout = value;
        avail_timeout.value_namespace = name_space;
        avail_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory = value;
        reserved_memory.value_namespace = name_space;
        reserved_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-warned")
    {
        allow_warned = value;
        allow_warned.value_namespace = name_space;
        allow_warned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arg-change")
    {
        arg_change = value;
        arg_change.value_namespace = name_space;
        arg_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-on-tuple")
    {
        restart_on_tuple = value;
        restart_on_tuple.value_namespace = name_space;
        restart_on_tuple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-hold")
    {
        boot_hold = value;
        boot_hold.value_namespace = name_space;
        boot_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-id")
    {
        reg_id = value;
        reg_id.value_namespace = name_space;
        reg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-job-id")
    {
        parent_job_id = value;
        parent_job_id.value_namespace = name_space;
        parent_job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tuple-index")
    {
        tuple_index = value;
        tuple_index.value_namespace = name_space;
        tuple_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dump-count")
    {
        dump_count = value;
        dump_count.value_namespace = name_space;
        dump_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-interval-user")
    {
        respawn_interval_user = value;
        respawn_interval_user.value_namespace = name_space;
        respawn_interval_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "silent-restart-count")
    {
        silent_restart_count = value;
        silent_restart_count.value_namespace = name_space;
        silent_restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-tier")
    {
        critical_tier = value;
        critical_tier.value_namespace = name_space;
        critical_tier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exit-type")
    {
        exit_type = value;
        exit_type.value_namespace = name_space;
        exit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-timeout")
    {
        init_timeout = value;
        init_timeout.value_namespace = name_space;
        init_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-by-cmd")
    {
        restart_by_cmd = value;
        restart_by_cmd.value_namespace = name_space;
        restart_by_cmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-pref")
    {
        boot_pref = value;
        boot_pref.value_namespace = name_space;
        boot_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-mbi-proc")
    {
        mdr_mbi_proc = value;
        mdr_mbi_proc.value_namespace = name_space;
        mdr_mbi_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-non-mbi-kld")
    {
        mdr_non_mbi_kld = value;
        mdr_non_mbi_kld.value_namespace = name_space;
        mdr_non_mbi_kld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-mbi-kld")
    {
        mdr_mbi_kld = value;
        mdr_mbi_kld.value_namespace = name_space;
        mdr_mbi_kld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-shut-delay")
    {
        mdr_shut_delay = value;
        mdr_shut_delay.value_namespace = name_space;
        mdr_shut_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-keep-thru")
    {
        mdr_keep_thru = value;
        mdr_keep_thru.value_namespace = name_space;
        mdr_keep_thru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofer")
    {
        mdr_spoofer = value;
        mdr_spoofer.value_namespace = name_space;
        mdr_spoofer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofed")
    {
        mdr_spoofed = value;
        mdr_spoofed.value_namespace = name_space;
        mdr_spoofed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofed-last")
    {
        mdr_spoofed_last = value;
        mdr_spoofed_last.value_namespace = name_space;
        mdr_spoofed_last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-spoofed-ready")
    {
        mdr_spoofed_ready = value;
        mdr_spoofed_ready.value_namespace = name_space;
        mdr_spoofed_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-pcb-check")
    {
        mdr_pcb_check = value;
        mdr_pcb_check.value_namespace = name_space;
        mdr_pcb_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-kill-tier")
    {
        mdr_kill_tier = value;
        mdr_kill_tier.value_namespace = name_space;
        mdr_kill_tier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-kld")
    {
        mdr_kld = value;
        mdr_kld.value_namespace = name_space;
        mdr_kld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdr-level")
    {
        mdr_level = value;
        mdr_level.value_namespace = name_space;
        mdr_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm-restart-cnt")
    {
        fm_restart_cnt = value;
        fm_restart_cnt.value_namespace = name_space;
        fm_restart_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-managed")
    {
        self_managed = value;
        self_managed.value_namespace = name_space;
        self_managed.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-group")
    {
        process_group.yfilter = yfilter;
    }
    if(value_path == "respawn-allowed")
    {
        respawn_allowed.yfilter = yfilter;
    }
    if(value_path == "wait-for-exit")
    {
        wait_for_exit.yfilter = yfilter;
    }
    if(value_path == "dynamic-tag")
    {
        dynamic_tag.yfilter = yfilter;
    }
    if(value_path == "forced-stop")
    {
        forced_stop.yfilter = yfilter;
    }
    if(value_path == "critical-process")
    {
        critical_process.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
    if(value_path == "tuple-cfgmgr")
    {
        tuple_cfgmgr.yfilter = yfilter;
    }
    if(value_path == "standby-capable")
    {
        standby_capable.yfilter = yfilter;
    }
    if(value_path == "edm-startup")
    {
        edm_startup.yfilter = yfilter;
    }
    if(value_path == "placement")
    {
        placement.yfilter = yfilter;
    }
    if(value_path == "skip-kill-notif")
    {
        skip_kill_notif.yfilter = yfilter;
    }
    if(value_path == "init-proc")
    {
        init_proc.yfilter = yfilter;
    }
    if(value_path == "sysdb-event")
    {
        sysdb_event.yfilter = yfilter;
    }
    if(value_path == "level-started")
    {
        level_started.yfilter = yfilter;
    }
    if(value_path == "proc-avail")
    {
        proc_avail.yfilter = yfilter;
    }
    if(value_path == "tuples-scanned")
    {
        tuples_scanned.yfilter = yfilter;
    }
    if(value_path == "no-chkpt-start")
    {
        no_chkpt_start.yfilter = yfilter;
    }
    if(value_path == "in-shut-down")
    {
        in_shut_down.yfilter = yfilter;
    }
    if(value_path == "sm-started")
    {
        sm_started.yfilter = yfilter;
    }
    if(value_path == "ignore-on-sc")
    {
        ignore_on_sc.yfilter = yfilter;
    }
    if(value_path == "ignore-on-easy-bake")
    {
        ignore_on_easy_bake.yfilter = yfilter;
    }
    if(value_path == "pre-init")
    {
        pre_init.yfilter = yfilter;
    }
    if(value_path == "eoi-received")
    {
        eoi_received.yfilter = yfilter;
    }
    if(value_path == "eoi-timeout")
    {
        eoi_timeout.yfilter = yfilter;
    }
    if(value_path == "avail-timeout")
    {
        avail_timeout.yfilter = yfilter;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory.yfilter = yfilter;
    }
    if(value_path == "allow-warned")
    {
        allow_warned.yfilter = yfilter;
    }
    if(value_path == "arg-change")
    {
        arg_change.yfilter = yfilter;
    }
    if(value_path == "restart-on-tuple")
    {
        restart_on_tuple.yfilter = yfilter;
    }
    if(value_path == "boot-hold")
    {
        boot_hold.yfilter = yfilter;
    }
    if(value_path == "reg-id")
    {
        reg_id.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "parent-job-id")
    {
        parent_job_id.yfilter = yfilter;
    }
    if(value_path == "tuple-index")
    {
        tuple_index.yfilter = yfilter;
    }
    if(value_path == "dump-count")
    {
        dump_count.yfilter = yfilter;
    }
    if(value_path == "respawn-interval-user")
    {
        respawn_interval_user.yfilter = yfilter;
    }
    if(value_path == "silent-restart-count")
    {
        silent_restart_count.yfilter = yfilter;
    }
    if(value_path == "critical-tier")
    {
        critical_tier.yfilter = yfilter;
    }
    if(value_path == "exit-type")
    {
        exit_type.yfilter = yfilter;
    }
    if(value_path == "init-timeout")
    {
        init_timeout.yfilter = yfilter;
    }
    if(value_path == "restart-by-cmd")
    {
        restart_by_cmd.yfilter = yfilter;
    }
    if(value_path == "boot-pref")
    {
        boot_pref.yfilter = yfilter;
    }
    if(value_path == "mdr-mbi-proc")
    {
        mdr_mbi_proc.yfilter = yfilter;
    }
    if(value_path == "mdr-non-mbi-kld")
    {
        mdr_non_mbi_kld.yfilter = yfilter;
    }
    if(value_path == "mdr-mbi-kld")
    {
        mdr_mbi_kld.yfilter = yfilter;
    }
    if(value_path == "mdr-shut-delay")
    {
        mdr_shut_delay.yfilter = yfilter;
    }
    if(value_path == "mdr-keep-thru")
    {
        mdr_keep_thru.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofer")
    {
        mdr_spoofer.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofed")
    {
        mdr_spoofed.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofed-last")
    {
        mdr_spoofed_last.yfilter = yfilter;
    }
    if(value_path == "mdr-spoofed-ready")
    {
        mdr_spoofed_ready.yfilter = yfilter;
    }
    if(value_path == "mdr-pcb-check")
    {
        mdr_pcb_check.yfilter = yfilter;
    }
    if(value_path == "mdr-kill-tier")
    {
        mdr_kill_tier.yfilter = yfilter;
    }
    if(value_path == "mdr-kld")
    {
        mdr_kld.yfilter = yfilter;
    }
    if(value_path == "mdr-level")
    {
        mdr_level.yfilter = yfilter;
    }
    if(value_path == "fm-restart-cnt")
    {
        fm_restart_cnt.yfilter = yfilter;
    }
    if(value_path == "self-managed")
    {
        self_managed.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple" || name == "orig-tuple" || name == "process-group" || name == "respawn-allowed" || name == "wait-for-exit" || name == "dynamic-tag" || name == "forced-stop" || name == "critical-process" || name == "hold" || name == "transient" || name == "tuple-cfgmgr" || name == "standby-capable" || name == "edm-startup" || name == "placement" || name == "skip-kill-notif" || name == "init-proc" || name == "sysdb-event" || name == "level-started" || name == "proc-avail" || name == "tuples-scanned" || name == "no-chkpt-start" || name == "in-shut-down" || name == "sm-started" || name == "ignore-on-sc" || name == "ignore-on-easy-bake" || name == "pre-init" || name == "eoi-received" || name == "eoi-timeout" || name == "avail-timeout" || name == "reserved-memory" || name == "allow-warned" || name == "arg-change" || name == "restart-on-tuple" || name == "boot-hold" || name == "reg-id" || name == "memory-limit" || name == "parent-job-id" || name == "tuple-index" || name == "dump-count" || name == "respawn-interval-user" || name == "silent-restart-count" || name == "critical-tier" || name == "exit-type" || name == "init-timeout" || name == "restart-by-cmd" || name == "boot-pref" || name == "mdr-mbi-proc" || name == "mdr-non-mbi-kld" || name == "mdr-mbi-kld" || name == "mdr-shut-delay" || name == "mdr-keep-thru" || name == "mdr-spoofer" || name == "mdr-spoofed" || name == "mdr-spoofed-last" || name == "mdr-spoofed-ready" || name == "mdr-pcb-check" || name == "mdr-kill-tier" || name == "mdr-kld" || name == "mdr-level" || name == "fm-restart-cnt" || name == "self-managed")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::Tuple()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "tuple"; yang_parent_name = "verbose-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::~Tuple()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tuple";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::OrigTuple()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "orig-tuple"; yang_parent_name = "verbose-info"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::~OrigTuple()
{
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-tuple";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Jids::Jids()
    :
    jid(this, {"job_id"})
{

    yang_name = "jids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Jids::~Jids()
{
}

bool SystemProcess::NodeTable::Node::Jids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jid.len(); index++)
    {
        if(jid[index]->has_data())
            return true;
    }
    return false;
}

bool SystemProcess::NodeTable::Node::Jids::has_operation() const
{
    for (std::size_t index=0; index<jid.len(); index++)
    {
        if(jid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemProcess::NodeTable::Node::Jids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Jids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Jids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jid")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Jids::Jid>();
        ent_->parent = this;
        jid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Jids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : jid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Jids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemProcess::NodeTable::Node::Jids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SystemProcess::NodeTable::Node::Jids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jid")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Jids::Jid::Jid()
    :
    job_id{YType::uint32, "job-id"},
    job_id_xr{YType::uint32, "job-id-xr"},
    process_id{YType::uint32, "process-id"},
    process_name{YType::str, "process-name"},
    executable{YType::str, "executable"},
    active_path{YType::str, "active-path"},
    instance_id{YType::int32, "instance-id"},
    args{YType::str, "args"},
    version_id{YType::str, "version-id"},
    respawn{YType::str, "respawn"},
    respawn_count{YType::int32, "respawn-count"},
    last_started{YType::str, "last-started"},
    process_state{YType::str, "process-state"},
    last_exit_status{YType::int32, "last-exit-status"},
    last_exit_reason{YType::str, "last-exit-reason"},
    package_state{YType::str, "package-state"},
    started_on_config{YType::str, "started-on-config"},
    feature_name{YType::str, "feature-name"},
    tag{YType::str, "tag"},
    group{YType::str, "group"},
    core{YType::str, "core"},
    max_core{YType::int32, "max-core"},
    level{YType::str, "level"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode_proc{YType::boolean, "maint-mode-proc"},
    placement_state{YType::str, "placement-state"},
    start_up_path{YType::str, "start-up-path"},
    memory_limit{YType::uint32, "memory-limit"},
    ready{YType::str, "ready"},
    available{YType::str, "available"}
        ,
    proc_cpu_time(std::make_shared<SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime>())
    , registered_item(this, {})
{
    proc_cpu_time->parent = this;

    yang_name = "jid"; yang_parent_name = "jids"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Jids::Jid::~Jid()
{
}

bool SystemProcess::NodeTable::Node::Jids::Jid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_data())
            return true;
    }
    return job_id.is_set
	|| job_id_xr.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| executable.is_set
	|| active_path.is_set
	|| instance_id.is_set
	|| args.is_set
	|| version_id.is_set
	|| respawn.is_set
	|| respawn_count.is_set
	|| last_started.is_set
	|| process_state.is_set
	|| last_exit_status.is_set
	|| last_exit_reason.is_set
	|| package_state.is_set
	|| started_on_config.is_set
	|| feature_name.is_set
	|| tag.is_set
	|| group.is_set
	|| core.is_set
	|| max_core.is_set
	|| level.is_set
	|| mandatory.is_set
	|| maint_mode_proc.is_set
	|| placement_state.is_set
	|| start_up_path.is_set
	|| memory_limit.is_set
	|| ready.is_set
	|| available.is_set
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_data());
}

bool SystemProcess::NodeTable::Node::Jids::Jid::has_operation() const
{
    for (std::size_t index=0; index<registered_item.len(); index++)
    {
        if(registered_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(job_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(active_path.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(version_id.yfilter)
	|| ydk::is_set(respawn.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(last_exit_status.yfilter)
	|| ydk::is_set(last_exit_reason.yfilter)
	|| ydk::is_set(package_state.yfilter)
	|| ydk::is_set(started_on_config.yfilter)
	|| ydk::is_set(feature_name.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(max_core.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode_proc.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(start_up_path.yfilter)
	|| ydk::is_set(memory_limit.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(available.yfilter)
	|| (proc_cpu_time !=  nullptr && proc_cpu_time->has_operation());
}

std::string SystemProcess::NodeTable::Node::Jids::Jid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jid";
    ADD_KEY_TOKEN(job_id, "job-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Jids::Jid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (job_id_xr.is_set || is_set(job_id_xr.yfilter)) leaf_name_data.push_back(job_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (active_path.is_set || is_set(active_path.yfilter)) leaf_name_data.push_back(active_path.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (version_id.is_set || is_set(version_id.yfilter)) leaf_name_data.push_back(version_id.get_name_leafdata());
    if (respawn.is_set || is_set(respawn.yfilter)) leaf_name_data.push_back(respawn.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (last_exit_status.is_set || is_set(last_exit_status.yfilter)) leaf_name_data.push_back(last_exit_status.get_name_leafdata());
    if (last_exit_reason.is_set || is_set(last_exit_reason.yfilter)) leaf_name_data.push_back(last_exit_reason.get_name_leafdata());
    if (package_state.is_set || is_set(package_state.yfilter)) leaf_name_data.push_back(package_state.get_name_leafdata());
    if (started_on_config.is_set || is_set(started_on_config.yfilter)) leaf_name_data.push_back(started_on_config.get_name_leafdata());
    if (feature_name.is_set || is_set(feature_name.yfilter)) leaf_name_data.push_back(feature_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (max_core.is_set || is_set(max_core.yfilter)) leaf_name_data.push_back(max_core.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode_proc.is_set || is_set(maint_mode_proc.yfilter)) leaf_name_data.push_back(maint_mode_proc.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (start_up_path.is_set || is_set(start_up_path.yfilter)) leaf_name_data.push_back(start_up_path.get_name_leafdata());
    if (memory_limit.is_set || is_set(memory_limit.yfilter)) leaf_name_data.push_back(memory_limit.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Jids::Jid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc-cpu-time")
    {
        if(proc_cpu_time == nullptr)
        {
            proc_cpu_time = std::make_shared<SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime>();
        }
        return proc_cpu_time;
    }

    if(child_yang_name == "registered-item")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem>();
        ent_->parent = this;
        registered_item.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Jids::Jid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(proc_cpu_time != nullptr)
    {
        _children["proc-cpu-time"] = proc_cpu_time;
    }

    count_ = 0;
    for (auto ent_ : registered_item.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Jids::Jid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id-xr")
    {
        job_id_xr = value;
        job_id_xr.value_namespace = name_space;
        job_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path")
    {
        active_path = value;
        active_path.value_namespace = name_space;
        active_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-id")
    {
        version_id = value;
        version_id.value_namespace = name_space;
        version_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn")
    {
        respawn = value;
        respawn.value_namespace = name_space;
        respawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status = value;
        last_exit_status.value_namespace = name_space;
        last_exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason = value;
        last_exit_reason.value_namespace = name_space;
        last_exit_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-state")
    {
        package_state = value;
        package_state.value_namespace = name_space;
        package_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-on-config")
    {
        started_on_config = value;
        started_on_config.value_namespace = name_space;
        started_on_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature-name")
    {
        feature_name = value;
        feature_name.value_namespace = name_space;
        feature_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-core")
    {
        max_core = value;
        max_core.value_namespace = name_space;
        max_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc = value;
        maint_mode_proc.value_namespace = name_space;
        maint_mode_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-up-path")
    {
        start_up_path = value;
        start_up_path.value_namespace = name_space;
        start_up_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-limit")
    {
        memory_limit = value;
        memory_limit.value_namespace = name_space;
        memory_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Jids::Jid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "job-id-xr")
    {
        job_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "active-path")
    {
        active_path.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "version-id")
    {
        version_id.yfilter = yfilter;
    }
    if(value_path == "respawn")
    {
        respawn.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "last-exit-status")
    {
        last_exit_status.yfilter = yfilter;
    }
    if(value_path == "last-exit-reason")
    {
        last_exit_reason.yfilter = yfilter;
    }
    if(value_path == "package-state")
    {
        package_state.yfilter = yfilter;
    }
    if(value_path == "started-on-config")
    {
        started_on_config.yfilter = yfilter;
    }
    if(value_path == "feature-name")
    {
        feature_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "max-core")
    {
        max_core.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode-proc")
    {
        maint_mode_proc.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "start-up-path")
    {
        start_up_path.yfilter = yfilter;
    }
    if(value_path == "memory-limit")
    {
        memory_limit.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Jids::Jid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc-cpu-time" || name == "registered-item" || name == "job-id" || name == "job-id-xr" || name == "process-id" || name == "process-name" || name == "executable" || name == "active-path" || name == "instance-id" || name == "args" || name == "version-id" || name == "respawn" || name == "respawn-count" || name == "last-started" || name == "process-state" || name == "last-exit-status" || name == "last-exit-reason" || name == "package-state" || name == "started-on-config" || name == "feature-name" || name == "tag" || name == "group" || name == "core" || name == "max-core" || name == "level" || name == "mandatory" || name == "maint-mode-proc" || name == "placement-state" || name == "start-up-path" || name == "memory-limit" || name == "ready" || name == "available")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::ProcCpuTime()
    :
    user{YType::str, "user"},
    system{YType::str, "system"},
    total{YType::str, "total"}
{

    yang_name = "proc-cpu-time"; yang_parent_name = "jid"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::~ProcCpuTime()
{
}

bool SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::has_data() const
{
    if (is_presence_container) return true;
    return user.is_set
	|| system.is_set
	|| total.is_set;
}

bool SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(system.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-cpu-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (system.is_set || is_set(system.yfilter)) leaf_name_data.push_back(system.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system")
    {
        system = value;
        system.value_namespace = name_space;
        system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "system")
    {
        system.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user" || name == "system" || name == "total")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::RegisteredItem()
    :
    tuple{YType::str, "tuple"}
{

    yang_name = "registered-item"; yang_parent_name = "jid"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::~RegisteredItem()
{
}

bool SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::has_data() const
{
    if (is_presence_container) return true;
    return tuple.is_set;
}

bool SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tuple.yfilter);
}

std::string SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-item";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.yfilter)) leaf_name_data.push_back(tuple.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tuple")
    {
        tuple = value;
        tuple.value_namespace = name_space;
        tuple.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tuple")
    {
        tuple.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tuple")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Dynamic::Dynamic()
    :
    process_count{YType::uint32, "process-count"}
        ,
    process(this, {})
{

    yang_name = "dynamic"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Dynamic::~Dynamic()
{
}

bool SystemProcess::NodeTable::Node::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return process_count.is_set;
}

bool SystemProcess::NodeTable::Node::Dynamic::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_count.yfilter);
}

std::string SystemProcess::NodeTable::Node::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Dynamic::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Dynamic::get_children() const
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

void SystemProcess::NodeTable::Node::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "process-count")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Dynamic::Process::Process()
    :
    name{YType::str, "name"},
    instance_id{YType::uint32, "instance-id"},
    args{YType::str, "args"},
    jid{YType::uint32, "jid"},
    state{YType::enumeration, "state"},
    last_started{YType::str, "last-started"},
    respawn_count{YType::uint8, "respawn-count"},
    placement_state{YType::enumeration, "placement-state"},
    is_mandatory{YType::boolean, "is-mandatory"},
    is_maintenance{YType::boolean, "is-maintenance"}
{

    yang_name = "process"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Dynamic::Process::~Process()
{
}

bool SystemProcess::NodeTable::Node::Dynamic::Process::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| instance_id.is_set
	|| args.is_set
	|| jid.is_set
	|| state.is_set
	|| last_started.is_set
	|| respawn_count.is_set
	|| placement_state.is_set
	|| is_mandatory.is_set
	|| is_maintenance.is_set;
}

bool SystemProcess::NodeTable::Node::Dynamic::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(is_mandatory.yfilter)
	|| ydk::is_set(is_maintenance.yfilter);
}

std::string SystemProcess::NodeTable::Node::Dynamic::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Dynamic::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (is_mandatory.is_set || is_set(is_mandatory.yfilter)) leaf_name_data.push_back(is_mandatory.get_name_leafdata());
    if (is_maintenance.is_set || is_set(is_maintenance.yfilter)) leaf_name_data.push_back(is_maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Dynamic::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Dynamic::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Dynamic::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory = value;
        is_mandatory.value_namespace = name_space;
        is_mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance = value;
        is_maintenance.value_namespace = name_space;
        is_maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Dynamic::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory.yfilter = yfilter;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Dynamic::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "instance-id" || name == "args" || name == "jid" || name == "state" || name == "last-started" || name == "respawn-count" || name == "placement-state" || name == "is-mandatory" || name == "is-maintenance")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::BootStalled::BootStalled()
    :
    spawn_status{YType::str, "spawn-status"}
        ,
    boot_hold(this, {})
{

    yang_name = "boot-stalled"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::BootStalled::~BootStalled()
{
}

bool SystemProcess::NodeTable::Node::BootStalled::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<boot_hold.len(); index++)
    {
        if(boot_hold[index]->has_data())
            return true;
    }
    return spawn_status.is_set;
}

bool SystemProcess::NodeTable::Node::BootStalled::has_operation() const
{
    for (std::size_t index=0; index<boot_hold.len(); index++)
    {
        if(boot_hold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spawn_status.yfilter);
}

std::string SystemProcess::NodeTable::Node::BootStalled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-stalled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::BootStalled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spawn_status.is_set || is_set(spawn_status.yfilter)) leaf_name_data.push_back(spawn_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::BootStalled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-hold")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::BootStalled::BootHold>();
        ent_->parent = this;
        boot_hold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::BootStalled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : boot_hold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::BootStalled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spawn-status")
    {
        spawn_status = value;
        spawn_status.value_namespace = name_space;
        spawn_status.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::BootStalled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spawn-status")
    {
        spawn_status.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::BootStalled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-hold" || name == "spawn-status")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::BootStalled::BootHold::BootHold()
    :
    boot_held_by_name{YType::str, "boot-held-by-name"},
    instance_id{YType::uint32, "instance-id"},
    jid{YType::uint32, "jid"}
{

    yang_name = "boot-hold"; yang_parent_name = "boot-stalled"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::BootStalled::BootHold::~BootHold()
{
}

bool SystemProcess::NodeTable::Node::BootStalled::BootHold::has_data() const
{
    if (is_presence_container) return true;
    return boot_held_by_name.is_set
	|| instance_id.is_set
	|| jid.is_set;
}

bool SystemProcess::NodeTable::Node::BootStalled::BootHold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_held_by_name.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(jid.yfilter);
}

std::string SystemProcess::NodeTable::Node::BootStalled::BootHold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-hold";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::BootStalled::BootHold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_held_by_name.is_set || is_set(boot_held_by_name.yfilter)) leaf_name_data.push_back(boot_held_by_name.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::BootStalled::BootHold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::BootStalled::BootHold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::BootStalled::BootHold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-held-by-name")
    {
        boot_held_by_name = value;
        boot_held_by_name.value_namespace = name_space;
        boot_held_by_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::BootStalled::BootHold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-held-by-name")
    {
        boot_held_by_name.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::BootStalled::BootHold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-held-by-name" || name == "instance-id" || name == "jid")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Processes::Processes()
    :
    process_count{YType::uint32, "process-count"}
        ,
    process(this, {})
{

    yang_name = "processes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Processes::~Processes()
{
}

bool SystemProcess::NodeTable::Node::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return process_count.is_set;
}

bool SystemProcess::NodeTable::Node::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_count.yfilter);
}

std::string SystemProcess::NodeTable::Node::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Processes::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Processes::get_children() const
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

void SystemProcess::NodeTable::Node::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "process-count")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Processes::Process::Process()
    :
    name{YType::str, "name"},
    instance_id{YType::uint32, "instance-id"},
    args{YType::str, "args"},
    jid{YType::uint32, "jid"},
    state{YType::enumeration, "state"},
    last_started{YType::str, "last-started"},
    respawn_count{YType::uint8, "respawn-count"},
    placement_state{YType::enumeration, "placement-state"},
    is_mandatory{YType::boolean, "is-mandatory"},
    is_maintenance{YType::boolean, "is-maintenance"}
{

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Processes::Process::~Process()
{
}

bool SystemProcess::NodeTable::Node::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| instance_id.is_set
	|| args.is_set
	|| jid.is_set
	|| state.is_set
	|| last_started.is_set
	|| respawn_count.is_set
	|| placement_state.is_set
	|| is_mandatory.is_set
	|| is_maintenance.is_set;
}

bool SystemProcess::NodeTable::Node::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(is_mandatory.yfilter)
	|| ydk::is_set(is_maintenance.yfilter);
}

std::string SystemProcess::NodeTable::Node::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (is_mandatory.is_set || is_set(is_mandatory.yfilter)) leaf_name_data.push_back(is_mandatory.get_name_leafdata());
    if (is_maintenance.is_set || is_set(is_maintenance.yfilter)) leaf_name_data.push_back(is_maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory = value;
        is_mandatory.value_namespace = name_space;
        is_mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance = value;
        is_maintenance.value_namespace = name_space;
        is_maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory.yfilter = yfilter;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "instance-id" || name == "args" || name == "jid" || name == "state" || name == "last-started" || name == "respawn-count" || name == "placement-state" || name == "is-mandatory" || name == "is-maintenance")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Startup::Startup()
    :
    process_count{YType::uint32, "process-count"}
        ,
    process(this, {})
{

    yang_name = "startup"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Startup::~Startup()
{
}

bool SystemProcess::NodeTable::Node::Startup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return process_count.is_set;
}

bool SystemProcess::NodeTable::Node::Startup::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_count.yfilter);
}

std::string SystemProcess::NodeTable::Node::Startup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Startup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Startup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Startup::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Startup::get_children() const
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

void SystemProcess::NodeTable::Node::Startup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Startup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Startup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "process-count")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Startup::Process::Process()
    :
    name{YType::str, "name"},
    instance_id{YType::uint32, "instance-id"},
    args{YType::str, "args"},
    jid{YType::uint32, "jid"},
    state{YType::enumeration, "state"},
    last_started{YType::str, "last-started"},
    respawn_count{YType::uint8, "respawn-count"},
    placement_state{YType::enumeration, "placement-state"},
    is_mandatory{YType::boolean, "is-mandatory"},
    is_maintenance{YType::boolean, "is-maintenance"}
{

    yang_name = "process"; yang_parent_name = "startup"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Startup::Process::~Process()
{
}

bool SystemProcess::NodeTable::Node::Startup::Process::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| instance_id.is_set
	|| args.is_set
	|| jid.is_set
	|| state.is_set
	|| last_started.is_set
	|| respawn_count.is_set
	|| placement_state.is_set
	|| is_mandatory.is_set
	|| is_maintenance.is_set;
}

bool SystemProcess::NodeTable::Node::Startup::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(is_mandatory.yfilter)
	|| ydk::is_set(is_maintenance.yfilter);
}

std::string SystemProcess::NodeTable::Node::Startup::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Startup::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (is_mandatory.is_set || is_set(is_mandatory.yfilter)) leaf_name_data.push_back(is_mandatory.get_name_leafdata());
    if (is_maintenance.is_set || is_set(is_maintenance.yfilter)) leaf_name_data.push_back(is_maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Startup::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Startup::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Startup::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory = value;
        is_mandatory.value_namespace = name_space;
        is_mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance = value;
        is_maintenance.value_namespace = name_space;
        is_maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Startup::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory.yfilter = yfilter;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Startup::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "instance-id" || name == "args" || name == "jid" || name == "state" || name == "last-started" || name == "respawn-count" || name == "placement-state" || name == "is-mandatory" || name == "is-maintenance")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Mandatory::Mandatory()
    :
    process_count{YType::uint32, "process-count"}
        ,
    process(this, {})
{

    yang_name = "mandatory"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Mandatory::~Mandatory()
{
}

bool SystemProcess::NodeTable::Node::Mandatory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return process_count.is_set;
}

bool SystemProcess::NodeTable::Node::Mandatory::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_count.yfilter);
}

std::string SystemProcess::NodeTable::Node::Mandatory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mandatory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Mandatory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Mandatory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Mandatory::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Mandatory::get_children() const
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

void SystemProcess::NodeTable::Node::Mandatory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Mandatory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Mandatory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "process-count")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Mandatory::Process::Process()
    :
    name{YType::str, "name"},
    instance_id{YType::uint32, "instance-id"},
    args{YType::str, "args"},
    jid{YType::uint32, "jid"},
    state{YType::enumeration, "state"},
    last_started{YType::str, "last-started"},
    respawn_count{YType::uint8, "respawn-count"},
    placement_state{YType::enumeration, "placement-state"},
    is_mandatory{YType::boolean, "is-mandatory"},
    is_maintenance{YType::boolean, "is-maintenance"}
{

    yang_name = "process"; yang_parent_name = "mandatory"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Mandatory::Process::~Process()
{
}

bool SystemProcess::NodeTable::Node::Mandatory::Process::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| instance_id.is_set
	|| args.is_set
	|| jid.is_set
	|| state.is_set
	|| last_started.is_set
	|| respawn_count.is_set
	|| placement_state.is_set
	|| is_mandatory.is_set
	|| is_maintenance.is_set;
}

bool SystemProcess::NodeTable::Node::Mandatory::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(last_started.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(placement_state.yfilter)
	|| ydk::is_set(is_mandatory.yfilter)
	|| ydk::is_set(is_maintenance.yfilter);
}

std::string SystemProcess::NodeTable::Node::Mandatory::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Mandatory::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (last_started.is_set || is_set(last_started.yfilter)) leaf_name_data.push_back(last_started.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (placement_state.is_set || is_set(placement_state.yfilter)) leaf_name_data.push_back(placement_state.get_name_leafdata());
    if (is_mandatory.is_set || is_set(is_mandatory.yfilter)) leaf_name_data.push_back(is_mandatory.get_name_leafdata());
    if (is_maintenance.is_set || is_set(is_maintenance.yfilter)) leaf_name_data.push_back(is_maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Mandatory::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Mandatory::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Mandatory::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-started")
    {
        last_started = value;
        last_started.value_namespace = name_space;
        last_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement-state")
    {
        placement_state = value;
        placement_state.value_namespace = name_space;
        placement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory = value;
        is_mandatory.value_namespace = name_space;
        is_mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance = value;
        is_maintenance.value_namespace = name_space;
        is_maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Mandatory::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "last-started")
    {
        last_started.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "placement-state")
    {
        placement_state.yfilter = yfilter;
    }
    if(value_path == "is-mandatory")
    {
        is_mandatory.yfilter = yfilter;
    }
    if(value_path == "is-maintenance")
    {
        is_maintenance.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Mandatory::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "instance-id" || name == "args" || name == "jid" || name == "state" || name == "last-started" || name == "respawn-count" || name == "placement-state" || name == "is-mandatory" || name == "is-maintenance")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Abort::Abort()
    :
    process_abort_count{YType::uint32, "process-abort-count"}
        ,
    process(this, {})
{

    yang_name = "abort"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Abort::~Abort()
{
}

bool SystemProcess::NodeTable::Node::Abort::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return process_abort_count.is_set;
}

bool SystemProcess::NodeTable::Node::Abort::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_abort_count.yfilter);
}

std::string SystemProcess::NodeTable::Node::Abort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Abort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_abort_count.is_set || is_set(process_abort_count.yfilter)) leaf_name_data.push_back(process_abort_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Abort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Abort::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Abort::get_children() const
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

void SystemProcess::NodeTable::Node::Abort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-abort-count")
    {
        process_abort_count = value;
        process_abort_count.value_namespace = name_space;
        process_abort_count.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Abort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-abort-count")
    {
        process_abort_count.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Abort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "process-abort-count")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Abort::Process::Process()
    :
    name{YType::str, "name"},
    timebuf{YType::str, "timebuf"},
    job_id{YType::uint32, "job-id"},
    is_respawned{YType::str, "is-respawned"}
{

    yang_name = "process"; yang_parent_name = "abort"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Abort::Process::~Process()
{
}

bool SystemProcess::NodeTable::Node::Abort::Process::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| timebuf.is_set
	|| job_id.is_set
	|| is_respawned.is_set;
}

bool SystemProcess::NodeTable::Node::Abort::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timebuf.yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(is_respawned.yfilter);
}

std::string SystemProcess::NodeTable::Node::Abort::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Abort::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timebuf.is_set || is_set(timebuf.yfilter)) leaf_name_data.push_back(timebuf.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (is_respawned.is_set || is_set(is_respawned.yfilter)) leaf_name_data.push_back(is_respawned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Abort::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Abort::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Abort::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timebuf")
    {
        timebuf = value;
        timebuf.value_namespace = name_space;
        timebuf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-respawned")
    {
        is_respawned = value;
        is_respawned.value_namespace = name_space;
        is_respawned.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Abort::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timebuf")
    {
        timebuf.yfilter = yfilter;
    }
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "is-respawned")
    {
        is_respawned.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Abort::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "timebuf" || name == "job-id" || name == "is-respawned")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::Failover()
    :
    failover_log{YType::str, "failover-log"},
    critical_failover_elapsed_time{YType::str, "critical-failover-elapsed-time"},
    last_process_started{YType::str, "last-process-started"},
    primary_failover_elapsed_time{YType::str, "primary-failover-elapsed-time"},
    last_primary_proc_started{YType::str, "last-primary-proc-started"}
        ,
    standby_band_statistic(this, {})
    , active_band_statistic(this, {})
    , active_ts_boot_proc(this, {})
    , start_ts_boot_proc(this, {})
    , primary_band_statistic(this, {})
    , primary_ts_boot_proc(this, {})
    , primary_start_ts_boot_proc(this, {})
{

    yang_name = "failover"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::~Failover()
{
}

bool SystemProcess::NodeTable::Node::Failover::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standby_band_statistic.len(); index++)
    {
        if(standby_band_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_band_statistic.len(); index++)
    {
        if(active_band_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_ts_boot_proc.len(); index++)
    {
        if(active_ts_boot_proc[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<start_ts_boot_proc.len(); index++)
    {
        if(start_ts_boot_proc[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_band_statistic.len(); index++)
    {
        if(primary_band_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_ts_boot_proc.len(); index++)
    {
        if(primary_ts_boot_proc[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_start_ts_boot_proc.len(); index++)
    {
        if(primary_start_ts_boot_proc[index]->has_data())
            return true;
    }
    return failover_log.is_set
	|| critical_failover_elapsed_time.is_set
	|| last_process_started.is_set
	|| primary_failover_elapsed_time.is_set
	|| last_primary_proc_started.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::has_operation() const
{
    for (std::size_t index=0; index<standby_band_statistic.len(); index++)
    {
        if(standby_band_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_band_statistic.len(); index++)
    {
        if(active_band_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_ts_boot_proc.len(); index++)
    {
        if(active_ts_boot_proc[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<start_ts_boot_proc.len(); index++)
    {
        if(start_ts_boot_proc[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_band_statistic.len(); index++)
    {
        if(primary_band_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_ts_boot_proc.len(); index++)
    {
        if(primary_ts_boot_proc[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_start_ts_boot_proc.len(); index++)
    {
        if(primary_start_ts_boot_proc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(failover_log.yfilter)
	|| ydk::is_set(critical_failover_elapsed_time.yfilter)
	|| ydk::is_set(last_process_started.yfilter)
	|| ydk::is_set(primary_failover_elapsed_time.yfilter)
	|| ydk::is_set(last_primary_proc_started.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failover_log.is_set || is_set(failover_log.yfilter)) leaf_name_data.push_back(failover_log.get_name_leafdata());
    if (critical_failover_elapsed_time.is_set || is_set(critical_failover_elapsed_time.yfilter)) leaf_name_data.push_back(critical_failover_elapsed_time.get_name_leafdata());
    if (last_process_started.is_set || is_set(last_process_started.yfilter)) leaf_name_data.push_back(last_process_started.get_name_leafdata());
    if (primary_failover_elapsed_time.is_set || is_set(primary_failover_elapsed_time.yfilter)) leaf_name_data.push_back(primary_failover_elapsed_time.get_name_leafdata());
    if (last_primary_proc_started.is_set || is_set(last_primary_proc_started.yfilter)) leaf_name_data.push_back(last_primary_proc_started.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "standby-band-statistic")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic>();
        ent_->parent = this;
        standby_band_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "active-band-statistic")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic>();
        ent_->parent = this;
        active_band_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "active-ts-boot-proc")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc>();
        ent_->parent = this;
        active_ts_boot_proc.append(ent_);
        return ent_;
    }

    if(child_yang_name == "start-ts-boot-proc")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::StartTsBootProc>();
        ent_->parent = this;
        start_ts_boot_proc.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary-band-statistic")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic>();
        ent_->parent = this;
        primary_band_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary-ts-boot-proc")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc>();
        ent_->parent = this;
        primary_ts_boot_proc.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary-start-ts-boot-proc")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc>();
        ent_->parent = this;
        primary_start_ts_boot_proc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : standby_band_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : active_band_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : active_ts_boot_proc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : start_ts_boot_proc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : primary_band_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : primary_ts_boot_proc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : primary_start_ts_boot_proc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Failover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failover-log")
    {
        failover_log = value;
        failover_log.value_namespace = name_space;
        failover_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-failover-elapsed-time")
    {
        critical_failover_elapsed_time = value;
        critical_failover_elapsed_time.value_namespace = name_space;
        critical_failover_elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-started")
    {
        last_process_started = value;
        last_process_started.value_namespace = name_space;
        last_process_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-failover-elapsed-time")
    {
        primary_failover_elapsed_time = value;
        primary_failover_elapsed_time.value_namespace = name_space;
        primary_failover_elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-primary-proc-started")
    {
        last_primary_proc_started = value;
        last_primary_proc_started.value_namespace = name_space;
        last_primary_proc_started.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failover-log")
    {
        failover_log.yfilter = yfilter;
    }
    if(value_path == "critical-failover-elapsed-time")
    {
        critical_failover_elapsed_time.yfilter = yfilter;
    }
    if(value_path == "last-process-started")
    {
        last_process_started.yfilter = yfilter;
    }
    if(value_path == "primary-failover-elapsed-time")
    {
        primary_failover_elapsed_time.yfilter = yfilter;
    }
    if(value_path == "last-primary-proc-started")
    {
        last_primary_proc_started.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby-band-statistic" || name == "active-band-statistic" || name == "active-ts-boot-proc" || name == "start-ts-boot-proc" || name == "primary-band-statistic" || name == "primary-ts-boot-proc" || name == "primary-start-ts-boot-proc" || name == "failover-log" || name == "critical-failover-elapsed-time" || name == "last-process-started" || name == "primary-failover-elapsed-time" || name == "last-primary-proc-started")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::StandbyBandStatistic()
    :
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    band_finish_time{YType::str, "band-finish-time"},
    band_time{YType::str, "band-time"},
    finish_time{YType::str, "finish-time"},
    idle_percentage{YType::str, "idle-percentage"},
    jid{YType::uint32, "jid"},
    ready_time{YType::str, "ready-time"},
    last_process{YType::str, "last-process"}
{

    yang_name = "standby-band-statistic"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::~StandbyBandStatistic()
{
}

bool SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| band_name.is_set
	|| band_finish_time.is_set
	|| band_time.is_set
	|| finish_time.is_set
	|| idle_percentage.is_set
	|| jid.is_set
	|| ready_time.is_set
	|| last_process.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(band_finish_time.yfilter)
	|| ydk::is_set(band_time.yfilter)
	|| ydk::is_set(finish_time.yfilter)
	|| ydk::is_set(idle_percentage.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(ready_time.yfilter)
	|| ydk::is_set(last_process.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-band-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (band_finish_time.is_set || is_set(band_finish_time.yfilter)) leaf_name_data.push_back(band_finish_time.get_name_leafdata());
    if (band_time.is_set || is_set(band_time.yfilter)) leaf_name_data.push_back(band_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.yfilter)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (idle_percentage.is_set || is_set(idle_percentage.yfilter)) leaf_name_data.push_back(idle_percentage.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (ready_time.is_set || is_set(ready_time.yfilter)) leaf_name_data.push_back(ready_time.get_name_leafdata());
    if (last_process.is_set || is_set(last_process.yfilter)) leaf_name_data.push_back(last_process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time = value;
        band_finish_time.value_namespace = name_space;
        band_finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-time")
    {
        band_time = value;
        band_time.value_namespace = name_space;
        band_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
        finish_time.value_namespace = name_space;
        finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage = value;
        idle_percentage.value_namespace = name_space;
        idle_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time")
    {
        ready_time = value;
        ready_time.value_namespace = name_space;
        ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process")
    {
        last_process = value;
        last_process.value_namespace = name_space;
        last_process.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time.yfilter = yfilter;
    }
    if(value_path == "band-time")
    {
        band_time.yfilter = yfilter;
    }
    if(value_path == "finish-time")
    {
        finish_time.yfilter = yfilter;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "ready-time")
    {
        ready_time.yfilter = yfilter;
    }
    if(value_path == "last-process")
    {
        last_process.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "band-name" || name == "band-finish-time" || name == "band-time" || name == "finish-time" || name == "idle-percentage" || name == "jid" || name == "ready-time" || name == "last-process")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::ActiveBandStatistic()
    :
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    band_finish_time{YType::str, "band-finish-time"},
    band_time{YType::str, "band-time"},
    finish_time{YType::str, "finish-time"},
    idle_percentage{YType::str, "idle-percentage"},
    jid{YType::uint32, "jid"},
    ready_time{YType::str, "ready-time"},
    last_process{YType::str, "last-process"}
{

    yang_name = "active-band-statistic"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::~ActiveBandStatistic()
{
}

bool SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| band_name.is_set
	|| band_finish_time.is_set
	|| band_time.is_set
	|| finish_time.is_set
	|| idle_percentage.is_set
	|| jid.is_set
	|| ready_time.is_set
	|| last_process.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(band_finish_time.yfilter)
	|| ydk::is_set(band_time.yfilter)
	|| ydk::is_set(finish_time.yfilter)
	|| ydk::is_set(idle_percentage.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(ready_time.yfilter)
	|| ydk::is_set(last_process.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-band-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (band_finish_time.is_set || is_set(band_finish_time.yfilter)) leaf_name_data.push_back(band_finish_time.get_name_leafdata());
    if (band_time.is_set || is_set(band_time.yfilter)) leaf_name_data.push_back(band_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.yfilter)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (idle_percentage.is_set || is_set(idle_percentage.yfilter)) leaf_name_data.push_back(idle_percentage.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (ready_time.is_set || is_set(ready_time.yfilter)) leaf_name_data.push_back(ready_time.get_name_leafdata());
    if (last_process.is_set || is_set(last_process.yfilter)) leaf_name_data.push_back(last_process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time = value;
        band_finish_time.value_namespace = name_space;
        band_finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-time")
    {
        band_time = value;
        band_time.value_namespace = name_space;
        band_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
        finish_time.value_namespace = name_space;
        finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage = value;
        idle_percentage.value_namespace = name_space;
        idle_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time")
    {
        ready_time = value;
        ready_time.value_namespace = name_space;
        ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process")
    {
        last_process = value;
        last_process.value_namespace = name_space;
        last_process.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time.yfilter = yfilter;
    }
    if(value_path == "band-time")
    {
        band_time.yfilter = yfilter;
    }
    if(value_path == "finish-time")
    {
        finish_time.yfilter = yfilter;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "ready-time")
    {
        ready_time.yfilter = yfilter;
    }
    if(value_path == "last-process")
    {
        last_process.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "band-name" || name == "band-finish-time" || name == "band-time" || name == "finish-time" || name == "idle-percentage" || name == "jid" || name == "ready-time" || name == "last-process")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::ActiveTsBootProc()
    :
    active_time_stamp{YType::str, "active-time-stamp"},
    go_active{YType::str, "go-active"},
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    job_id{YType::int32, "job-id"},
    instance_id{YType::int32, "instance-id"},
    avail_time_stamp{YType::str, "avail-time-stamp"},
    avail{YType::str, "avail"},
    is_avail_timeout{YType::boolean, "is-avail-timeout"},
    process_name{YType::str, "process-name"}
{

    yang_name = "active-ts-boot-proc"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::~ActiveTsBootProc()
{
}

bool SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::has_data() const
{
    if (is_presence_container) return true;
    return active_time_stamp.is_set
	|| go_active.is_set
	|| level.is_set
	|| band_name.is_set
	|| job_id.is_set
	|| instance_id.is_set
	|| avail_time_stamp.is_set
	|| avail.is_set
	|| is_avail_timeout.is_set
	|| process_name.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_time_stamp.yfilter)
	|| ydk::is_set(go_active.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(avail_time_stamp.yfilter)
	|| ydk::is_set(avail.yfilter)
	|| ydk::is_set(is_avail_timeout.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-ts-boot-proc";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_time_stamp.is_set || is_set(active_time_stamp.yfilter)) leaf_name_data.push_back(active_time_stamp.get_name_leafdata());
    if (go_active.is_set || is_set(go_active.yfilter)) leaf_name_data.push_back(go_active.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (avail_time_stamp.is_set || is_set(avail_time_stamp.yfilter)) leaf_name_data.push_back(avail_time_stamp.get_name_leafdata());
    if (avail.is_set || is_set(avail.yfilter)) leaf_name_data.push_back(avail.get_name_leafdata());
    if (is_avail_timeout.is_set || is_set(is_avail_timeout.yfilter)) leaf_name_data.push_back(is_avail_timeout.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-time-stamp")
    {
        active_time_stamp = value;
        active_time_stamp.value_namespace = name_space;
        active_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "go-active")
    {
        go_active = value;
        go_active.value_namespace = name_space;
        go_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avail-time-stamp")
    {
        avail_time_stamp = value;
        avail_time_stamp.value_namespace = name_space;
        avail_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avail")
    {
        avail = value;
        avail.value_namespace = name_space;
        avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-avail-timeout")
    {
        is_avail_timeout = value;
        is_avail_timeout.value_namespace = name_space;
        is_avail_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-time-stamp")
    {
        active_time_stamp.yfilter = yfilter;
    }
    if(value_path == "go-active")
    {
        go_active.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "avail-time-stamp")
    {
        avail_time_stamp.yfilter = yfilter;
    }
    if(value_path == "avail")
    {
        avail.yfilter = yfilter;
    }
    if(value_path == "is-avail-timeout")
    {
        is_avail_timeout.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-time-stamp" || name == "go-active" || name == "level" || name == "band-name" || name == "job-id" || name == "instance-id" || name == "avail-time-stamp" || name == "avail" || name == "is-avail-timeout" || name == "process-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::StartTsBootProc::StartTsBootProc()
    :
    start_time_stamp{YType::str, "start-time-stamp"},
    started{YType::str, "started"},
    level{YType::str, "level"},
    jid{YType::int32, "jid"},
    instance_id{YType::int32, "instance-id"},
    ready_time_stamp{YType::str, "ready-time-stamp"},
    ready{YType::str, "ready"},
    is_eoi_timeout{YType::boolean, "is-eoi-timeout"},
    process_name{YType::str, "process-name"}
{

    yang_name = "start-ts-boot-proc"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::StartTsBootProc::~StartTsBootProc()
{
}

bool SystemProcess::NodeTable::Node::Failover::StartTsBootProc::has_data() const
{
    if (is_presence_container) return true;
    return start_time_stamp.is_set
	|| started.is_set
	|| level.is_set
	|| jid.is_set
	|| instance_id.is_set
	|| ready_time_stamp.is_set
	|| ready.is_set
	|| is_eoi_timeout.is_set
	|| process_name.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::StartTsBootProc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time_stamp.yfilter)
	|| ydk::is_set(started.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(ready_time_stamp.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(is_eoi_timeout.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::StartTsBootProc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-ts-boot-proc";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::StartTsBootProc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time_stamp.is_set || is_set(start_time_stamp.yfilter)) leaf_name_data.push_back(start_time_stamp.get_name_leafdata());
    if (started.is_set || is_set(started.yfilter)) leaf_name_data.push_back(started.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (ready_time_stamp.is_set || is_set(ready_time_stamp.yfilter)) leaf_name_data.push_back(ready_time_stamp.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (is_eoi_timeout.is_set || is_set(is_eoi_timeout.yfilter)) leaf_name_data.push_back(is_eoi_timeout.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::StartTsBootProc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::StartTsBootProc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::StartTsBootProc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time-stamp")
    {
        start_time_stamp = value;
        start_time_stamp.value_namespace = name_space;
        start_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started")
    {
        started = value;
        started.value_namespace = name_space;
        started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time-stamp")
    {
        ready_time_stamp = value;
        ready_time_stamp.value_namespace = name_space;
        ready_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-eoi-timeout")
    {
        is_eoi_timeout = value;
        is_eoi_timeout.value_namespace = name_space;
        is_eoi_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::StartTsBootProc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time-stamp")
    {
        start_time_stamp.yfilter = yfilter;
    }
    if(value_path == "started")
    {
        started.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "ready-time-stamp")
    {
        ready_time_stamp.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "is-eoi-timeout")
    {
        is_eoi_timeout.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::StartTsBootProc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time-stamp" || name == "started" || name == "level" || name == "jid" || name == "instance-id" || name == "ready-time-stamp" || name == "ready" || name == "is-eoi-timeout" || name == "process-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::PrimaryBandStatistic()
    :
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    band_finish_time{YType::str, "band-finish-time"},
    band_time{YType::str, "band-time"},
    finish_time{YType::str, "finish-time"},
    idle_percentage{YType::str, "idle-percentage"},
    jid{YType::uint32, "jid"},
    ready_time{YType::str, "ready-time"},
    last_process{YType::str, "last-process"}
{

    yang_name = "primary-band-statistic"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::~PrimaryBandStatistic()
{
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| band_name.is_set
	|| band_finish_time.is_set
	|| band_time.is_set
	|| finish_time.is_set
	|| idle_percentage.is_set
	|| jid.is_set
	|| ready_time.is_set
	|| last_process.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(band_finish_time.yfilter)
	|| ydk::is_set(band_time.yfilter)
	|| ydk::is_set(finish_time.yfilter)
	|| ydk::is_set(idle_percentage.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(ready_time.yfilter)
	|| ydk::is_set(last_process.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-band-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (band_finish_time.is_set || is_set(band_finish_time.yfilter)) leaf_name_data.push_back(band_finish_time.get_name_leafdata());
    if (band_time.is_set || is_set(band_time.yfilter)) leaf_name_data.push_back(band_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.yfilter)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (idle_percentage.is_set || is_set(idle_percentage.yfilter)) leaf_name_data.push_back(idle_percentage.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (ready_time.is_set || is_set(ready_time.yfilter)) leaf_name_data.push_back(ready_time.get_name_leafdata());
    if (last_process.is_set || is_set(last_process.yfilter)) leaf_name_data.push_back(last_process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time = value;
        band_finish_time.value_namespace = name_space;
        band_finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-time")
    {
        band_time = value;
        band_time.value_namespace = name_space;
        band_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
        finish_time.value_namespace = name_space;
        finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage = value;
        idle_percentage.value_namespace = name_space;
        idle_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time")
    {
        ready_time = value;
        ready_time.value_namespace = name_space;
        ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process")
    {
        last_process = value;
        last_process.value_namespace = name_space;
        last_process.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time.yfilter = yfilter;
    }
    if(value_path == "band-time")
    {
        band_time.yfilter = yfilter;
    }
    if(value_path == "finish-time")
    {
        finish_time.yfilter = yfilter;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "ready-time")
    {
        ready_time.yfilter = yfilter;
    }
    if(value_path == "last-process")
    {
        last_process.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "band-name" || name == "band-finish-time" || name == "band-time" || name == "finish-time" || name == "idle-percentage" || name == "jid" || name == "ready-time" || name == "last-process")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::PrimaryTsBootProc()
    :
    prim_time_stamp{YType::str, "prim-time-stamp"},
    go_primary{YType::str, "go-primary"},
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    jid{YType::int32, "jid"},
    instance_id{YType::int32, "instance-id"},
    avail_time_stamp{YType::str, "avail-time-stamp"},
    avail{YType::str, "avail"},
    is_avail_timeout{YType::boolean, "is-avail-timeout"},
    process_name{YType::str, "process-name"}
{

    yang_name = "primary-ts-boot-proc"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::~PrimaryTsBootProc()
{
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::has_data() const
{
    if (is_presence_container) return true;
    return prim_time_stamp.is_set
	|| go_primary.is_set
	|| level.is_set
	|| band_name.is_set
	|| jid.is_set
	|| instance_id.is_set
	|| avail_time_stamp.is_set
	|| avail.is_set
	|| is_avail_timeout.is_set
	|| process_name.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prim_time_stamp.yfilter)
	|| ydk::is_set(go_primary.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(avail_time_stamp.yfilter)
	|| ydk::is_set(avail.yfilter)
	|| ydk::is_set(is_avail_timeout.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-ts-boot-proc";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prim_time_stamp.is_set || is_set(prim_time_stamp.yfilter)) leaf_name_data.push_back(prim_time_stamp.get_name_leafdata());
    if (go_primary.is_set || is_set(go_primary.yfilter)) leaf_name_data.push_back(go_primary.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (avail_time_stamp.is_set || is_set(avail_time_stamp.yfilter)) leaf_name_data.push_back(avail_time_stamp.get_name_leafdata());
    if (avail.is_set || is_set(avail.yfilter)) leaf_name_data.push_back(avail.get_name_leafdata());
    if (is_avail_timeout.is_set || is_set(is_avail_timeout.yfilter)) leaf_name_data.push_back(is_avail_timeout.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prim-time-stamp")
    {
        prim_time_stamp = value;
        prim_time_stamp.value_namespace = name_space;
        prim_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "go-primary")
    {
        go_primary = value;
        go_primary.value_namespace = name_space;
        go_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avail-time-stamp")
    {
        avail_time_stamp = value;
        avail_time_stamp.value_namespace = name_space;
        avail_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avail")
    {
        avail = value;
        avail.value_namespace = name_space;
        avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-avail-timeout")
    {
        is_avail_timeout = value;
        is_avail_timeout.value_namespace = name_space;
        is_avail_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prim-time-stamp")
    {
        prim_time_stamp.yfilter = yfilter;
    }
    if(value_path == "go-primary")
    {
        go_primary.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "avail-time-stamp")
    {
        avail_time_stamp.yfilter = yfilter;
    }
    if(value_path == "avail")
    {
        avail.yfilter = yfilter;
    }
    if(value_path == "is-avail-timeout")
    {
        is_avail_timeout.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prim-time-stamp" || name == "go-primary" || name == "level" || name == "band-name" || name == "jid" || name == "instance-id" || name == "avail-time-stamp" || name == "avail" || name == "is-avail-timeout" || name == "process-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::PrimaryStartTsBootProc()
    :
    start_time_stamp{YType::str, "start-time-stamp"},
    started{YType::str, "started"},
    level{YType::str, "level"},
    jid{YType::int32, "jid"},
    instance_id{YType::int32, "instance-id"},
    ready_time_stamp{YType::str, "ready-time-stamp"},
    ready{YType::str, "ready"},
    is_eoi_timeout{YType::boolean, "is-eoi-timeout"},
    process_name{YType::str, "process-name"}
{

    yang_name = "primary-start-ts-boot-proc"; yang_parent_name = "failover"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::~PrimaryStartTsBootProc()
{
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::has_data() const
{
    if (is_presence_container) return true;
    return start_time_stamp.is_set
	|| started.is_set
	|| level.is_set
	|| jid.is_set
	|| instance_id.is_set
	|| ready_time_stamp.is_set
	|| ready.is_set
	|| is_eoi_timeout.is_set
	|| process_name.is_set;
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time_stamp.yfilter)
	|| ydk::is_set(started.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(ready_time_stamp.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(is_eoi_timeout.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-start-ts-boot-proc";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time_stamp.is_set || is_set(start_time_stamp.yfilter)) leaf_name_data.push_back(start_time_stamp.get_name_leafdata());
    if (started.is_set || is_set(started.yfilter)) leaf_name_data.push_back(started.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (ready_time_stamp.is_set || is_set(ready_time_stamp.yfilter)) leaf_name_data.push_back(ready_time_stamp.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (is_eoi_timeout.is_set || is_set(is_eoi_timeout.yfilter)) leaf_name_data.push_back(is_eoi_timeout.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time-stamp")
    {
        start_time_stamp = value;
        start_time_stamp.value_namespace = name_space;
        start_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started")
    {
        started = value;
        started.value_namespace = name_space;
        started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time-stamp")
    {
        ready_time_stamp = value;
        ready_time_stamp.value_namespace = name_space;
        ready_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-eoi-timeout")
    {
        is_eoi_timeout = value;
        is_eoi_timeout.value_namespace = name_space;
        is_eoi_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time-stamp")
    {
        start_time_stamp.yfilter = yfilter;
    }
    if(value_path == "started")
    {
        started.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "ready-time-stamp")
    {
        ready_time_stamp.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "is-eoi-timeout")
    {
        is_eoi_timeout.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time-stamp" || name == "started" || name == "level" || name == "jid" || name == "instance-id" || name == "ready-time-stamp" || name == "ready" || name == "is-eoi-timeout" || name == "process-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Boot::Boot()
    :
    last_process_started{YType::str, "last-process-started"}
        ,
    standby_band_statistic(this, {})
    , active_band_statistic(this, {})
    , booted_process(this, {})
{

    yang_name = "boot"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Boot::~Boot()
{
}

bool SystemProcess::NodeTable::Node::Boot::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standby_band_statistic.len(); index++)
    {
        if(standby_band_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_band_statistic.len(); index++)
    {
        if(active_band_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<booted_process.len(); index++)
    {
        if(booted_process[index]->has_data())
            return true;
    }
    return last_process_started.is_set;
}

bool SystemProcess::NodeTable::Node::Boot::has_operation() const
{
    for (std::size_t index=0; index<standby_band_statistic.len(); index++)
    {
        if(standby_band_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_band_statistic.len(); index++)
    {
        if(active_band_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<booted_process.len(); index++)
    {
        if(booted_process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(last_process_started.yfilter);
}

std::string SystemProcess::NodeTable::Node::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_process_started.is_set || is_set(last_process_started.yfilter)) leaf_name_data.push_back(last_process_started.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "standby-band-statistic")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic>();
        ent_->parent = this;
        standby_band_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "active-band-statistic")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic>();
        ent_->parent = this;
        active_band_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "booted-process")
    {
        auto ent_ = std::make_shared<SystemProcess::NodeTable::Node::Boot::BootedProcess>();
        ent_->parent = this;
        booted_process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : standby_band_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : active_band_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : booted_process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SystemProcess::NodeTable::Node::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-process-started")
    {
        last_process_started = value;
        last_process_started.value_namespace = name_space;
        last_process_started.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-process-started")
    {
        last_process_started.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby-band-statistic" || name == "active-band-statistic" || name == "booted-process" || name == "last-process-started")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::StandbyBandStatistic()
    :
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    band_finish_time{YType::str, "band-finish-time"},
    band_time{YType::str, "band-time"},
    finish_time{YType::str, "finish-time"},
    idle_percentage{YType::str, "idle-percentage"},
    jid{YType::uint32, "jid"},
    ready_time{YType::str, "ready-time"},
    last_process{YType::str, "last-process"}
{

    yang_name = "standby-band-statistic"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::~StandbyBandStatistic()
{
}

bool SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| band_name.is_set
	|| band_finish_time.is_set
	|| band_time.is_set
	|| finish_time.is_set
	|| idle_percentage.is_set
	|| jid.is_set
	|| ready_time.is_set
	|| last_process.is_set;
}

bool SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(band_finish_time.yfilter)
	|| ydk::is_set(band_time.yfilter)
	|| ydk::is_set(finish_time.yfilter)
	|| ydk::is_set(idle_percentage.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(ready_time.yfilter)
	|| ydk::is_set(last_process.yfilter);
}

std::string SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-band-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (band_finish_time.is_set || is_set(band_finish_time.yfilter)) leaf_name_data.push_back(band_finish_time.get_name_leafdata());
    if (band_time.is_set || is_set(band_time.yfilter)) leaf_name_data.push_back(band_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.yfilter)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (idle_percentage.is_set || is_set(idle_percentage.yfilter)) leaf_name_data.push_back(idle_percentage.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (ready_time.is_set || is_set(ready_time.yfilter)) leaf_name_data.push_back(ready_time.get_name_leafdata());
    if (last_process.is_set || is_set(last_process.yfilter)) leaf_name_data.push_back(last_process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time = value;
        band_finish_time.value_namespace = name_space;
        band_finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-time")
    {
        band_time = value;
        band_time.value_namespace = name_space;
        band_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
        finish_time.value_namespace = name_space;
        finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage = value;
        idle_percentage.value_namespace = name_space;
        idle_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time")
    {
        ready_time = value;
        ready_time.value_namespace = name_space;
        ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process")
    {
        last_process = value;
        last_process.value_namespace = name_space;
        last_process.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time.yfilter = yfilter;
    }
    if(value_path == "band-time")
    {
        band_time.yfilter = yfilter;
    }
    if(value_path == "finish-time")
    {
        finish_time.yfilter = yfilter;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "ready-time")
    {
        ready_time.yfilter = yfilter;
    }
    if(value_path == "last-process")
    {
        last_process.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "band-name" || name == "band-finish-time" || name == "band-time" || name == "finish-time" || name == "idle-percentage" || name == "jid" || name == "ready-time" || name == "last-process")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::ActiveBandStatistic()
    :
    level{YType::str, "level"},
    band_name{YType::str, "band-name"},
    band_finish_time{YType::str, "band-finish-time"},
    band_time{YType::str, "band-time"},
    finish_time{YType::str, "finish-time"},
    idle_percentage{YType::str, "idle-percentage"},
    jid{YType::uint32, "jid"},
    ready_time{YType::str, "ready-time"},
    last_process{YType::str, "last-process"}
{

    yang_name = "active-band-statistic"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::~ActiveBandStatistic()
{
}

bool SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| band_name.is_set
	|| band_finish_time.is_set
	|| band_time.is_set
	|| finish_time.is_set
	|| idle_percentage.is_set
	|| jid.is_set
	|| ready_time.is_set
	|| last_process.is_set;
}

bool SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(band_name.yfilter)
	|| ydk::is_set(band_finish_time.yfilter)
	|| ydk::is_set(band_time.yfilter)
	|| ydk::is_set(finish_time.yfilter)
	|| ydk::is_set(idle_percentage.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(ready_time.yfilter)
	|| ydk::is_set(last_process.yfilter);
}

std::string SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-band-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (band_name.is_set || is_set(band_name.yfilter)) leaf_name_data.push_back(band_name.get_name_leafdata());
    if (band_finish_time.is_set || is_set(band_finish_time.yfilter)) leaf_name_data.push_back(band_finish_time.get_name_leafdata());
    if (band_time.is_set || is_set(band_time.yfilter)) leaf_name_data.push_back(band_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.yfilter)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (idle_percentage.is_set || is_set(idle_percentage.yfilter)) leaf_name_data.push_back(idle_percentage.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (ready_time.is_set || is_set(ready_time.yfilter)) leaf_name_data.push_back(ready_time.get_name_leafdata());
    if (last_process.is_set || is_set(last_process.yfilter)) leaf_name_data.push_back(last_process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-name")
    {
        band_name = value;
        band_name.value_namespace = name_space;
        band_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time = value;
        band_finish_time.value_namespace = name_space;
        band_finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "band-time")
    {
        band_time = value;
        band_time.value_namespace = name_space;
        band_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
        finish_time.value_namespace = name_space;
        finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage = value;
        idle_percentage.value_namespace = name_space;
        idle_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time")
    {
        ready_time = value;
        ready_time.value_namespace = name_space;
        ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process")
    {
        last_process = value;
        last_process.value_namespace = name_space;
        last_process.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "band-name")
    {
        band_name.yfilter = yfilter;
    }
    if(value_path == "band-finish-time")
    {
        band_finish_time.yfilter = yfilter;
    }
    if(value_path == "band-time")
    {
        band_time.yfilter = yfilter;
    }
    if(value_path == "finish-time")
    {
        finish_time.yfilter = yfilter;
    }
    if(value_path == "idle-percentage")
    {
        idle_percentage.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "ready-time")
    {
        ready_time.yfilter = yfilter;
    }
    if(value_path == "last-process")
    {
        last_process.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "band-name" || name == "band-finish-time" || name == "band-time" || name == "finish-time" || name == "idle-percentage" || name == "jid" || name == "ready-time" || name == "last-process")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Boot::BootedProcess::BootedProcess()
    :
    start_time_stamp{YType::str, "start-time-stamp"},
    started{YType::str, "started"},
    level{YType::str, "level"},
    jid{YType::int32, "jid"},
    instance_id{YType::int32, "instance-id"},
    ready_time_stamp{YType::str, "ready-time-stamp"},
    ready{YType::str, "ready"},
    is_eoi_timeout{YType::boolean, "is-eoi-timeout"},
    process_name{YType::str, "process-name"}
{

    yang_name = "booted-process"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Boot::BootedProcess::~BootedProcess()
{
}

bool SystemProcess::NodeTable::Node::Boot::BootedProcess::has_data() const
{
    if (is_presence_container) return true;
    return start_time_stamp.is_set
	|| started.is_set
	|| level.is_set
	|| jid.is_set
	|| instance_id.is_set
	|| ready_time_stamp.is_set
	|| ready.is_set
	|| is_eoi_timeout.is_set
	|| process_name.is_set;
}

bool SystemProcess::NodeTable::Node::Boot::BootedProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time_stamp.yfilter)
	|| ydk::is_set(started.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(ready_time_stamp.yfilter)
	|| ydk::is_set(ready.yfilter)
	|| ydk::is_set(is_eoi_timeout.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string SystemProcess::NodeTable::Node::Boot::BootedProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "booted-process";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Boot::BootedProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time_stamp.is_set || is_set(start_time_stamp.yfilter)) leaf_name_data.push_back(start_time_stamp.get_name_leafdata());
    if (started.is_set || is_set(started.yfilter)) leaf_name_data.push_back(started.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (ready_time_stamp.is_set || is_set(ready_time_stamp.yfilter)) leaf_name_data.push_back(ready_time_stamp.get_name_leafdata());
    if (ready.is_set || is_set(ready.yfilter)) leaf_name_data.push_back(ready.get_name_leafdata());
    if (is_eoi_timeout.is_set || is_set(is_eoi_timeout.yfilter)) leaf_name_data.push_back(is_eoi_timeout.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Boot::BootedProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Boot::BootedProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Boot::BootedProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time-stamp")
    {
        start_time_stamp = value;
        start_time_stamp.value_namespace = name_space;
        start_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started")
    {
        started = value;
        started.value_namespace = name_space;
        started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time-stamp")
    {
        ready_time_stamp = value;
        ready_time_stamp.value_namespace = name_space;
        ready_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready")
    {
        ready = value;
        ready.value_namespace = name_space;
        ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-eoi-timeout")
    {
        is_eoi_timeout = value;
        is_eoi_timeout.value_namespace = name_space;
        is_eoi_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Boot::BootedProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time-stamp")
    {
        start_time_stamp.yfilter = yfilter;
    }
    if(value_path == "started")
    {
        started.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "ready-time-stamp")
    {
        ready_time_stamp.yfilter = yfilter;
    }
    if(value_path == "ready")
    {
        ready.yfilter = yfilter;
    }
    if(value_path == "is-eoi-timeout")
    {
        is_eoi_timeout.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Boot::BootedProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time-stamp" || name == "started" || name == "level" || name == "jid" || name == "instance-id" || name == "ready-time-stamp" || name == "ready" || name == "is-eoi-timeout" || name == "process-name")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Logs::Logs()
    :
    log{YType::str, "log"}
{

    yang_name = "logs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Logs::~Logs()
{
}

bool SystemProcess::NodeTable::Node::Logs::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SystemProcess::NodeTable::Node::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SystemProcess::NodeTable::Node::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SystemProcess::NodeTable::Node::Searchpath::Searchpath()
    :
    path{YType::str, "path"}
{

    yang_name = "searchpath"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemProcess::NodeTable::Node::Searchpath::~Searchpath()
{
}

bool SystemProcess::NodeTable::Node::Searchpath::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set;
}

bool SystemProcess::NodeTable::Node::Searchpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string SystemProcess::NodeTable::Node::Searchpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "searchpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemProcess::NodeTable::Node::Searchpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SystemProcess::NodeTable::Node::Searchpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SystemProcess::NodeTable::Node::Searchpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SystemProcess::NodeTable::Node::Searchpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void SystemProcess::NodeTable::Node::Searchpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool SystemProcess::NodeTable::Node::Searchpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

const Enum::YLeaf PlacementState::place_null {0, "place-null"};
const Enum::YLeaf PlacementState::place_placeable {1, "place-placeable"};
const Enum::YLeaf PlacementState::place_dlrsc_tracker {2, "place-dlrsc-tracker"};
const Enum::YLeaf PlacementState::place_rack_centric {3, "place-rack-centric"};
const Enum::YLeaf PlacementState::place_dsc_tracker {4, "place-dsc-tracker"};

const Enum::YLeaf ProcessState::none {0, "none"};
const Enum::YLeaf ProcessState::run {1, "run"};
const Enum::YLeaf ProcessState::exited {2, "exited"};
const Enum::YLeaf ProcessState::hold {3, "hold"};
const Enum::YLeaf ProcessState::wait {4, "wait"};
const Enum::YLeaf ProcessState::restart {5, "restart"};
const Enum::YLeaf ProcessState::initializing {6, "initializing"};
const Enum::YLeaf ProcessState::killed {7, "killed"};
const Enum::YLeaf ProcessState::queued {8, "queued"};
const Enum::YLeaf ProcessState::error {9, "error"};
const Enum::YLeaf ProcessState::tuple_set {10, "tuple-set"};
const Enum::YLeaf ProcessState::unknown {11, "unknown"};


}
}

