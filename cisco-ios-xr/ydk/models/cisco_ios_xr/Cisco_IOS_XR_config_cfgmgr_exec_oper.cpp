
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_exec_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

CfgHistGl::CfgHistGl()
{

    yang_name = "cfg-hist-gl"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-exec-oper"; is_top_level_class = true; has_list_ancestor = false;
}

CfgHistGl::~CfgHistGl()
{
}

bool CfgHistGl::has_data() const
{
    for (std::size_t index=0; index<record_type.size(); index++)
    {
        if(record_type[index]->has_data())
            return true;
    }
    return false;
}

bool CfgHistGl::has_operation() const
{
    for (std::size_t index=0; index<record_type.size(); index++)
    {
        if(record_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CfgHistGl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:cfg-hist-gl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "record-type")
    {
        for(auto const & c : record_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CfgHistGl::RecordType>();
        c->parent = this;
        record_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : record_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CfgHistGl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CfgHistGl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CfgHistGl::clone_ptr() const
{
    return std::make_shared<CfgHistGl>();
}

std::string CfgHistGl::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CfgHistGl::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CfgHistGl::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CfgHistGl::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CfgHistGl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-type")
        return true;
    return false;
}

CfgHistGl::RecordType::RecordType()
    :
    record_type{YType::str, "record-type"}
{

    yang_name = "record-type"; yang_parent_name = "cfg-hist-gl"; is_top_level_class = false; has_list_ancestor = false;
}

CfgHistGl::RecordType::~RecordType()
{
}

bool CfgHistGl::RecordType::has_data() const
{
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_data())
            return true;
    }
    return record_type.is_set;
}

bool CfgHistGl::RecordType::has_operation() const
{
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(record_type.yfilter);
}

std::string CfgHistGl::RecordType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:cfg-hist-gl/" << get_segment_path();
    return path_buffer.str();
}

