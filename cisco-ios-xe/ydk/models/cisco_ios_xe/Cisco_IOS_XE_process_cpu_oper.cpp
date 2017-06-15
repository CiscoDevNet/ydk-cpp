
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_process_cpu_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_process_cpu_oper {

CpuUsage::CpuUsage()
    :
    cpu_utilization_(std::make_shared<CpuUsage::CpuUtilization>())
{
    cpu_utilization_->parent = this;

    yang_name = "cpu-usage"; yang_parent_name = "Cisco-IOS-XE-process-cpu-oper";
}

CpuUsage::~CpuUsage()
{
}

bool CpuUsage::has_data() const
{
    return (cpu_utilization_ !=  nullptr && cpu_utilization_->has_data());
}

bool CpuUsage::has_operation() const
{
    return is_set(operation)
	|| (cpu_utilization_ !=  nullptr && cpu_utilization_->has_operation());
}

std::string CpuUsage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-process-cpu-oper:cpu-usage";

    return path_buffer.str();

}

const EntityPath CpuUsage::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CpuUsage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-utilization")
    {
        if(cpu_utilization_ == nullptr)
        {
            cpu_utilization_ = std::make_shared<CpuUsage::CpuUtilization>();
        }
        return cpu_utilization_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CpuUsage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpu_utilization_ != nullptr)
    {
        children["cpu-utilization"] = cpu_utilization_;
    }

    return children;
}

void CpuUsage::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CpuUsage::clone_ptr() const
{
    return std::make_shared<CpuUsage>();
}

std::string CpuUsage::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CpuUsage::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CpuUsage::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CpuUsage::CpuUtilization::CpuUtilization()
    :
    five_minutes{YType::uint8, "five-minutes"},
    five_seconds{YType::uint8, "five-seconds"},
    five_seconds_intr{YType::uint8, "five-seconds-intr"},
    one_minute{YType::uint8, "one-minute"}
    	,
    cpu_usage_processes_(std::make_shared<CpuUsage::CpuUtilization::CpuUsageProcesses>())
{
    cpu_usage_processes_->parent = this;

    yang_name = "cpu-utilization"; yang_parent_name = "cpu-usage";
}

CpuUsage::CpuUtilization::~CpuUtilization()
{
}

bool CpuUsage::CpuUtilization::has_data() const
{
    return five_minutes.is_set
	|| five_seconds.is_set
	|| five_seconds_intr.is_set
	|| one_minute.is_set
	|| (cpu_usage_processes_ !=  nullptr && cpu_usage_processes_->has_data());
}

bool CpuUsage::CpuUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(five_minutes.operation)
	|| is_set(five_seconds.operation)
	|| is_set(five_seconds_intr.operation)
	|| is_set(one_minute.operation)
	|| (cpu_usage_processes_ !=  nullptr && cpu_usage_processes_->has_operation());
}

std::string CpuUsage::CpuUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-utilization";

    return path_buffer.str();

}

const EntityPath CpuUsage::CpuUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-process-cpu-oper:cpu-usage/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (five_minutes.is_set || is_set(five_minutes.operation)) leaf_name_data.push_back(five_minutes.get_name_leafdata());
    if (five_seconds.is_set || is_set(five_seconds.operation)) leaf_name_data.push_back(five_seconds.get_name_leafdata());
    if (five_seconds_intr.is_set || is_set(five_seconds_intr.operation)) leaf_name_data.push_back(five_seconds_intr.get_name_leafdata());
    if (one_minute.is_set || is_set(one_minute.operation)) leaf_name_data.push_back(one_minute.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CpuUsage::CpuUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-usage-processes")
    {
        if(cpu_usage_processes_ == nullptr)
        {
            cpu_usage_processes_ = std::make_shared<CpuUsage::CpuUtilization::CpuUsageProcesses>();
        }
        return cpu_usage_processes_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CpuUsage::CpuUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpu_usage_processes_ != nullptr)
    {
        children["cpu-usage-processes"] = cpu_usage_processes_;
    }

    return children;
}

void CpuUsage::CpuUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "five-minutes")
    {
        five_minutes = value;
    }
    if(value_path == "five-seconds")
    {
        five_seconds = value;
    }
    if(value_path == "five-seconds-intr")
    {
        five_seconds_intr = value;
    }
    if(value_path == "one-minute")
    {
        one_minute = value;
    }
}

CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcesses()
{
    yang_name = "cpu-usage-processes"; yang_parent_name = "cpu-utilization";
}

CpuUsage::CpuUtilization::CpuUsageProcesses::~CpuUsageProcesses()
{
}

bool CpuUsage::CpuUtilization::CpuUsageProcesses::has_data() const
{
    for (std::size_t index=0; index<cpu_usage_process_.size(); index++)
    {
        if(cpu_usage_process_[index]->has_data())
            return true;
    }
    return false;
}

bool CpuUsage::CpuUtilization::CpuUsageProcesses::has_operation() const
{
    for (std::size_t index=0; index<cpu_usage_process_.size(); index++)
    {
        if(cpu_usage_process_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CpuUsage::CpuUtilization::CpuUsageProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-usage-processes";

    return path_buffer.str();

}

const EntityPath CpuUsage::CpuUtilization::CpuUsageProcesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-process-cpu-oper:cpu-usage/cpu-utilization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CpuUsage::CpuUtilization::CpuUsageProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-usage-process")
    {
        for(auto const & c : cpu_usage_process_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess>();
        c->parent = this;
        cpu_usage_process_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CpuUsage::CpuUtilization::CpuUsageProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_usage_process_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CpuUsage::CpuUtilization::CpuUsageProcesses::set_value(const std::string & value_path, std::string value)
{
}

CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::CpuUsageProcess()
    :
    pid{YType::uint32, "pid"},
    name{YType::str, "name"},
    avg_run_time{YType::uint64, "avg-run-time"},
    five_minutes{YType::str, "five-minutes"},
    five_seconds{YType::str, "five-seconds"},
    invocation_count{YType::uint32, "invocation-count"},
    one_minute{YType::str, "one-minute"},
    total_run_time{YType::uint64, "total-run-time"},
    tty{YType::uint16, "tty"}
{
    yang_name = "cpu-usage-process"; yang_parent_name = "cpu-usage-processes";
}

CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::~CpuUsageProcess()
{
}

bool CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::has_data() const
{
    return pid.is_set
	|| name.is_set
	|| avg_run_time.is_set
	|| five_minutes.is_set
	|| five_seconds.is_set
	|| invocation_count.is_set
	|| one_minute.is_set
	|| total_run_time.is_set
	|| tty.is_set;
}

bool CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::has_operation() const
{
    return is_set(operation)
	|| is_set(pid.operation)
	|| is_set(name.operation)
	|| is_set(avg_run_time.operation)
	|| is_set(five_minutes.operation)
	|| is_set(five_seconds.operation)
	|| is_set(invocation_count.operation)
	|| is_set(one_minute.operation)
	|| is_set(total_run_time.operation)
	|| is_set(tty.operation);
}

std::string CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-usage-process" <<"[pid='" <<pid <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-process-cpu-oper:cpu-usage/cpu-utilization/cpu-usage-processes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (avg_run_time.is_set || is_set(avg_run_time.operation)) leaf_name_data.push_back(avg_run_time.get_name_leafdata());
    if (five_minutes.is_set || is_set(five_minutes.operation)) leaf_name_data.push_back(five_minutes.get_name_leafdata());
    if (five_seconds.is_set || is_set(five_seconds.operation)) leaf_name_data.push_back(five_seconds.get_name_leafdata());
    if (invocation_count.is_set || is_set(invocation_count.operation)) leaf_name_data.push_back(invocation_count.get_name_leafdata());
    if (one_minute.is_set || is_set(one_minute.operation)) leaf_name_data.push_back(one_minute.get_name_leafdata());
    if (total_run_time.is_set || is_set(total_run_time.operation)) leaf_name_data.push_back(total_run_time.get_name_leafdata());
    if (tty.is_set || is_set(tty.operation)) leaf_name_data.push_back(tty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "avg-run-time")
    {
        avg_run_time = value;
    }
    if(value_path == "five-minutes")
    {
        five_minutes = value;
    }
    if(value_path == "five-seconds")
    {
        five_seconds = value;
    }
    if(value_path == "invocation-count")
    {
        invocation_count = value;
    }
    if(value_path == "one-minute")
    {
        one_minute = value;
    }
    if(value_path == "total-run-time")
    {
        total_run_time = value;
    }
    if(value_path == "tty")
    {
        tty = value;
    }
}


}
}

