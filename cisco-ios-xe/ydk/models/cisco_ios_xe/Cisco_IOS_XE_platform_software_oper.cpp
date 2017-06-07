
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_platform_software_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_platform_software_oper {

CiscoPlatformSoftware::CiscoPlatformSoftware()
    :
    platform_software_interface_rp_active_brief_forwarding(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding>())
	,platform_software_status_control_processes(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses>())
{
    platform_software_interface_rp_active_brief_forwarding->parent = this;

    platform_software_status_control_processes->parent = this;

    yang_name = "cisco-platform-software"; yang_parent_name = "Cisco-IOS-XE-platform-software-oper";
}

CiscoPlatformSoftware::~CiscoPlatformSoftware()
{
}

bool CiscoPlatformSoftware::has_data() const
{
    return (platform_software_interface_rp_active_brief_forwarding !=  nullptr && platform_software_interface_rp_active_brief_forwarding->has_data())
	|| (platform_software_status_control_processes !=  nullptr && platform_software_status_control_processes->has_data());
}

bool CiscoPlatformSoftware::has_operation() const
{
    return is_set(operation)
	|| (platform_software_interface_rp_active_brief_forwarding !=  nullptr && platform_software_interface_rp_active_brief_forwarding->has_operation())
	|| (platform_software_status_control_processes !=  nullptr && platform_software_status_control_processes->has_operation());
}

std::string CiscoPlatformSoftware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "platform-software-interface-rp-active-brief-forwarding")
    {
        if(platform_software_interface_rp_active_brief_forwarding == nullptr)
        {
            platform_software_interface_rp_active_brief_forwarding = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding>();
        }
        return platform_software_interface_rp_active_brief_forwarding;
    }

    if(child_yang_name == "platform-software-status-control-processes")
    {
        if(platform_software_status_control_processes == nullptr)
        {
            platform_software_status_control_processes = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses>();
        }
        return platform_software_status_control_processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(platform_software_interface_rp_active_brief_forwarding != nullptr)
    {
        children["platform-software-interface-rp-active-brief-forwarding"] = platform_software_interface_rp_active_brief_forwarding;
    }

    if(platform_software_status_control_processes != nullptr)
    {
        children["platform-software-status-control-processes"] = platform_software_status_control_processes;
    }

    return children;
}

void CiscoPlatformSoftware::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoPlatformSoftware::clone_ptr() const
{
    return std::make_shared<CiscoPlatformSoftware>();
}