std::string CfgHistGl::RecordType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-type" <<"[record-type='" <<record_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_type.is_set || is_set(record_type.yfilter)) leaf_name_data.push_back(record_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "record")
    {
        for(auto const & c : record)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CfgHistGl::RecordType::Record>();
        c->parent = this;
        record.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : record)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CfgHistGl::RecordType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-type")
    {
        record_type = value;
        record_type.value_namespace = name_space;
        record_type.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-type")
    {
        record_type.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record" || name == "record-type")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Record()
    :
    record{YType::int32, "record"},
    record_type{YType::enumeration, "record-type"},
    timestamp{YType::uint32, "timestamp"}
    	,
    info(std::make_shared<CfgHistGl::RecordType::Record::Info>())
{
    info->parent = this;

    yang_name = "record"; yang_parent_name = "record-type"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::~Record()
{
}

bool CfgHistGl::RecordType::Record::has_data() const
{
    return record.is_set
	|| record_type.is_set
	|| timestamp.is_set
	|| (info !=  nullptr && info->has_data());
}

bool CfgHistGl::RecordType::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record.yfilter)
	|| ydk::is_set(record_type.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (info !=  nullptr && info->has_operation());
}

std::string CfgHistGl::RecordType::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record" <<"[record='" <<record <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record.is_set || is_set(record.yfilter)) leaf_name_data.push_back(record.get_name_leafdata());
    if (record_type.is_set || is_set(record_type.yfilter)) leaf_name_data.push_back(record_type.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<CfgHistGl::RecordType::Record::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void CfgHistGl::RecordType::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record")
    {
        record = value;
        record.value_namespace = name_space;
        record.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-type")
    {
        record_type = value;
        record_type.value_namespace = name_space;
        record_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record")
    {
        record.yfilter = yfilter;
    }
    if(value_path == "record-type")
    {
        record_type.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "record" || name == "record-type" || name == "timestamp")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::Info()
    :
    a{YType::uint32, "a"},
    type{YType::enumeration, "type"}
    	,
    alarm_info(std::make_shared<CfgHistGl::RecordType::Record::Info::AlarmInfo>())
	,backup_info(std::make_shared<CfgHistGl::RecordType::Record::Info::BackupInfo>())
	,cfscheck_info(std::make_shared<CfgHistGl::RecordType::Record::Info::CfscheckInfo>())
	,commit_info(std::make_shared<CfgHistGl::RecordType::Record::Info::CommitInfo>())
	,oir_info(std::make_shared<CfgHistGl::RecordType::Record::Info::OirInfo>())
	,shutdown_info(std::make_shared<CfgHistGl::RecordType::Record::Info::ShutdownInfo>())
	,startup_info(std::make_shared<CfgHistGl::RecordType::Record::Info::StartupInfo>())
{
    alarm_info->parent = this;
    backup_info->parent = this;
    cfscheck_info->parent = this;
    commit_info->parent = this;
    oir_info->parent = this;
    shutdown_info->parent = this;
    startup_info->parent = this;

    yang_name = "info"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::~Info()
{
}

bool CfgHistGl::RecordType::Record::Info::has_data() const
{
    return a.is_set
	|| type.is_set
	|| (alarm_info !=  nullptr && alarm_info->has_data())
	|| (backup_info !=  nullptr && backup_info->has_data())
	|| (cfscheck_info !=  nullptr && cfscheck_info->has_data())
	|| (commit_info !=  nullptr && commit_info->has_data())
	|| (oir_info !=  nullptr && oir_info->has_data())
	|| (shutdown_info !=  nullptr && shutdown_info->has_data())
	|| (startup_info !=  nullptr && startup_info->has_data());
}

bool CfgHistGl::RecordType::Record::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (alarm_info !=  nullptr && alarm_info->has_operation())
	|| (backup_info !=  nullptr && backup_info->has_operation())
	|| (cfscheck_info !=  nullptr && cfscheck_info->has_operation())
	|| (commit_info !=  nullptr && commit_info->has_operation())
	|| (oir_info !=  nullptr && oir_info->has_operation())
	|| (shutdown_info !=  nullptr && shutdown_info->has_operation())
	|| (startup_info !=  nullptr && startup_info->has_operation());
}

std::string CfgHistGl::RecordType::Record::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a.is_set || is_set(a.yfilter)) leaf_name_data.push_back(a.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        if(alarm_info == nullptr)
        {
            alarm_info = std::make_shared<CfgHistGl::RecordType::Record::Info::AlarmInfo>();
        }
        return alarm_info;
    }

    if(child_yang_name == "backup-info")
    {
        if(backup_info == nullptr)
        {
            backup_info = std::make_shared<CfgHistGl::RecordType::Record::Info::BackupInfo>();
        }
        return backup_info;
    }

    if(child_yang_name == "cfscheck-info")
    {
        if(cfscheck_info == nullptr)
        {
            cfscheck_info = std::make_shared<CfgHistGl::RecordType::Record::Info::CfscheckInfo>();
        }
        return cfscheck_info;
    }

    if(child_yang_name == "commit-info")
    {
        if(commit_info == nullptr)
        {
            commit_info = std::make_shared<CfgHistGl::RecordType::Record::Info::CommitInfo>();
        }
        return commit_info;
    }

    if(child_yang_name == "oir-info")
    {
        if(oir_info == nullptr)
        {
            oir_info = std::make_shared<CfgHistGl::RecordType::Record::Info::OirInfo>();
        }
        return oir_info;
    }

    if(child_yang_name == "shutdown-info")
    {
        if(shutdown_info == nullptr)
        {
            shutdown_info = std::make_shared<CfgHistGl::RecordType::Record::Info::ShutdownInfo>();
        }
        return shutdown_info;
    }

    if(child_yang_name == "startup-info")
    {
        if(startup_info == nullptr)
        {
            startup_info = std::make_shared<CfgHistGl::RecordType::Record::Info::StartupInfo>();
        }
        return startup_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm_info != nullptr)
    {
        children["alarm-info"] = alarm_info;
    }

    if(backup_info != nullptr)
    {
        children["backup-info"] = backup_info;
    }

    if(cfscheck_info != nullptr)
    {
        children["cfscheck-info"] = cfscheck_info;
    }

    if(commit_info != nullptr)
    {
        children["commit-info"] = commit_info;
    }

    if(oir_info != nullptr)
    {
        children["oir-info"] = oir_info;
    }

    if(shutdown_info != nullptr)
    {
        children["shutdown-info"] = shutdown_info;
    }

    if(startup_info != nullptr)
    {
        children["startup-info"] = startup_info;
    }

    return children;
}

void CfgHistGl::RecordType::Record::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a")
    {
        a = value;
        a.value_namespace = name_space;
        a.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a")
    {
        a.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info" || name == "backup-info" || name == "cfscheck-info" || name == "commit-info" || name == "oir-info" || name == "shutdown-info" || name == "startup-info" || name == "a" || name == "type")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::AlarmInfo::AlarmInfo()
    :
    state{YType::str, "state"},
    where{YType::str, "where"}
{

    yang_name = "alarm-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::AlarmInfo::~AlarmInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::AlarmInfo::has_data() const
{
    return state.is_set
	|| where.is_set;
}

bool CfgHistGl::RecordType::Record::Info::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(where.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (where.is_set || is_set(where.yfilter)) leaf_name_data.push_back(where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "where")
    {
        where = value;
        where.value_namespace = name_space;
        where.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "where")
    {
        where.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "where")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::BackupInfo::BackupInfo()
    :
    comment{YType::str, "comment"}
{

    yang_name = "backup-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::BackupInfo::~BackupInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::BackupInfo::has_data() const
{
    return comment.is_set;
}

bool CfgHistGl::RecordType::Record::Info::BackupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::BackupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::BackupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::BackupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::BackupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::BackupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::BackupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::BackupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comment")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::CfscheckInfo::CfscheckInfo()
    :
    line{YType::str, "line"},
    user_id{YType::str, "user-id"}
{

    yang_name = "cfscheck-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::CfscheckInfo::~CfscheckInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::CfscheckInfo::has_data() const
{
    return line.is_set
	|| user_id.is_set;
}

bool CfgHistGl::RecordType::Record::Info::CfscheckInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(user_id.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfscheck-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::CfscheckInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::CfscheckInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::CfscheckInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line" || name == "user-id")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::CommitInfo::CommitInfo()
    :
    client_name{YType::str, "client-name"},
    comment{YType::str, "comment"},
    commit_id{YType::str, "commit-id"},
    label{YType::str, "label"},
    line{YType::str, "line"},
    user_id{YType::str, "user-id"}
{

    yang_name = "commit-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::CommitInfo::~CommitInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::CommitInfo::has_data() const
{
    return client_name.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| label.is_set
	|| line.is_set
	|| user_id.is_set;
}

bool CfgHistGl::RecordType::Record::Info::CommitInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(comment.yfilter)
	|| ydk::is_set(commit_id.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(user_id.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::CommitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commit-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::CommitInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.yfilter)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::CommitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::CommitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::CommitInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commit-id")
    {
        commit_id = value;
        commit_id.value_namespace = name_space;
        commit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::CommitInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
    if(value_path == "commit-id")
    {
        commit_id.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::CommitInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-name" || name == "comment" || name == "commit-id" || name == "label" || name == "line" || name == "user-id")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::OirInfo::OirInfo()
    :
    config_name{YType::str, "config-name"},
    config_type{YType::str, "config-type"},
    operation_{YType::str, "operation"}
{

    yang_name = "oir-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::OirInfo::~OirInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::OirInfo::has_data() const
{
    return config_name.is_set
	|| config_type.is_set
	|| operation_.is_set;
}

bool CfgHistGl::RecordType::Record::Info::OirInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_name.yfilter)
	|| ydk::is_set(config_type.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::OirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::OirInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_name.is_set || is_set(config_name.yfilter)) leaf_name_data.push_back(config_name.get_name_leafdata());
    if (config_type.is_set || is_set(config_type.yfilter)) leaf_name_data.push_back(config_type.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::OirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::OirInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::OirInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-name")
    {
        config_name = value;
        config_name.value_namespace = name_space;
        config_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-type")
    {
        config_type = value;
        config_type.value_namespace = name_space;
        config_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::OirInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-name")
    {
        config_name.yfilter = yfilter;
    }
    if(value_path == "config-type")
    {
        config_type.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::OirInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-name" || name == "config-type" || name == "operation")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::ShutdownInfo::ShutdownInfo()
    :
    comment{YType::str, "comment"}
{

    yang_name = "shutdown-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::ShutdownInfo::~ShutdownInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::ShutdownInfo::has_data() const
{
    return comment.is_set;
}

bool CfgHistGl::RecordType::Record::Info::ShutdownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::ShutdownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::ShutdownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::ShutdownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comment")
        return true;
    return false;
}

CfgHistGl::RecordType::Record::Info::StartupInfo::StartupInfo()
    :
    boot_path{YType::str, "boot-path"},
    how_booted{YType::str, "how-booted"}
{

    yang_name = "startup-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

CfgHistGl::RecordType::Record::Info::StartupInfo::~StartupInfo()
{
}

bool CfgHistGl::RecordType::Record::Info::StartupInfo::has_data() const
{
    return boot_path.is_set
	|| how_booted.is_set;
}

bool CfgHistGl::RecordType::Record::Info::StartupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_path.yfilter)
	|| ydk::is_set(how_booted.yfilter);
}

std::string CfgHistGl::RecordType::Record::Info::StartupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startup-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfgHistGl::RecordType::Record::Info::StartupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_path.is_set || is_set(boot_path.yfilter)) leaf_name_data.push_back(boot_path.get_name_leafdata());
    if (how_booted.is_set || is_set(how_booted.yfilter)) leaf_name_data.push_back(how_booted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::StartupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfgHistGl::RecordType::Record::Info::StartupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfgHistGl::RecordType::Record::Info::StartupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-path")
    {
        boot_path = value;
        boot_path.value_namespace = name_space;
        boot_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "how-booted")
    {
        how_booted = value;
        how_booted.value_namespace = name_space;
        how_booted.value_namespace_prefix = name_space_prefix;
    }
}

void CfgHistGl::RecordType::Record::Info::StartupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-path")
    {
        boot_path.yfilter = yfilter;
    }
    if(value_path == "how-booted")
    {
        how_booted.yfilter = yfilter;
    }
}

bool CfgHistGl::RecordType::Record::Info::StartupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-path" || name == "how-booted")
        return true;
    return false;
}

const Enum::YLeaf HistRecord::cfghist_bag_record_all {0, "cfghist-bag-record-all"};
const Enum::YLeaf HistRecord::cfghist_bag_record_alarm {1, "cfghist-bag-record-alarm"};
const Enum::YLeaf HistRecord::cfghist_bag_record_cfs_check {2, "cfghist-bag-record-cfs-check"};
const Enum::YLeaf HistRecord::cfghist_bag_record_commit {3, "cfghist-bag-record-commit"};
const Enum::YLeaf HistRecord::cfghist_bag_record_oir {4, "cfghist-bag-record-oir"};
const Enum::YLeaf HistRecord::cfghist_bag_record_shutdown {5, "cfghist-bag-record-shutdown"};
const Enum::YLeaf HistRecord::cfghist_bag_record_startup {6, "cfghist-bag-record-startup"};
const Enum::YLeaf HistRecord::cfghist_bag_record_backup {7, "cfghist-bag-record-backup"};
const Enum::YLeaf HistRecord::cfghist_bag_record_rebase {8, "cfghist-bag-record-rebase"};
const Enum::YLeaf HistRecord::cfghist_bag_record_last {9, "cfghist-bag-record-last"};


}
}

