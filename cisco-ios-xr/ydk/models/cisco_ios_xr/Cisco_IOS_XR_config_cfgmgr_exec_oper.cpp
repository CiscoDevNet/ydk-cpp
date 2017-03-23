
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_exec_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_config_cfgmgr_exec_oper {

CfgHistGl::CfgHistGl()
{
    yang_name = "cfg-hist-gl"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-exec-oper";
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
    return is_set(operation);
}

std::string CfgHistGl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:cfg-hist-gl";

    return path_buffer.str();

}

EntityPath CfgHistGl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "record-type")
    {
        for(auto const & c : record_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<CfgHistGl::RecordType>();
        c->parent = this;
        record_type.push_back(std::move(c));
        children[segment_path] = record_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::get_children()
{
    for (auto const & c : record_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void CfgHistGl::set_value(const std::string & value_path, std::string value)
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

CfgHistGl::RecordType::RecordType()
    :
    record_type{YType::str, "record-type"}
{
    yang_name = "record-type"; yang_parent_name = "cfg-hist-gl";
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
    return is_set(operation)
	|| is_set(record_type.operation);
}

std::string CfgHistGl::RecordType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-type" <<"[record-type='" <<record_type <<"']";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-config-cfgmgr-exec-oper:cfg-hist-gl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_type.is_set || is_set(record_type.operation)) leaf_name_data.push_back(record_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "record")
    {
        for(auto const & c : record)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<CfgHistGl::RecordType::Record>();
        c->parent = this;
        record.push_back(std::move(c));
        children[segment_path] = record.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::get_children()
{
    for (auto const & c : record)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void CfgHistGl::RecordType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "record-type")
    {
        record_type = value;
    }
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
    children["info"] = info;

    yang_name = "record"; yang_parent_name = "record-type";
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
    return is_set(operation)
	|| is_set(record.operation)
	|| is_set(record_type.operation)
	|| is_set(timestamp.operation)
	|| (info !=  nullptr && info->has_operation());
}

std::string CfgHistGl::RecordType::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record" <<"[record='" <<record <<"']";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Record' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record.is_set || is_set(record.operation)) leaf_name_data.push_back(record.get_name_leafdata());
    if (record_type.is_set || is_set(record_type.operation)) leaf_name_data.push_back(record_type.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "info")
    {
        if(info != nullptr)
        {
            children["info"] = info;
        }
        else
        {
            info = std::make_shared<CfgHistGl::RecordType::Record::Info>();
            info->parent = this;
            children["info"] = info;
        }
        return children.at("info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::get_children()
{
    if(children.find("info") == children.end())
    {
        if(info != nullptr)
        {
            children["info"] = info;
        }
    }

    return children;
}

void CfgHistGl::RecordType::Record::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "record")
    {
        record = value;
    }
    if(value_path == "record-type")
    {
        record_type = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
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
    children["alarm-info"] = alarm_info;

    backup_info->parent = this;
    children["backup-info"] = backup_info;

    cfscheck_info->parent = this;
    children["cfscheck-info"] = cfscheck_info;

    commit_info->parent = this;
    children["commit-info"] = commit_info;

    oir_info->parent = this;
    children["oir-info"] = oir_info;

    shutdown_info->parent = this;
    children["shutdown-info"] = shutdown_info;

    startup_info->parent = this;
    children["startup-info"] = startup_info;

    yang_name = "info"; yang_parent_name = "record";
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
    return is_set(operation)
	|| is_set(a.operation)
	|| is_set(type.operation)
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

EntityPath CfgHistGl::RecordType::Record::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a.is_set || is_set(a.operation)) leaf_name_data.push_back(a.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarm-info")
    {
        if(alarm_info != nullptr)
        {
            children["alarm-info"] = alarm_info;
        }
        else
        {
            alarm_info = std::make_shared<CfgHistGl::RecordType::Record::Info::AlarmInfo>();
            alarm_info->parent = this;
            children["alarm-info"] = alarm_info;
        }
        return children.at("alarm-info");
    }

    if(child_yang_name == "backup-info")
    {
        if(backup_info != nullptr)
        {
            children["backup-info"] = backup_info;
        }
        else
        {
            backup_info = std::make_shared<CfgHistGl::RecordType::Record::Info::BackupInfo>();
            backup_info->parent = this;
            children["backup-info"] = backup_info;
        }
        return children.at("backup-info");
    }

    if(child_yang_name == "cfscheck-info")
    {
        if(cfscheck_info != nullptr)
        {
            children["cfscheck-info"] = cfscheck_info;
        }
        else
        {
            cfscheck_info = std::make_shared<CfgHistGl::RecordType::Record::Info::CfscheckInfo>();
            cfscheck_info->parent = this;
            children["cfscheck-info"] = cfscheck_info;
        }
        return children.at("cfscheck-info");
    }

    if(child_yang_name == "commit-info")
    {
        if(commit_info != nullptr)
        {
            children["commit-info"] = commit_info;
        }
        else
        {
            commit_info = std::make_shared<CfgHistGl::RecordType::Record::Info::CommitInfo>();
            commit_info->parent = this;
            children["commit-info"] = commit_info;
        }
        return children.at("commit-info");
    }

    if(child_yang_name == "oir-info")
    {
        if(oir_info != nullptr)
        {
            children["oir-info"] = oir_info;
        }
        else
        {
            oir_info = std::make_shared<CfgHistGl::RecordType::Record::Info::OirInfo>();
            oir_info->parent = this;
            children["oir-info"] = oir_info;
        }
        return children.at("oir-info");
    }

    if(child_yang_name == "shutdown-info")
    {
        if(shutdown_info != nullptr)
        {
            children["shutdown-info"] = shutdown_info;
        }
        else
        {
            shutdown_info = std::make_shared<CfgHistGl::RecordType::Record::Info::ShutdownInfo>();
            shutdown_info->parent = this;
            children["shutdown-info"] = shutdown_info;
        }
        return children.at("shutdown-info");
    }

    if(child_yang_name == "startup-info")
    {
        if(startup_info != nullptr)
        {
            children["startup-info"] = startup_info;
        }
        else
        {
            startup_info = std::make_shared<CfgHistGl::RecordType::Record::Info::StartupInfo>();
            startup_info->parent = this;
            children["startup-info"] = startup_info;
        }
        return children.at("startup-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::get_children()
{
    if(children.find("alarm-info") == children.end())
    {
        if(alarm_info != nullptr)
        {
            children["alarm-info"] = alarm_info;
        }
    }

    if(children.find("backup-info") == children.end())
    {
        if(backup_info != nullptr)
        {
            children["backup-info"] = backup_info;
        }
    }

    if(children.find("cfscheck-info") == children.end())
    {
        if(cfscheck_info != nullptr)
        {
            children["cfscheck-info"] = cfscheck_info;
        }
    }

    if(children.find("commit-info") == children.end())
    {
        if(commit_info != nullptr)
        {
            children["commit-info"] = commit_info;
        }
    }

    if(children.find("oir-info") == children.end())
    {
        if(oir_info != nullptr)
        {
            children["oir-info"] = oir_info;
        }
    }

    if(children.find("shutdown-info") == children.end())
    {
        if(shutdown_info != nullptr)
        {
            children["shutdown-info"] = shutdown_info;
        }
    }

    if(children.find("startup-info") == children.end())
    {
        if(startup_info != nullptr)
        {
            children["startup-info"] = startup_info;
        }
    }

    return children;
}

void CfgHistGl::RecordType::Record::Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "a")
    {
        a = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

CfgHistGl::RecordType::Record::Info::AlarmInfo::AlarmInfo()
    :
    state{YType::str, "state"},
    where{YType::str, "where"}
{
    yang_name = "alarm-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(state.operation)
	|| is_set(where.operation);
}

std::string CfgHistGl::RecordType::Record::Info::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (where.is_set || is_set(where.operation)) leaf_name_data.push_back(where.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::AlarmInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "where")
    {
        where = value;
    }
}

CfgHistGl::RecordType::Record::Info::CfscheckInfo::CfscheckInfo()
    :
    line{YType::str, "line"},
    user_id{YType::str, "user-id"}
{
    yang_name = "cfscheck-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(line.operation)
	|| is_set(user_id.operation);
}

std::string CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfscheck-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CfscheckInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.operation)) leaf_name_data.push_back(user_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::CfscheckInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::CfscheckInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "user-id")
    {
        user_id = value;
    }
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
    yang_name = "commit-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(label.operation)
	|| is_set(line.operation)
	|| is_set(user_id.operation);
}

std::string CfgHistGl::RecordType::Record::Info::CommitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commit-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::CommitInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommitInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.operation)) leaf_name_data.push_back(user_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::CommitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::CommitInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::CommitInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "commit-id")
    {
        commit_id = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "user-id")
    {
        user_id = value;
    }
}

CfgHistGl::RecordType::Record::Info::OirInfo::OirInfo()
    :
    config_name{YType::str, "config-name"},
    config_type{YType::str, "config-type"},
    operation_{YType::str, "operation"}
{
    yang_name = "oir-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(config_name.operation)
	|| is_set(config_type.operation)
	|| is_set(operation_.operation);
}

std::string CfgHistGl::RecordType::Record::Info::OirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::OirInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OirInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_name.is_set || is_set(config_name.operation)) leaf_name_data.push_back(config_name.get_name_leafdata());
    if (config_type.is_set || is_set(config_type.operation)) leaf_name_data.push_back(config_type.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::OirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::OirInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::OirInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config-name")
    {
        config_name = value;
    }
    if(value_path == "config-type")
    {
        config_type = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

CfgHistGl::RecordType::Record::Info::ShutdownInfo::ShutdownInfo()
    :
    comment{YType::str, "comment"}
{
    yang_name = "shutdown-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(comment.operation);
}

std::string CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShutdownInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::ShutdownInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::ShutdownInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "comment")
    {
        comment = value;
    }
}