std::string CiscoPlatformSoftware::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoPlatformSoftware::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoPlatformSoftware::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::PlatformSoftwareStatusControlProcesses()
    :
    control_processes(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses>())
{
    control_processes->parent = this;

    yang_name = "platform-software-status-control-processes"; yang_parent_name = "cisco-platform-software";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::~PlatformSoftwareStatusControlProcesses()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::has_data() const
{
    return (control_processes !=  nullptr && control_processes->has_data());
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::has_operation() const
{
    return is_set(operation)
	|| (control_processes !=  nullptr && control_processes->has_operation());
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-software-status-control-processes";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control-processes")
    {
        if(control_processes == nullptr)
        {
            control_processes = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses>();
        }
        return control_processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control_processes != nullptr)
    {
        children["control-processes"] = control_processes;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::set_value(const std::string & value_path, std::string value)
{
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcesses()
{
    yang_name = "control-processes"; yang_parent_name = "platform-software-status-control-processes";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::~ControlProcesses()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::has_data() const
{
    for (std::size_t index=0; index<control_process.size(); index++)
    {
        if(control_process[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::has_operation() const
{
    for (std::size_t index=0; index<control_process.size(); index++)
    {
        if(control_process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-processes";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/platform-software-status-control-processes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control-process")
    {
        for(auto const & c : control_process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess>();
        c->parent = this;
        control_process.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : control_process)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::set_value(const std::string & value_path, std::string value)
{
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::ControlProcess()
    :
    name{YType::str, "name"},
    status{YType::str, "status"},
    updated{YType::uint64, "updated"}
    	,
    load_average_stats(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats>())
	,load_avg_minutes(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes>())
	,memory_stats(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats>())
	,per_core_stats(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats>())
{
    load_average_stats->parent = this;

    load_avg_minutes->parent = this;

    memory_stats->parent = this;

    per_core_stats->parent = this;

    yang_name = "control-process"; yang_parent_name = "control-processes";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::~ControlProcess()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::has_data() const
{
    return name.is_set
	|| status.is_set
	|| updated.is_set
	|| (load_average_stats !=  nullptr && load_average_stats->has_data())
	|| (load_avg_minutes !=  nullptr && load_avg_minutes->has_data())
	|| (memory_stats !=  nullptr && memory_stats->has_data())
	|| (per_core_stats !=  nullptr && per_core_stats->has_data());
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(status.operation)
	|| is_set(updated.operation)
	|| (load_average_stats !=  nullptr && load_average_stats->has_operation())
	|| (load_avg_minutes !=  nullptr && load_avg_minutes->has_operation())
	|| (memory_stats !=  nullptr && memory_stats->has_operation())
	|| (per_core_stats !=  nullptr && per_core_stats->has_operation());
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-process" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/platform-software-status-control-processes/control-processes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (updated.is_set || is_set(updated.operation)) leaf_name_data.push_back(updated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-average-stats")
    {
        if(load_average_stats == nullptr)
        {
            load_average_stats = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats>();
        }
        return load_average_stats;
    }

    if(child_yang_name == "load-avg-minutes")
    {
        if(load_avg_minutes == nullptr)
        {
            load_avg_minutes = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes>();
        }
        return load_avg_minutes;
    }

    if(child_yang_name == "memory-stats")
    {
        if(memory_stats == nullptr)
        {
            memory_stats = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats>();
        }
        return memory_stats;
    }

    if(child_yang_name == "per-core-stats")
    {
        if(per_core_stats == nullptr)
        {
            per_core_stats = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats>();
        }
        return per_core_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_average_stats != nullptr)
    {
        children["load-average-stats"] = load_average_stats;
    }

    if(load_avg_minutes != nullptr)
    {
        children["load-avg-minutes"] = load_avg_minutes;
    }

    if(memory_stats != nullptr)
    {
        children["memory-stats"] = memory_stats;
    }

    if(per_core_stats != nullptr)
    {
        children["per-core-stats"] = per_core_stats;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "updated")
    {
        updated = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::LoadAverageStats()
    :
    load_average_status{YType::str, "load-average-status"}
{
    yang_name = "load-average-stats"; yang_parent_name = "control-process";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::~LoadAverageStats()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::has_data() const
{
    return load_average_status.is_set;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::has_operation() const
{
    return is_set(operation)
	|| is_set(load_average_status.operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-average-stats";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadAverageStats' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_average_status.is_set || is_set(load_average_status.operation)) leaf_name_data.push_back(load_average_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-average-status")
    {
        load_average_status = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinutes()
{
    yang_name = "load-avg-minutes"; yang_parent_name = "control-process";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::~LoadAvgMinutes()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::has_data() const
{
    for (std::size_t index=0; index<load_avg_minute.size(); index++)
    {
        if(load_avg_minute[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::has_operation() const
{
    for (std::size_t index=0; index<load_avg_minute.size(); index++)
    {
        if(load_avg_minute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-avg-minutes";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadAvgMinutes' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-avg-minute")
    {
        for(auto const & c : load_avg_minute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute>();
        c->parent = this;
        load_avg_minute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : load_avg_minute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::set_value(const std::string & value_path, std::string value)
{
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::LoadAvgMinute()
    :
    number{YType::uint64, "number"},
    average{YType::str, "average"}
    	,
    status(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status>())
{
    status->parent = this;

    yang_name = "load-avg-minute"; yang_parent_name = "load-avg-minutes";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::~LoadAvgMinute()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::has_data() const
{
    return number.is_set
	|| average.is_set
	|| (status !=  nullptr && status->has_data());
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(average.operation)
	|| (status !=  nullptr && status->has_operation());
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-avg-minute" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadAvgMinute' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "average")
    {
        average = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::Status()
    :
    condition{YType::str, "condition"},
    threshold_status{YType::str, "threshold-status"},
    threshold_value{YType::str, "threshold-value"}
{
    yang_name = "status"; yang_parent_name = "load-avg-minute";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::~Status()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::has_data() const
{
    return condition.is_set
	|| threshold_status.is_set
	|| threshold_value.is_set;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(condition.operation)
	|| is_set(threshold_status.operation)
	|| is_set(threshold_value.operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (condition.is_set || is_set(condition.operation)) leaf_name_data.push_back(condition.get_name_leafdata());
    if (threshold_status.is_set || is_set(threshold_status.operation)) leaf_name_data.push_back(threshold_status.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "condition")
    {
        condition = value;
    }
    if(value_path == "threshold-status")
    {
        threshold_status = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::MemoryStats()
    :
    available_number{YType::uint64, "available-number"},
    available_percent{YType::uint64, "available-percent"},
    committed_number{YType::uint64, "committed-number"},
    committed_percent{YType::uint8, "committed-percent"},
    free_number{YType::uint64, "free-number"},
    free_percent{YType::uint64, "free-percent"},
    memory_status{YType::str, "memory-status"},
    total{YType::uint64, "total"},
    used_number{YType::uint64, "used-number"},
    used_percent{YType::uint64, "used-percent"}
    	,
    status(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status>())
{
    status->parent = this;

    yang_name = "memory-stats"; yang_parent_name = "control-process";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::~MemoryStats()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::has_data() const
{
    return available_number.is_set
	|| available_percent.is_set
	|| committed_number.is_set
	|| committed_percent.is_set
	|| free_number.is_set
	|| free_percent.is_set
	|| memory_status.is_set
	|| total.is_set
	|| used_number.is_set
	|| used_percent.is_set
	|| (status !=  nullptr && status->has_data());
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::has_operation() const
{
    return is_set(operation)
	|| is_set(available_number.operation)
	|| is_set(available_percent.operation)
	|| is_set(committed_number.operation)
	|| is_set(committed_percent.operation)
	|| is_set(free_number.operation)
	|| is_set(free_percent.operation)
	|| is_set(memory_status.operation)
	|| is_set(total.operation)
	|| is_set(used_number.operation)
	|| is_set(used_percent.operation)
	|| (status !=  nullptr && status->has_operation());
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-stats";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemoryStats' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (available_number.is_set || is_set(available_number.operation)) leaf_name_data.push_back(available_number.get_name_leafdata());
    if (available_percent.is_set || is_set(available_percent.operation)) leaf_name_data.push_back(available_percent.get_name_leafdata());
    if (committed_number.is_set || is_set(committed_number.operation)) leaf_name_data.push_back(committed_number.get_name_leafdata());
    if (committed_percent.is_set || is_set(committed_percent.operation)) leaf_name_data.push_back(committed_percent.get_name_leafdata());
    if (free_number.is_set || is_set(free_number.operation)) leaf_name_data.push_back(free_number.get_name_leafdata());
    if (free_percent.is_set || is_set(free_percent.operation)) leaf_name_data.push_back(free_percent.get_name_leafdata());
    if (memory_status.is_set || is_set(memory_status.operation)) leaf_name_data.push_back(memory_status.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used_number.is_set || is_set(used_number.operation)) leaf_name_data.push_back(used_number.get_name_leafdata());
    if (used_percent.is_set || is_set(used_percent.operation)) leaf_name_data.push_back(used_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "available-number")
    {
        available_number = value;
    }
    if(value_path == "available-percent")
    {
        available_percent = value;
    }
    if(value_path == "committed-number")
    {
        committed_number = value;
    }
    if(value_path == "committed-percent")
    {
        committed_percent = value;
    }
    if(value_path == "free-number")
    {
        free_number = value;
    }
    if(value_path == "free-percent")
    {
        free_percent = value;
    }
    if(value_path == "memory-status")
    {
        memory_status = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
    if(value_path == "used-number")
    {
        used_number = value;
    }
    if(value_path == "used-percent")
    {
        used_percent = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::Status()
    :
    condition{YType::str, "condition"},
    threshold_status{YType::str, "threshold-status"},
    threshold_value_percent{YType::uint64, "threshold-value-percent"}
{
    yang_name = "status"; yang_parent_name = "memory-stats";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::~Status()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::has_data() const
{
    return condition.is_set
	|| threshold_status.is_set
	|| threshold_value_percent.is_set;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(condition.operation)
	|| is_set(threshold_status.operation)
	|| is_set(threshold_value_percent.operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (condition.is_set || is_set(condition.operation)) leaf_name_data.push_back(condition.get_name_leafdata());
    if (threshold_status.is_set || is_set(threshold_status.operation)) leaf_name_data.push_back(threshold_status.get_name_leafdata());
    if (threshold_value_percent.is_set || is_set(threshold_value_percent.operation)) leaf_name_data.push_back(threshold_value_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "condition")
    {
        condition = value;
    }
    if(value_path == "threshold-status")
    {
        threshold_status = value;
    }
    if(value_path == "threshold-value-percent")
    {
        threshold_value_percent = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStats()
{
    yang_name = "per-core-stats"; yang_parent_name = "control-process";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::~PerCoreStats()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::has_data() const
{
    for (std::size_t index=0; index<per_core_stat.size(); index++)
    {
        if(per_core_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::has_operation() const
{
    for (std::size_t index=0; index<per_core_stat.size(); index++)
    {
        if(per_core_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-core-stats";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerCoreStats' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-core-stat")
    {
        for(auto const & c : per_core_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat>();
        c->parent = this;
        per_core_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : per_core_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::set_value(const std::string & value_path, std::string value)
{
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::PerCoreStat()
    :
    name{YType::str, "name"},
    idle{YType::str, "idle"},
    io_wait{YType::str, "io-wait"},
    irq{YType::str, "irq"},
    nice{YType::str, "nice"},
    sirq{YType::str, "sirq"},
    system{YType::str, "system"},
    user{YType::str, "user"}
{
    yang_name = "per-core-stat"; yang_parent_name = "per-core-stats";
}

CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::~PerCoreStat()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::has_data() const
{
    return name.is_set
	|| idle.is_set
	|| io_wait.is_set
	|| irq.is_set
	|| nice.is_set
	|| sirq.is_set
	|| system.is_set
	|| user.is_set;
}

bool CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(idle.operation)
	|| is_set(io_wait.operation)
	|| is_set(irq.operation)
	|| is_set(nice.operation)
	|| is_set(sirq.operation)
	|| is_set(system.operation)
	|| is_set(user.operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-core-stat" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerCoreStat' in Cisco_IOS_XE_platform_software_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (idle.is_set || is_set(idle.operation)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (io_wait.is_set || is_set(io_wait.operation)) leaf_name_data.push_back(io_wait.get_name_leafdata());
    if (irq.is_set || is_set(irq.operation)) leaf_name_data.push_back(irq.get_name_leafdata());
    if (nice.is_set || is_set(nice.operation)) leaf_name_data.push_back(nice.get_name_leafdata());
    if (sirq.is_set || is_set(sirq.operation)) leaf_name_data.push_back(sirq.get_name_leafdata());
    if (system.is_set || is_set(system.operation)) leaf_name_data.push_back(system.get_name_leafdata());
    if (user.is_set || is_set(user.operation)) leaf_name_data.push_back(user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "idle")
    {
        idle = value;
    }
    if(value_path == "io-wait")
    {
        io_wait = value;
    }
    if(value_path == "irq")
    {
        irq = value;
    }
    if(value_path == "nice")
    {
        nice = value;
    }
    if(value_path == "sirq")
    {
        sirq = value;
    }
    if(value_path == "system")
    {
        system = value;
    }
    if(value_path == "user")
    {
        user = value;
    }
}

CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::PlatformSoftwareInterfaceRpActiveBriefForwarding()
    :
    xos_interfaces(std::make_shared<CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces>())
{
    xos_interfaces->parent = this;

    yang_name = "platform-software-interface-rp-active-brief-forwarding"; yang_parent_name = "cisco-platform-software";
}

CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::~PlatformSoftwareInterfaceRpActiveBriefForwarding()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::has_data() const
{
    return (xos_interfaces !=  nullptr && xos_interfaces->has_data());
}

bool CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::has_operation() const
{
    return is_set(operation)
	|| (xos_interfaces !=  nullptr && xos_interfaces->has_operation());
}

std::string CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-software-interface-rp-active-brief-forwarding";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xos-interfaces")
    {
        if(xos_interfaces == nullptr)
        {
            xos_interfaces = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces>();
        }
        return xos_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xos_interfaces != nullptr)
    {
        children["xos-interfaces"] = xos_interfaces;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::set_value(const std::string & value_path, std::string value)
{
}

CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterfaces()
{
    yang_name = "xos-interfaces"; yang_parent_name = "platform-software-interface-rp-active-brief-forwarding";
}

CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::~XosInterfaces()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::has_data() const
{
    for (std::size_t index=0; index<xos_interface.size(); index++)
    {
        if(xos_interface[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::has_operation() const
{
    for (std::size_t index=0; index<xos_interface.size(); index++)
    {
        if(xos_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xos-interfaces";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/platform-software-interface-rp-active-brief-forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xos-interface")
    {
        for(auto const & c : xos_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface>();
        c->parent = this;
        xos_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xos_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::set_value(const std::string & value_path, std::string value)
{
}

CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::XosInterface()
    :
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    qfp_id{YType::uint64, "qfp-id"}
{
    yang_name = "xos-interface"; yang_parent_name = "xos-interfaces";
}

CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::~XosInterface()
{
}

bool CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::has_data() const
{
    return name.is_set
	|| id.is_set
	|| qfp_id.is_set;
}

bool CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(id.operation)
	|| is_set(qfp_id.operation);
}

std::string CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xos-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-platform-software-oper:cisco-platform-software/platform-software-interface-rp-active-brief-forwarding/xos-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (qfp_id.is_set || is_set(qfp_id.operation)) leaf_name_data.push_back(qfp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "qfp-id")
    {
        qfp_id = value;
    }
}


}
}

