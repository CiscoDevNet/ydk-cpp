
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_process_memory_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_process_memory_oper {

MemoryUsageProcesses::MemoryUsageProcesses()
    :
    memory_usage_process(this, {"pid", "name"})
{

    yang_name = "memory-usage-processes"; yang_parent_name = "Cisco-IOS-XE-process-memory-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MemoryUsageProcesses::~MemoryUsageProcesses()
{
}

bool MemoryUsageProcesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<memory_usage_process.len(); index++)
    {
        if(memory_usage_process[index]->has_data())
            return true;
    }
    return false;
}

bool MemoryUsageProcesses::has_operation() const
{
    for (std::size_t index=0; index<memory_usage_process.len(); index++)
    {
        if(memory_usage_process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MemoryUsageProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-process-memory-oper:memory-usage-processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemoryUsageProcesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MemoryUsageProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-usage-process")
    {
        auto ent_ = std::make_shared<MemoryUsageProcesses::MemoryUsageProcess>();
        ent_->parent = this;
        memory_usage_process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MemoryUsageProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : memory_usage_process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MemoryUsageProcesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MemoryUsageProcesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MemoryUsageProcesses::clone_ptr() const
{
    return std::make_shared<MemoryUsageProcesses>();
}

std::string MemoryUsageProcesses::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MemoryUsageProcesses::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MemoryUsageProcesses::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MemoryUsageProcesses::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MemoryUsageProcesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-usage-process")
        return true;
    return false;
}

MemoryUsageProcesses::MemoryUsageProcess::MemoryUsageProcess()
    :
    pid{YType::uint32, "pid"},
    name{YType::str, "name"},
    tty{YType::uint16, "tty"},
    allocated_memory{YType::uint64, "allocated-memory"},
    freed_memory{YType::uint64, "freed-memory"},
    holding_memory{YType::uint64, "holding-memory"},
    get_buffers{YType::uint32, "get-buffers"},
    ret_buffers{YType::uint32, "ret-buffers"}
{

    yang_name = "memory-usage-process"; yang_parent_name = "memory-usage-processes"; is_top_level_class = false; has_list_ancestor = false; 
}

MemoryUsageProcesses::MemoryUsageProcess::~MemoryUsageProcess()
{
}

bool MemoryUsageProcesses::MemoryUsageProcess::has_data() const
{
    if (is_presence_container) return true;
    return pid.is_set
	|| name.is_set
	|| tty.is_set
	|| allocated_memory.is_set
	|| freed_memory.is_set
	|| holding_memory.is_set
	|| get_buffers.is_set
	|| ret_buffers.is_set;
}

bool MemoryUsageProcesses::MemoryUsageProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(allocated_memory.yfilter)
	|| ydk::is_set(freed_memory.yfilter)
	|| ydk::is_set(holding_memory.yfilter)
	|| ydk::is_set(get_buffers.yfilter)
	|| ydk::is_set(ret_buffers.yfilter);
}

std::string MemoryUsageProcesses::MemoryUsageProcess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-process-memory-oper:memory-usage-processes/" << get_segment_path();
    return path_buffer.str();
}

std::string MemoryUsageProcesses::MemoryUsageProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-usage-process";
    ADD_KEY_TOKEN(pid, "pid");
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MemoryUsageProcesses::MemoryUsageProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (allocated_memory.is_set || is_set(allocated_memory.yfilter)) leaf_name_data.push_back(allocated_memory.get_name_leafdata());
    if (freed_memory.is_set || is_set(freed_memory.yfilter)) leaf_name_data.push_back(freed_memory.get_name_leafdata());
    if (holding_memory.is_set || is_set(holding_memory.yfilter)) leaf_name_data.push_back(holding_memory.get_name_leafdata());
    if (get_buffers.is_set || is_set(get_buffers.yfilter)) leaf_name_data.push_back(get_buffers.get_name_leafdata());
    if (ret_buffers.is_set || is_set(ret_buffers.yfilter)) leaf_name_data.push_back(ret_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MemoryUsageProcesses::MemoryUsageProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MemoryUsageProcesses::MemoryUsageProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MemoryUsageProcesses::MemoryUsageProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory = value;
        allocated_memory.value_namespace = name_space;
        allocated_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-memory")
    {
        freed_memory = value;
        freed_memory.value_namespace = name_space;
        freed_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holding-memory")
    {
        holding_memory = value;
        holding_memory.value_namespace = name_space;
        holding_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-buffers")
    {
        get_buffers = value;
        get_buffers.value_namespace = name_space;
        get_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ret-buffers")
    {
        ret_buffers = value;
        ret_buffers.value_namespace = name_space;
        ret_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void MemoryUsageProcesses::MemoryUsageProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory.yfilter = yfilter;
    }
    if(value_path == "freed-memory")
    {
        freed_memory.yfilter = yfilter;
    }
    if(value_path == "holding-memory")
    {
        holding_memory.yfilter = yfilter;
    }
    if(value_path == "get-buffers")
    {
        get_buffers.yfilter = yfilter;
    }
    if(value_path == "ret-buffers")
    {
        ret_buffers.yfilter = yfilter;
    }
}

bool MemoryUsageProcesses::MemoryUsageProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "name" || name == "tty" || name == "allocated-memory" || name == "freed-memory" || name == "holding-memory" || name == "get-buffers" || name == "ret-buffers")
        return true;
    return false;
}


}
}

