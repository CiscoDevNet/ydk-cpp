
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_utd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_utd_oper {

UtdOperData::UtdOperData()
    :
    utd_engine_status(nullptr) // presence node
    , utd_ips_update_status(nullptr) // presence node
    , utd_urlf_update_status(nullptr) // presence node
{

    yang_name = "utd-oper-data"; yang_parent_name = "Cisco-IOS-XE-utd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

UtdOperData::~UtdOperData()
{
}

bool UtdOperData::has_data() const
{
    if (is_presence_container) return true;
    return (utd_engine_status !=  nullptr && utd_engine_status->has_data())
	|| (utd_ips_update_status !=  nullptr && utd_ips_update_status->has_data())
	|| (utd_urlf_update_status !=  nullptr && utd_urlf_update_status->has_data());
}

bool UtdOperData::has_operation() const
{
    return is_set(yfilter)
	|| (utd_engine_status !=  nullptr && utd_engine_status->has_operation())
	|| (utd_ips_update_status !=  nullptr && utd_ips_update_status->has_operation())
	|| (utd_urlf_update_status !=  nullptr && utd_urlf_update_status->has_operation());
}

std::string UtdOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd-engine-status")
    {
        if(utd_engine_status == nullptr)
        {
            utd_engine_status = std::make_shared<UtdOperData::UtdEngineStatus>();
        }
        return utd_engine_status;
    }

    if(child_yang_name == "utd-ips-update-status")
    {
        if(utd_ips_update_status == nullptr)
        {
            utd_ips_update_status = std::make_shared<UtdOperData::UtdIpsUpdateStatus>();
        }
        return utd_ips_update_status;
    }

    if(child_yang_name == "utd-urlf-update-status")
    {
        if(utd_urlf_update_status == nullptr)
        {
            utd_urlf_update_status = std::make_shared<UtdOperData::UtdUrlfUpdateStatus>();
        }
        return utd_urlf_update_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(utd_engine_status != nullptr)
    {
        children["utd-engine-status"] = utd_engine_status;
    }

    if(utd_ips_update_status != nullptr)
    {
        children["utd-ips-update-status"] = utd_ips_update_status;
    }

    if(utd_urlf_update_status != nullptr)
    {
        children["utd-urlf-update-status"] = utd_urlf_update_status;
    }

    return children;
}

void UtdOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UtdOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> UtdOperData::clone_ptr() const
{
    return std::make_shared<UtdOperData>();
}

std::string UtdOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string UtdOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function UtdOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> UtdOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool UtdOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utd-engine-status" || name == "utd-ips-update-status" || name == "utd-urlf-update-status")
        return true;
    return false;
}

UtdOperData::UtdEngineStatus::UtdEngineStatus()
    :
    version{YType::str, "version"},
    profile{YType::str, "profile"},
    status{YType::enumeration, "status"},
    reason{YType::str, "reason"},
    memory_usage{YType::str, "memory-usage"},
    memory_status{YType::enumeration, "memory-status"}
        ,
    utd_engine_instance_status(this, {"id"})
{

    yang_name = "utd-engine-status"; yang_parent_name = "utd-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

UtdOperData::UtdEngineStatus::~UtdEngineStatus()
{
}

bool UtdOperData::UtdEngineStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<utd_engine_instance_status.len(); index++)
    {
        if(utd_engine_instance_status[index]->has_data())
            return true;
    }
    return version.is_set
	|| profile.is_set
	|| status.is_set
	|| reason.is_set
	|| memory_usage.is_set
	|| memory_status.is_set;
}

bool UtdOperData::UtdEngineStatus::has_operation() const
{
    for (std::size_t index=0; index<utd_engine_instance_status.len(); index++)
    {
        if(utd_engine_instance_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(memory_status.yfilter);
}

std::string UtdOperData::UtdEngineStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string UtdOperData::UtdEngineStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd-engine-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::UtdEngineStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (memory_status.is_set || is_set(memory_status.yfilter)) leaf_name_data.push_back(memory_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::UtdEngineStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd-engine-instance-status")
    {
        auto c = std::make_shared<UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus>();
        c->parent = this;
        utd_engine_instance_status.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::UtdEngineStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : utd_engine_instance_status.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void UtdOperData::UtdEngineStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-status")
    {
        memory_status = value;
        memory_status.value_namespace = name_space;
        memory_status.value_namespace_prefix = name_space_prefix;
    }
}

void UtdOperData::UtdEngineStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "memory-status")
    {
        memory_status.yfilter = yfilter;
    }
}

bool UtdOperData::UtdEngineStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utd-engine-instance-status" || name == "version" || name == "profile" || name == "status" || name == "reason" || name == "memory-usage" || name == "memory-status")
        return true;
    return false;
}

UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::UtdEngineInstanceStatus()
    :
    id{YType::uint32, "id"},
    running{YType::boolean, "running"},
    status{YType::enumeration, "status"},
    reason{YType::str, "reason"}
{

    yang_name = "utd-engine-instance-status"; yang_parent_name = "utd-engine-status"; is_top_level_class = false; has_list_ancestor = false; 
}

UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::~UtdEngineInstanceStatus()
{
}

bool UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| running.is_set
	|| status.is_set
	|| reason.is_set;
}

bool UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data/utd-engine-status/" << get_segment_path();
    return path_buffer.str();
}

std::string UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd-engine-instance-status";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool UtdOperData::UtdEngineStatus::UtdEngineInstanceStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "running" || name == "status" || name == "reason")
        return true;
    return false;
}

UtdOperData::UtdIpsUpdateStatus::UtdIpsUpdateStatus()
    :
    ips_update_status(std::make_shared<UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus>())
{
    ips_update_status->parent = this;

    yang_name = "utd-ips-update-status"; yang_parent_name = "utd-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

UtdOperData::UtdIpsUpdateStatus::~UtdIpsUpdateStatus()
{
}

bool UtdOperData::UtdIpsUpdateStatus::has_data() const
{
    if (is_presence_container) return true;
    return (ips_update_status !=  nullptr && ips_update_status->has_data());
}

bool UtdOperData::UtdIpsUpdateStatus::has_operation() const
{
    return is_set(yfilter)
	|| (ips_update_status !=  nullptr && ips_update_status->has_operation());
}

std::string UtdOperData::UtdIpsUpdateStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string UtdOperData::UtdIpsUpdateStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd-ips-update-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::UtdIpsUpdateStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::UtdIpsUpdateStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ips-update-status")
    {
        if(ips_update_status == nullptr)
        {
            ips_update_status = std::make_shared<UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus>();
        }
        return ips_update_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::UtdIpsUpdateStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ips_update_status != nullptr)
    {
        children["ips-update-status"] = ips_update_status;
    }

    return children;
}

void UtdOperData::UtdIpsUpdateStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UtdOperData::UtdIpsUpdateStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UtdOperData::UtdIpsUpdateStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ips-update-status")
        return true;
    return false;
}

UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::IpsUpdateStatus()
    :
    version{YType::str, "version"},
    last_update_time{YType::str, "last-update-time"},
    last_update_status{YType::enumeration, "last-update-status"},
    last_update_reason{YType::str, "last-update-reason"},
    last_successful_update_time{YType::str, "last-successful-update-time"}
{

    yang_name = "ips-update-status"; yang_parent_name = "utd-ips-update-status"; is_top_level_class = false; has_list_ancestor = false; 
}

UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::~IpsUpdateStatus()
{
}

bool UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| last_update_time.is_set
	|| last_update_status.is_set
	|| last_update_reason.is_set
	|| last_successful_update_time.is_set;
}

bool UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(last_update_status.yfilter)
	|| ydk::is_set(last_update_reason.yfilter)
	|| ydk::is_set(last_successful_update_time.yfilter);
}

std::string UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data/utd-ips-update-status/" << get_segment_path();
    return path_buffer.str();
}

std::string UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ips-update-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (last_update_status.is_set || is_set(last_update_status.yfilter)) leaf_name_data.push_back(last_update_status.get_name_leafdata());
    if (last_update_reason.is_set || is_set(last_update_reason.yfilter)) leaf_name_data.push_back(last_update_reason.get_name_leafdata());
    if (last_successful_update_time.is_set || is_set(last_successful_update_time.yfilter)) leaf_name_data.push_back(last_successful_update_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-status")
    {
        last_update_status = value;
        last_update_status.value_namespace = name_space;
        last_update_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-reason")
    {
        last_update_reason = value;
        last_update_reason.value_namespace = name_space;
        last_update_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-successful-update-time")
    {
        last_successful_update_time = value;
        last_successful_update_time.value_namespace = name_space;
        last_successful_update_time.value_namespace_prefix = name_space_prefix;
    }
}

void UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "last-update-status")
    {
        last_update_status.yfilter = yfilter;
    }
    if(value_path == "last-update-reason")
    {
        last_update_reason.yfilter = yfilter;
    }
    if(value_path == "last-successful-update-time")
    {
        last_successful_update_time.yfilter = yfilter;
    }
}

bool UtdOperData::UtdIpsUpdateStatus::IpsUpdateStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "last-update-time" || name == "last-update-status" || name == "last-update-reason" || name == "last-successful-update-time")
        return true;
    return false;
}

