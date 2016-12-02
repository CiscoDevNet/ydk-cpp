
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_wdsysmon_fd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wdsysmon_fd_oper {

SystemMonitoring::CpuUtilization::ProcessCpu::ProcessCpu()
    :
    	process_cpu_fifteen_minute{YType::uint32, "process-cpu-fifteen-minute"},
	 process_cpu_five_minute{YType::uint32, "process-cpu-five-minute"},
	 process_cpu_one_minute{YType::uint32, "process-cpu-one-minute"},
	 process_id{YType::uint32, "process-id"},
	 process_name{YType::str, "process-name"}
{
    yang_name = "process-cpu"; yang_parent_name = "cpu-utilization";
}

SystemMonitoring::CpuUtilization::ProcessCpu::~ProcessCpu()
{
}

bool SystemMonitoring::CpuUtilization::ProcessCpu::has_data() const
{
    return process_cpu_fifteen_minute.is_set
	|| process_cpu_five_minute.is_set
	|| process_cpu_one_minute.is_set
	|| process_id.is_set
	|| process_name.is_set;
}

bool SystemMonitoring::CpuUtilization::ProcessCpu::has_operation() const
{
    return is_set(operation)
	|| is_set(process_cpu_fifteen_minute.operation)
	|| is_set(process_cpu_five_minute.operation)
	|| is_set(process_cpu_one_minute.operation)
	|| is_set(process_id.operation)
	|| is_set(process_name.operation);
}

std::string SystemMonitoring::CpuUtilization::ProcessCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-cpu";

    return path_buffer.str();

}

EntityPath SystemMonitoring::CpuUtilization::ProcessCpu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_cpu_fifteen_minute.is_set || is_set(process_cpu_fifteen_minute.operation)) leaf_name_data.push_back(process_cpu_fifteen_minute.get_name_leafdata());
    if (process_cpu_five_minute.is_set || is_set(process_cpu_five_minute.operation)) leaf_name_data.push_back(process_cpu_five_minute.get_name_leafdata());
    if (process_cpu_one_minute.is_set || is_set(process_cpu_one_minute.operation)) leaf_name_data.push_back(process_cpu_one_minute.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SystemMonitoring::CpuUtilization::ProcessCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SystemMonitoring::CpuUtilization::ProcessCpu::get_children()
{
    return children;
}

void SystemMonitoring::CpuUtilization::ProcessCpu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-cpu-fifteen-minute")
    {
        process_cpu_fifteen_minute = value;
    }
    if(value_path == "process-cpu-five-minute")
    {
        process_cpu_five_minute = value;
    }
    if(value_path == "process-cpu-one-minute")
    {
        process_cpu_one_minute = value;
    }
    if(value_path == "process-id")
    {
        process_id = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

SystemMonitoring::CpuUtilization::CpuUtilization()
    :
    	node_name{YType::str, "node-name"},
	 total_cpu_fifteen_minute{YType::uint32, "total-cpu-fifteen-minute"},
	 total_cpu_five_minute{YType::uint32, "total-cpu-five-minute"},
	 total_cpu_one_minute{YType::uint32, "total-cpu-one-minute"}
{
    yang_name = "cpu-utilization"; yang_parent_name = "system-monitoring";
}

SystemMonitoring::CpuUtilization::~CpuUtilization()
{
}

bool SystemMonitoring::CpuUtilization::has_data() const
{
    for (std::size_t index=0; index<process_cpu.size(); index++)
    {
        if(process_cpu[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| total_cpu_fifteen_minute.is_set
	|| total_cpu_five_minute.is_set
	|| total_cpu_one_minute.is_set;
}

bool SystemMonitoring::CpuUtilization::has_operation() const
{
    for (std::size_t index=0; index<process_cpu.size(); index++)
    {
        if(process_cpu[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(total_cpu_fifteen_minute.operation)
	|| is_set(total_cpu_five_minute.operation)
	|| is_set(total_cpu_one_minute.operation);
}

std::string SystemMonitoring::CpuUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-utilization" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath SystemMonitoring::CpuUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wdsysmon-fd-oper:system-monitoring/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (total_cpu_fifteen_minute.is_set || is_set(total_cpu_fifteen_minute.operation)) leaf_name_data.push_back(total_cpu_fifteen_minute.get_name_leafdata());
    if (total_cpu_five_minute.is_set || is_set(total_cpu_five_minute.operation)) leaf_name_data.push_back(total_cpu_five_minute.get_name_leafdata());
    if (total_cpu_one_minute.is_set || is_set(total_cpu_one_minute.operation)) leaf_name_data.push_back(total_cpu_one_minute.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SystemMonitoring::CpuUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process-cpu")
    {
        for(auto const & c : process_cpu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SystemMonitoring::CpuUtilization::ProcessCpu>();
        c->parent = this;
        process_cpu.push_back(std::move(c));
        children[segment_path] = process_cpu.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SystemMonitoring::CpuUtilization::get_children()
{
    for (auto const & c : process_cpu)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SystemMonitoring::CpuUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "total-cpu-fifteen-minute")
    {
        total_cpu_fifteen_minute = value;
    }
    if(value_path == "total-cpu-five-minute")
    {
        total_cpu_five_minute = value;
    }
    if(value_path == "total-cpu-one-minute")
    {
        total_cpu_one_minute = value;
    }
}

SystemMonitoring::SystemMonitoring()
{
    yang_name = "system-monitoring"; yang_parent_name = "Cisco-IOS-XR-wdsysmon-fd-oper";
}

SystemMonitoring::~SystemMonitoring()
{
}

bool SystemMonitoring::has_data() const
{
    for (std::size_t index=0; index<cpu_utilization.size(); index++)
    {
        if(cpu_utilization[index]->has_data())
            return true;
    }
    return false;
}

bool SystemMonitoring::has_operation() const
{
    for (std::size_t index=0; index<cpu_utilization.size(); index++)
    {
        if(cpu_utilization[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SystemMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wdsysmon-fd-oper:system-monitoring";

    return path_buffer.str();

}

EntityPath SystemMonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SystemMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cpu-utilization")
    {
        for(auto const & c : cpu_utilization)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SystemMonitoring::CpuUtilization>();
        c->parent = this;
        cpu_utilization.push_back(std::move(c));
        children[segment_path] = cpu_utilization.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SystemMonitoring::get_children()
{
    for (auto const & c : cpu_utilization)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SystemMonitoring::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SystemMonitoring::clone_ptr()
{
    return std::make_unique<SystemMonitoring>();
}


}
}