CfgHistGl::RecordType::Record::Info::StartupInfo::StartupInfo()
    :
    boot_path{YType::str, "boot-path"},
    how_booted{YType::str, "how-booted"}
{
    yang_name = "startup-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(boot_path.operation)
	|| is_set(how_booted.operation);
}

std::string CfgHistGl::RecordType::Record::Info::StartupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startup-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::StartupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartupInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_path.is_set || is_set(boot_path.operation)) leaf_name_data.push_back(boot_path.get_name_leafdata());
    if (how_booted.is_set || is_set(how_booted.operation)) leaf_name_data.push_back(how_booted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::StartupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::StartupInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::StartupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot-path")
    {
        boot_path = value;
    }
    if(value_path == "how-booted")
    {
        how_booted = value;
    }
}

CfgHistGl::RecordType::Record::Info::BackupInfo::BackupInfo()
    :
    comment{YType::str, "comment"}
{
    yang_name = "backup-info"; yang_parent_name = "info";
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
    return is_set(operation)
	|| is_set(comment.operation);
}

std::string CfgHistGl::RecordType::Record::Info::BackupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-info";

    return path_buffer.str();

}

EntityPath CfgHistGl::RecordType::Record::Info::BackupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupInfo' in Cisco_IOS_XR_config_cfgmgr_exec_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfgHistGl::RecordType::Record::Info::BackupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & CfgHistGl::RecordType::Record::Info::BackupInfo::get_children()
{
    return children;
}

void CfgHistGl::RecordType::Record::Info::BackupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "comment")
    {
        comment = value;
    }
}

const Enum::YLeaf HistRecordEnum::cfghist_bag_record_all {0, "cfghist-bag-record-all"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_alarm {1, "cfghist-bag-record-alarm"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_cfs_check {2, "cfghist-bag-record-cfs-check"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_commit {3, "cfghist-bag-record-commit"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_oir {4, "cfghist-bag-record-oir"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_shutdown {5, "cfghist-bag-record-shutdown"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_startup {6, "cfghist-bag-record-startup"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_backup {7, "cfghist-bag-record-backup"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_rebase {8, "cfghist-bag-record-rebase"};
const Enum::YLeaf HistRecordEnum::cfghist_bag_record_last {9, "cfghist-bag-record-last"};


}
}