UtdOperData::UtdUrlfUpdateStatus::UtdUrlfUpdateStatus()
    :
    urlf_update_status(std::make_shared<UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus>())
{
    urlf_update_status->parent = this;

    yang_name = "utd-urlf-update-status"; yang_parent_name = "utd-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

UtdOperData::UtdUrlfUpdateStatus::~UtdUrlfUpdateStatus()
{
}

bool UtdOperData::UtdUrlfUpdateStatus::has_data() const
{
    if (is_presence_container) return true;
    return (urlf_update_status !=  nullptr && urlf_update_status->has_data());
}

bool UtdOperData::UtdUrlfUpdateStatus::has_operation() const
{
    return is_set(yfilter)
	|| (urlf_update_status !=  nullptr && urlf_update_status->has_operation());
}

std::string UtdOperData::UtdUrlfUpdateStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string UtdOperData::UtdUrlfUpdateStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd-urlf-update-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::UtdUrlfUpdateStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::UtdUrlfUpdateStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "urlf-update-status")
    {
        if(urlf_update_status == nullptr)
        {
            urlf_update_status = std::make_shared<UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus>();
        }
        return urlf_update_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::UtdUrlfUpdateStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(urlf_update_status != nullptr)
    {
        children["urlf-update-status"] = urlf_update_status;
    }

    return children;
}

void UtdOperData::UtdUrlfUpdateStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UtdOperData::UtdUrlfUpdateStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UtdOperData::UtdUrlfUpdateStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "urlf-update-status")
        return true;
    return false;
}

UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::UrlfUpdateStatus()
    :
    version{YType::str, "version"},
    last_update_time{YType::str, "last-update-time"},
    last_update_status{YType::enumeration, "last-update-status"},
    last_update_reason{YType::str, "last-update-reason"},
    last_successful_update_time{YType::str, "last-successful-update-time"}
{

    yang_name = "urlf-update-status"; yang_parent_name = "utd-urlf-update-status"; is_top_level_class = false; has_list_ancestor = false; 
}

UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::~UrlfUpdateStatus()
{
}

bool UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| last_update_time.is_set
	|| last_update_status.is_set
	|| last_update_reason.is_set
	|| last_successful_update_time.is_set;
}

bool UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(last_update_status.yfilter)
	|| ydk::is_set(last_update_reason.yfilter)
	|| ydk::is_set(last_successful_update_time.yfilter);
}

std::string UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd-oper:utd-oper-data/utd-urlf-update-status/" << get_segment_path();
    return path_buffer.str();
}

std::string UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "urlf-update-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (last_update_status.is_set || is_set(last_update_status.yfilter)) leaf_name_data.push_back(last_update_status.get_name_leafdata());
    if (last_update_reason.is_set || is_set(last_update_reason.yfilter)) leaf_name_data.push_back(last_update_reason.get_name_leafdata());
    if (last_successful_update_time.is_set || is_set(last_successful_update_time.yfilter)) leaf_name_data.push_back(last_successful_update_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-status")
    {
        last_update_status = value;
        last_update_status.value_namespace = name_space;
        last_update_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-reason")
    {
        last_update_reason = value;
        last_update_reason.value_namespace = name_space;
        last_update_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-successful-update-time")
    {
        last_successful_update_time = value;
        last_successful_update_time.value_namespace = name_space;
        last_successful_update_time.value_namespace_prefix = name_space_prefix;
    }
}

void UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "last-update-status")
    {
        last_update_status.yfilter = yfilter;
    }
    if(value_path == "last-update-reason")
    {
        last_update_reason.yfilter = yfilter;
    }
    if(value_path == "last-successful-update-time")
    {
        last_successful_update_time.yfilter = yfilter;
    }
}

bool UtdOperData::UtdUrlfUpdateStatus::UrlfUpdateStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "last-update-time" || name == "last-update-status" || name == "last-update-reason" || name == "last-successful-update-time")
        return true;
    return false;
}

const Enum::YLeaf UtdOperStatusVal::utd_oper_status_unknown {0, "utd-oper-status-unknown"};
const Enum::YLeaf UtdOperStatusVal::utd_oper_status_green {1, "utd-oper-status-green"};
const Enum::YLeaf UtdOperStatusVal::utd_oper_status_yellow {2, "utd-oper-status-yellow"};
const Enum::YLeaf UtdOperStatusVal::utd_oper_status_red {3, "utd-oper-status-red"};
const Enum::YLeaf UtdOperStatusVal::utd_oper_status_down {4, "utd-oper-status-down"};


}
}

