
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_spirit_install_instmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_spirit_install_instmgr_oper {

SoftwareInstall::SoftwareInstall()
    :
    active(std::make_shared<SoftwareInstall::Active>())
	,all_operations_log(std::make_shared<SoftwareInstall::AllOperationsLog>())
	,committed(std::make_shared<SoftwareInstall::Committed>())
	,files(std::make_shared<SoftwareInstall::Files>())
	,inactive(std::make_shared<SoftwareInstall::Inactive>())
	,issu(std::make_shared<SoftwareInstall::Issu>())
	,last_n_operation_logs(std::make_shared<SoftwareInstall::LastNOperationLogs>())
	,operation_logs(std::make_shared<SoftwareInstall::OperationLogs>())
	,packages(std::make_shared<SoftwareInstall::Packages>())
	,prepare(std::make_shared<SoftwareInstall::Prepare>())
	,repository(std::make_shared<SoftwareInstall::Repository>())
	,request(std::make_shared<SoftwareInstall::Request>())
	,version(std::make_shared<SoftwareInstall::Version>())
{
    active->parent = this;

    all_operations_log->parent = this;

    committed->parent = this;

    files->parent = this;

    inactive->parent = this;

    issu->parent = this;

    last_n_operation_logs->parent = this;

    operation_logs->parent = this;

    packages->parent = this;

    prepare->parent = this;

    repository->parent = this;

    request->parent = this;

    version->parent = this;

    yang_name = "software-install"; yang_parent_name = "Cisco-IOS-XR-spirit-install-instmgr-oper";
}

SoftwareInstall::~SoftwareInstall()
{
}

bool SoftwareInstall::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (all_operations_log !=  nullptr && all_operations_log->has_data())
	|| (committed !=  nullptr && committed->has_data())
	|| (files !=  nullptr && files->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (last_n_operation_logs !=  nullptr && last_n_operation_logs->has_data())
	|| (operation_logs !=  nullptr && operation_logs->has_data())
	|| (packages !=  nullptr && packages->has_data())
	|| (prepare !=  nullptr && prepare->has_data())
	|| (repository !=  nullptr && repository->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (version !=  nullptr && version->has_data());
}

bool SoftwareInstall::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (all_operations_log !=  nullptr && all_operations_log->has_operation())
	|| (committed !=  nullptr && committed->has_operation())
	|| (files !=  nullptr && files->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (last_n_operation_logs !=  nullptr && last_n_operation_logs->has_operation())
	|| (operation_logs !=  nullptr && operation_logs->has_operation())
	|| (packages !=  nullptr && packages->has_operation())
	|| (prepare !=  nullptr && prepare->has_operation())
	|| (repository !=  nullptr && repository->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (version !=  nullptr && version->has_operation());
}

std::string SoftwareInstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SoftwareInstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<SoftwareInstall::Active>();
        }
        return active;
    }

    if(child_yang_name == "all-operations-log")
    {
        if(all_operations_log == nullptr)
        {
            all_operations_log = std::make_shared<SoftwareInstall::AllOperationsLog>();
        }
        return all_operations_log;
    }

    if(child_yang_name == "committed")
    {
        if(committed == nullptr)
        {
            committed = std::make_shared<SoftwareInstall::Committed>();
        }
        return committed;
    }

    if(child_yang_name == "files")
    {
        if(files == nullptr)
        {
            files = std::make_shared<SoftwareInstall::Files>();
        }
        return files;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<SoftwareInstall::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<SoftwareInstall::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "last-n-operation-logs")
    {
        if(last_n_operation_logs == nullptr)
        {
            last_n_operation_logs = std::make_shared<SoftwareInstall::LastNOperationLogs>();
        }
        return last_n_operation_logs;
    }

    if(child_yang_name == "operation-logs")
    {
        if(operation_logs == nullptr)
        {
            operation_logs = std::make_shared<SoftwareInstall::OperationLogs>();
        }
        return operation_logs;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<SoftwareInstall::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "prepare")
    {
        if(prepare == nullptr)
        {
            prepare = std::make_shared<SoftwareInstall::Prepare>();
        }
        return prepare;
    }

    if(child_yang_name == "repository")
    {
        if(repository == nullptr)
        {
            repository = std::make_shared<SoftwareInstall::Repository>();
        }
        return repository;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<SoftwareInstall::Request>();
        }
        return request;
    }

    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<SoftwareInstall::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(all_operations_log != nullptr)
    {
        children["all-operations-log"] = all_operations_log;
    }

    if(committed != nullptr)
    {
        children["committed"] = committed;
    }

    if(files != nullptr)
    {
        children["files"] = files;
    }

    if(inactive != nullptr)
    {
        children["inactive"] = inactive;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(last_n_operation_logs != nullptr)
    {
        children["last-n-operation-logs"] = last_n_operation_logs;
    }

    if(operation_logs != nullptr)
    {
        children["operation-logs"] = operation_logs;
    }

    if(packages != nullptr)
    {
        children["packages"] = packages;
    }

    if(prepare != nullptr)
    {
        children["prepare"] = prepare;
    }

    if(repository != nullptr)
    {
        children["repository"] = repository;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void SoftwareInstall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SoftwareInstall::clone_ptr() const
{
    return std::make_shared<SoftwareInstall>();
}

std::string SoftwareInstall::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SoftwareInstall::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SoftwareInstall::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SoftwareInstall::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SoftwareInstall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "all-operations-log" || name == "committed" || name == "files" || name == "inactive" || name == "issu" || name == "last-n-operation-logs" || name == "operation-logs" || name == "packages" || name == "prepare" || name == "repository" || name == "request" || name == "version")
        return true;
    return false;
}

SoftwareInstall::Files::Files()
{
    yang_name = "files"; yang_parent_name = "software-install";
}

SoftwareInstall::Files::~Files()
{
}

bool SoftwareInstall::Files::has_data() const
{
    for (std::size_t index=0; index<file.size(); index++)
    {
        if(file[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Files::has_operation() const
{
    for (std::size_t index=0; index<file.size(); index++)
    {
        if(file[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Files::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "files";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Files::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Files::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        for(auto const & c : file)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Files::File>();
        c->parent = this;
        file.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Files::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : file)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::Files::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Files::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Files::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

SoftwareInstall::Files::File::File()
    :
    file_name{YType::str, "file-name"}
    	,
    brief(std::make_shared<SoftwareInstall::Files::File::Brief>())
	,detail(std::make_shared<SoftwareInstall::Files::File::Detail>())
{
    brief->parent = this;

    detail->parent = this;

    yang_name = "file"; yang_parent_name = "files";
}

SoftwareInstall::Files::File::~File()
{
}

bool SoftwareInstall::Files::File::has_data() const
{
    return file_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool SoftwareInstall::Files::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_name.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string SoftwareInstall::Files::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file" <<"[file-name='" <<file_name <<"']";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Files::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/files/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.yfilter)) leaf_name_data.push_back(file_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Files::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<SoftwareInstall::Files::File::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::Files::File::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Files::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void SoftwareInstall::Files::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-name")
    {
        file_name = value;
        file_name.value_namespace = name_space;
        file_name.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Files::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-name")
    {
        file_name.yfilter = yfilter;
    }
}

bool SoftwareInstall::Files::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail" || name == "file-name")
        return true;
    return false;
}

SoftwareInstall::Files::File::Brief::Brief()
    :
    log{YType::str, "log"}
{
    yang_name = "brief"; yang_parent_name = "file";
}

SoftwareInstall::Files::File::Brief::~Brief()
{
}

bool SoftwareInstall::Files::File::Brief::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Files::File::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Files::File::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Files::File::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Files::File::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Files::File::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Files::File::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Files::File::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Files::File::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Files::File::Detail::Detail()
    :
    log{YType::str, "log"}
{
    yang_name = "detail"; yang_parent_name = "file";
}

SoftwareInstall::Files::File::Detail::~Detail()
{
}

bool SoftwareInstall::Files::File::Detail::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Files::File::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Files::File::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Files::File::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detail' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Files::File::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Files::File::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Files::File::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Files::File::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Files::File::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::LastNOperationLogs::LastNOperationLogs()
{
    yang_name = "last-n-operation-logs"; yang_parent_name = "software-install";
}

SoftwareInstall::LastNOperationLogs::~LastNOperationLogs()
{
}

bool SoftwareInstall::LastNOperationLogs::has_data() const
{
    for (std::size_t index=0; index<last_n_operation_log.size(); index++)
    {
        if(last_n_operation_log[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::LastNOperationLogs::has_operation() const
{
    for (std::size_t index=0; index<last_n_operation_log.size(); index++)
    {
        if(last_n_operation_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::LastNOperationLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-n-operation-logs";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::LastNOperationLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::LastNOperationLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-n-operation-log")
    {
        for(auto const & c : last_n_operation_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::LastNOperationLogs::LastNOperationLog>();
        c->parent = this;
        last_n_operation_log.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::LastNOperationLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_n_operation_log)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::LastNOperationLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::LastNOperationLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::LastNOperationLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-n-operation-log")
        return true;
    return false;
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::LastNOperationLog()
    :
    last_n_logs{YType::int32, "last-n-logs"}
    	,
    detail(std::make_shared<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail>())
	,summary(std::make_shared<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary>())
{
    detail->parent = this;

    summary->parent = this;

    yang_name = "last-n-operation-log"; yang_parent_name = "last-n-operation-logs";
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::~LastNOperationLog()
{
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::has_data() const
{
    return last_n_logs.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_n_logs.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-n-operation-log" <<"[last-n-logs='" <<last_n_logs <<"']";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/last-n-operation-logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_n_logs.is_set || is_set(last_n_logs.yfilter)) leaf_name_data.push_back(last_n_logs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-n-logs")
    {
        last_n_logs = value;
        last_n_logs.value_namespace = name_space;
        last_n_logs.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-n-logs")
    {
        last_n_logs.yfilter = yfilter;
    }
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "summary" || name == "last-n-logs")
        return true;
    return false;
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::Summary()
    :
    log{YType::str, "log"}
{
    yang_name = "summary"; yang_parent_name = "last-n-operation-log";
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::~Summary()
{
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::Detail()
    :
    log{YType::str, "log"}
{
    yang_name = "detail"; yang_parent_name = "last-n-operation-log";
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::~Detail()
{
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detail' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Prepare::Prepare()
    :
    activate_message{YType::str, "activate-message"},
    no_prepare_done{YType::str, "no-prepare-done"},
    prepare_clean_message{YType::str, "prepare-clean-message"},
    prepared_boot_image{YType::str, "prepared-boot-image"},
    prepared_boot_partition{YType::str, "prepared-boot-partition"},
    restart_type{YType::str, "restart-type"}
{
    yang_name = "prepare"; yang_parent_name = "software-install";
}

SoftwareInstall::Prepare::~Prepare()
{
}

bool SoftwareInstall::Prepare::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rpm.size(); index++)
    {
        if(rpm[index]->has_data())
            return true;
    }
    return activate_message.is_set
	|| no_prepare_done.is_set
	|| prepare_clean_message.is_set
	|| prepared_boot_image.is_set
	|| prepared_boot_partition.is_set
	|| restart_type.is_set;
}

bool SoftwareInstall::Prepare::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rpm.size(); index++)
    {
        if(rpm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(activate_message.yfilter)
	|| ydk::is_set(no_prepare_done.yfilter)
	|| ydk::is_set(prepare_clean_message.yfilter)
	|| ydk::is_set(prepared_boot_image.yfilter)
	|| ydk::is_set(prepared_boot_partition.yfilter)
	|| ydk::is_set(restart_type.yfilter);
}

std::string SoftwareInstall::Prepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Prepare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate_message.is_set || is_set(activate_message.yfilter)) leaf_name_data.push_back(activate_message.get_name_leafdata());
    if (no_prepare_done.is_set || is_set(no_prepare_done.yfilter)) leaf_name_data.push_back(no_prepare_done.get_name_leafdata());
    if (prepare_clean_message.is_set || is_set(prepare_clean_message.yfilter)) leaf_name_data.push_back(prepare_clean_message.get_name_leafdata());
    if (prepared_boot_image.is_set || is_set(prepared_boot_image.yfilter)) leaf_name_data.push_back(prepared_boot_image.get_name_leafdata());
    if (prepared_boot_partition.is_set || is_set(prepared_boot_partition.yfilter)) leaf_name_data.push_back(prepared_boot_partition.get_name_leafdata());
    if (restart_type.is_set || is_set(restart_type.yfilter)) leaf_name_data.push_back(restart_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Prepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Prepare::Package>();
        c->parent = this;
        package.push_back(c);
        return c;
    }

    if(child_yang_name == "rpm")
    {
        for(auto const & c : rpm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Prepare::Rpm>();
        c->parent = this;
        rpm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Prepare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : package)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rpm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::Prepare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate-message")
    {
        activate_message = value;
        activate_message.value_namespace = name_space;
        activate_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepare-done")
    {
        no_prepare_done = value;
        no_prepare_done.value_namespace = name_space;
        no_prepare_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepare-clean-message")
    {
        prepare_clean_message = value;
        prepare_clean_message.value_namespace = name_space;
        prepare_clean_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepared-boot-image")
    {
        prepared_boot_image = value;
        prepared_boot_image.value_namespace = name_space;
        prepared_boot_image.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepared-boot-partition")
    {
        prepared_boot_partition = value;
        prepared_boot_partition.value_namespace = name_space;
        prepared_boot_partition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-type")
    {
        restart_type = value;
        restart_type.value_namespace = name_space;
        restart_type.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Prepare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate-message")
    {
        activate_message.yfilter = yfilter;
    }
    if(value_path == "no-prepare-done")
    {
        no_prepare_done.yfilter = yfilter;
    }
    if(value_path == "prepare-clean-message")
    {
        prepare_clean_message.yfilter = yfilter;
    }
    if(value_path == "prepared-boot-image")
    {
        prepared_boot_image.yfilter = yfilter;
    }
    if(value_path == "prepared-boot-partition")
    {
        prepared_boot_partition.yfilter = yfilter;
    }
    if(value_path == "restart-type")
    {
        restart_type.yfilter = yfilter;
    }
}

bool SoftwareInstall::Prepare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "rpm" || name == "activate-message" || name == "no-prepare-done" || name == "prepare-clean-message" || name == "prepared-boot-image" || name == "prepared-boot-partition" || name == "restart-type")
        return true;
    return false;
}

SoftwareInstall::Prepare::Rpm::Rpm()
    :
    package{YType::str, "package"}
{
    yang_name = "rpm"; yang_parent_name = "prepare";
}

SoftwareInstall::Prepare::Rpm::~Rpm()
{
}

bool SoftwareInstall::Prepare::Rpm::has_data() const
{
    return package.is_set;
}

bool SoftwareInstall::Prepare::Rpm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string SoftwareInstall::Prepare::Rpm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpm";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Prepare::Rpm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/prepare/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Prepare::Rpm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Prepare::Rpm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Prepare::Rpm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Prepare::Rpm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool SoftwareInstall::Prepare::Rpm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

SoftwareInstall::Prepare::Package::Package()
    :
    package{YType::str, "package"}
{
    yang_name = "package"; yang_parent_name = "prepare";
}

SoftwareInstall::Prepare::Package::~Package()
{
}

bool SoftwareInstall::Prepare::Package::has_data() const
{
    return package.is_set;
}

bool SoftwareInstall::Prepare::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string SoftwareInstall::Prepare::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Prepare::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/prepare/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Prepare::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Prepare::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Prepare::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Prepare::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool SoftwareInstall::Prepare::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

SoftwareInstall::Active::Active()
{
    yang_name = "active"; yang_parent_name = "software-install";
}

SoftwareInstall::Active::~Active()
{
}

bool SoftwareInstall::Active::has_data() const
{
    for (std::size_t index=0; index<active_package_info.size(); index++)
    {
        if(active_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Active::has_operation() const
{
    for (std::size_t index=0; index<active_package_info.size(); index++)
    {
        if(active_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-package-info")
    {
        for(auto const & c : active_package_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Active::ActivePackageInfo>();
        c->parent = this;
        active_package_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_package_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-package-info")
        return true;
    return false;
}

SoftwareInstall::Active::ActivePackageInfo::ActivePackageInfo()
    :
    active_packages{YType::str, "active-packages"},
    boot_partition_name{YType::str, "boot-partition-name"},
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    number_of_active_packages{YType::uint32, "number-of-active-packages"}
{
    yang_name = "active-package-info"; yang_parent_name = "active";
}

SoftwareInstall::Active::ActivePackageInfo::~ActivePackageInfo()
{
}

bool SoftwareInstall::Active::ActivePackageInfo::has_data() const
{
    return active_packages.is_set
	|| boot_partition_name.is_set
	|| error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| number_of_active_packages.is_set;
}

bool SoftwareInstall::Active::ActivePackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_packages.yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(number_of_active_packages.yfilter);
}

std::string SoftwareInstall::Active::ActivePackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-package-info";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Active::ActivePackageInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_packages.is_set || is_set(active_packages.yfilter)) leaf_name_data.push_back(active_packages.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (number_of_active_packages.is_set || is_set(number_of_active_packages.yfilter)) leaf_name_data.push_back(number_of_active_packages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Active::ActivePackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Active::ActivePackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Active::ActivePackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-packages")
    {
        active_packages = value;
        active_packages.value_namespace = name_space;
        active_packages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages = value;
        number_of_active_packages.value_namespace = name_space;
        number_of_active_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Active::ActivePackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-packages")
    {
        active_packages.yfilter = yfilter;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::Active::ActivePackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-packages" || name == "boot-partition-name" || name == "error-message" || name == "location" || name == "node-type" || name == "number-of-active-packages")
        return true;
    return false;
}

SoftwareInstall::Version::Version()
    :
    log{YType::str, "log"}
{
    yang_name = "version"; yang_parent_name = "software-install";
}

SoftwareInstall::Version::~Version()
{
}

bool SoftwareInstall::Version::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Inactive::Inactive()
    :
    log{YType::str, "log"}
{
    yang_name = "inactive"; yang_parent_name = "software-install";
}

SoftwareInstall::Inactive::~Inactive()
{
}

bool SoftwareInstall::Inactive::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Inactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Request::Request()
    :
    log{YType::str, "log"}
{
    yang_name = "request"; yang_parent_name = "software-install";
}

SoftwareInstall::Request::~Request()
{
}

bool SoftwareInstall::Request::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Issu::Issu()
    :
    inventory(std::make_shared<SoftwareInstall::Issu::Inventory>())
	,stage(std::make_shared<SoftwareInstall::Issu::Stage>())
{
    inventory->parent = this;

    stage->parent = this;

    yang_name = "issu"; yang_parent_name = "software-install";
}

SoftwareInstall::Issu::~Issu()
{
}

bool SoftwareInstall::Issu::has_data() const
{
    return (inventory !=  nullptr && inventory->has_data())
	|| (stage !=  nullptr && stage->has_data());
}

bool SoftwareInstall::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (stage !=  nullptr && stage->has_operation());
}

std::string SoftwareInstall::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<SoftwareInstall::Issu::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "stage")
    {
        if(stage == nullptr)
        {
            stage = std::make_shared<SoftwareInstall::Issu::Stage>();
        }
        return stage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inventory != nullptr)
    {
        children["inventory"] = inventory;
    }

    if(stage != nullptr)
    {
        children["stage"] = stage;
    }

    return children;
}

void SoftwareInstall::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventory" || name == "stage")
        return true;
    return false;
}

SoftwareInstall::Issu::Stage::Stage()
    :
    issu_error{YType::enumeration, "issu-error"},
    issu_node_cnt{YType::int32, "issu-node-cnt"},
    issu_ready_node_cnt{YType::int32, "issu-ready-node-cnt"},
    issu_status{YType::enumeration, "issu-status"},
    percentage{YType::int32, "percentage"},
    state{YType::enumeration, "state"}
{
    yang_name = "stage"; yang_parent_name = "issu";
}

SoftwareInstall::Issu::Stage::~Stage()
{
}

bool SoftwareInstall::Issu::Stage::has_data() const
{
    return issu_error.is_set
	|| issu_node_cnt.is_set
	|| issu_ready_node_cnt.is_set
	|| issu_status.is_set
	|| percentage.is_set
	|| state.is_set;
}

bool SoftwareInstall::Issu::Stage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(issu_error.yfilter)
	|| ydk::is_set(issu_node_cnt.yfilter)
	|| ydk::is_set(issu_ready_node_cnt.yfilter)
	|| ydk::is_set(issu_status.yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string SoftwareInstall::Issu::Stage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stage";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Issu::Stage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (issu_error.is_set || is_set(issu_error.yfilter)) leaf_name_data.push_back(issu_error.get_name_leafdata());
    if (issu_node_cnt.is_set || is_set(issu_node_cnt.yfilter)) leaf_name_data.push_back(issu_node_cnt.get_name_leafdata());
    if (issu_ready_node_cnt.is_set || is_set(issu_ready_node_cnt.yfilter)) leaf_name_data.push_back(issu_ready_node_cnt.get_name_leafdata());
    if (issu_status.is_set || is_set(issu_status.yfilter)) leaf_name_data.push_back(issu_status.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Issu::Stage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Issu::Stage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Issu::Stage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "issu-error")
    {
        issu_error = value;
        issu_error.value_namespace = name_space;
        issu_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-node-cnt")
    {
        issu_node_cnt = value;
        issu_node_cnt.value_namespace = name_space;
        issu_node_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-ready-node-cnt")
    {
        issu_ready_node_cnt = value;
        issu_ready_node_cnt.value_namespace = name_space;
        issu_ready_node_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-status")
    {
        issu_status = value;
        issu_status.value_namespace = name_space;
        issu_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Issu::Stage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "issu-error")
    {
        issu_error.yfilter = yfilter;
    }
    if(value_path == "issu-node-cnt")
    {
        issu_node_cnt.yfilter = yfilter;
    }
    if(value_path == "issu-ready-node-cnt")
    {
        issu_ready_node_cnt.yfilter = yfilter;
    }
    if(value_path == "issu-status")
    {
        issu_status.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool SoftwareInstall::Issu::Stage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issu-error" || name == "issu-node-cnt" || name == "issu-ready-node-cnt" || name == "issu-status" || name == "percentage" || name == "state")
        return true;
    return false;
}

SoftwareInstall::Issu::Inventory::Inventory()
{
    yang_name = "inventory"; yang_parent_name = "issu";
}

SoftwareInstall::Issu::Inventory::~Inventory()
{
}

bool SoftwareInstall::Issu::Inventory::has_data() const
{
    for (std::size_t index=0; index<invinfo.size(); index++)
    {
        if(invinfo[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Issu::Inventory::has_operation() const
{
    for (std::size_t index=0; index<invinfo.size(); index++)
    {
        if(invinfo[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Issu::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Issu::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Issu::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invinfo")
    {
        for(auto const & c : invinfo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Issu::Inventory::Invinfo>();
        c->parent = this;
        invinfo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Issu::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : invinfo)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::Issu::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Issu::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Issu::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invinfo")
        return true;
    return false;
}

SoftwareInstall::Issu::Inventory::Invinfo::Invinfo()
    :
    issu_node_role{YType::enumeration, "issu-node-role"},
    node_id{YType::int32, "node-id"},
    node_role{YType::enumeration, "node-role"},
    node_state{YType::enumeration, "node-state"},
    node_type{YType::enumeration, "node-type"}
{
    yang_name = "invinfo"; yang_parent_name = "inventory";
}

SoftwareInstall::Issu::Inventory::Invinfo::~Invinfo()
{
}

bool SoftwareInstall::Issu::Inventory::Invinfo::has_data() const
{
    return issu_node_role.is_set
	|| node_id.is_set
	|| node_role.is_set
	|| node_state.is_set
	|| node_type.is_set;
}

bool SoftwareInstall::Issu::Inventory::Invinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(issu_node_role.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(node_role.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(node_type.yfilter);
}

std::string SoftwareInstall::Issu::Inventory::Invinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invinfo";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Issu::Inventory::Invinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/inventory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (issu_node_role.is_set || is_set(issu_node_role.yfilter)) leaf_name_data.push_back(issu_node_role.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (node_role.is_set || is_set(node_role.yfilter)) leaf_name_data.push_back(node_role.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Issu::Inventory::Invinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Issu::Inventory::Invinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Issu::Inventory::Invinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "issu-node-role")
    {
        issu_node_role = value;
        issu_node_role.value_namespace = name_space;
        issu_node_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-role")
    {
        node_role = value;
        node_role.value_namespace = name_space;
        node_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Issu::Inventory::Invinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "issu-node-role")
    {
        issu_node_role.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "node-role")
    {
        node_role.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool SoftwareInstall::Issu::Inventory::Invinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issu-node-role" || name == "node-id" || name == "node-role" || name == "node-state" || name == "node-type")
        return true;
    return false;
}

SoftwareInstall::Committed::Committed()
{
    yang_name = "committed"; yang_parent_name = "software-install";
}

SoftwareInstall::Committed::~Committed()
{
}

bool SoftwareInstall::Committed::has_data() const
{
    for (std::size_t index=0; index<committed_package_info.size(); index++)
    {
        if(committed_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Committed::has_operation() const
{
    for (std::size_t index=0; index<committed_package_info.size(); index++)
    {
        if(committed_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Committed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Committed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Committed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-package-info")
    {
        for(auto const & c : committed_package_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Committed::CommittedPackageInfo>();
        c->parent = this;
        committed_package_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Committed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : committed_package_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::Committed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Committed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Committed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-package-info")
        return true;
    return false;
}

SoftwareInstall::Committed::CommittedPackageInfo::CommittedPackageInfo()
    :
    boot_partition_name{YType::str, "boot-partition-name"},
    committed_packages{YType::str, "committed-packages"},
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    number_of_committed_packages{YType::uint32, "number-of-committed-packages"}
{
    yang_name = "committed-package-info"; yang_parent_name = "committed";
}

SoftwareInstall::Committed::CommittedPackageInfo::~CommittedPackageInfo()
{
}

bool SoftwareInstall::Committed::CommittedPackageInfo::has_data() const
{
    return boot_partition_name.is_set
	|| committed_packages.is_set
	|| error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| number_of_committed_packages.is_set;
}

bool SoftwareInstall::Committed::CommittedPackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(committed_packages.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(number_of_committed_packages.yfilter);
}

std::string SoftwareInstall::Committed::CommittedPackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-package-info";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Committed::CommittedPackageInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/committed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (committed_packages.is_set || is_set(committed_packages.yfilter)) leaf_name_data.push_back(committed_packages.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (number_of_committed_packages.is_set || is_set(number_of_committed_packages.yfilter)) leaf_name_data.push_back(number_of_committed_packages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Committed::CommittedPackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Committed::CommittedPackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Committed::CommittedPackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-packages")
    {
        committed_packages = value;
        committed_packages.value_namespace = name_space;
        committed_packages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages = value;
        number_of_committed_packages.value_namespace = name_space;
        number_of_committed_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Committed::CommittedPackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "committed-packages")
    {
        committed_packages.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::Committed::CommittedPackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-partition-name" || name == "committed-packages" || name == "error-message" || name == "location" || name == "node-type" || name == "number-of-committed-packages")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::AllOperationsLog()
    :
    detail(std::make_shared<SoftwareInstall::AllOperationsLog::Detail>())
	,summary(std::make_shared<SoftwareInstall::AllOperationsLog::Summary>())
{
    detail->parent = this;

    summary->parent = this;

    yang_name = "all-operations-log"; yang_parent_name = "software-install";
}

SoftwareInstall::AllOperationsLog::~AllOperationsLog()
{
}

bool SoftwareInstall::AllOperationsLog::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool SoftwareInstall::AllOperationsLog::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string SoftwareInstall::AllOperationsLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-operations-log";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::AllOperationsLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::AllOperationsLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::AllOperationsLog::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SoftwareInstall::AllOperationsLog::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::AllOperationsLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void SoftwareInstall::AllOperationsLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::AllOperationsLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::AllOperationsLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "summary")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::Summary::Summary()
    :
    log{YType::str, "log"}
{
    yang_name = "summary"; yang_parent_name = "all-operations-log";
}

SoftwareInstall::AllOperationsLog::Summary::~Summary()
{
}

bool SoftwareInstall::AllOperationsLog::Summary::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::AllOperationsLog::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::AllOperationsLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::AllOperationsLog::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::AllOperationsLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::AllOperationsLog::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::AllOperationsLog::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::AllOperationsLog::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::AllOperationsLog::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::Detail::Detail()
    :
    log{YType::str, "log"}
{
    yang_name = "detail"; yang_parent_name = "all-operations-log";
}

SoftwareInstall::AllOperationsLog::Detail::~Detail()
{
}

bool SoftwareInstall::AllOperationsLog::Detail::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::AllOperationsLog::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::AllOperationsLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::AllOperationsLog::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::AllOperationsLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::AllOperationsLog::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::AllOperationsLog::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::AllOperationsLog::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::AllOperationsLog::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Packages::Packages()
{
    yang_name = "packages"; yang_parent_name = "software-install";
}

SoftwareInstall::Packages::~Packages()
{
}

bool SoftwareInstall::Packages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Packages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Packages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::Packages::Package>();
        c->parent = this;
        package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Package()
    :
    package_name{YType::str, "package-name"}
    	,
    brief(std::make_shared<SoftwareInstall::Packages::Package::Brief>())
	,detail(std::make_shared<SoftwareInstall::Packages::Package::Detail>())
	,verbose(std::make_shared<SoftwareInstall::Packages::Package::Verbose>())
{
    brief->parent = this;

    detail->parent = this;

    verbose->parent = this;

    yang_name = "package"; yang_parent_name = "packages";
}

SoftwareInstall::Packages::Package::~Package()
{
}

bool SoftwareInstall::Packages::Package::has_data() const
{
    return package_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (verbose !=  nullptr && verbose->has_data());
}

bool SoftwareInstall::Packages::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package_name.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (verbose !=  nullptr && verbose->has_operation());
}

std::string SoftwareInstall::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package" <<"[package-name='" <<package_name <<"']";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Packages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/packages/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.yfilter)) leaf_name_data.push_back(package_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<SoftwareInstall::Packages::Package::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::Packages::Package::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "verbose")
    {
        if(verbose == nullptr)
        {
            verbose = std::make_shared<SoftwareInstall::Packages::Package::Verbose>();
        }
        return verbose;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Packages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(verbose != nullptr)
    {
        children["verbose"] = verbose;
    }

    return children;
}

void SoftwareInstall::Packages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package-name")
    {
        package_name = value;
        package_name.value_namespace = name_space;
        package_name.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package-name")
    {
        package_name.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail" || name == "verbose" || name == "package-name")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Verbose::Verbose()
    :
    log{YType::str, "log"}
{
    yang_name = "verbose"; yang_parent_name = "package";
}

SoftwareInstall::Packages::Package::Verbose::~Verbose()
{
}

bool SoftwareInstall::Packages::Package::Verbose::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Packages::Package::Verbose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Packages::Package::Verbose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verbose";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Packages::Package::Verbose::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verbose' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Packages::Package::Verbose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Packages::Package::Verbose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Packages::Package::Verbose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::Verbose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::Verbose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Brief::Brief()
    :
    log{YType::str, "log"}
{
    yang_name = "brief"; yang_parent_name = "package";
}

SoftwareInstall::Packages::Package::Brief::~Brief()
{
}

bool SoftwareInstall::Packages::Package::Brief::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Packages::Package::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Packages::Package::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Packages::Package::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Packages::Package::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Packages::Package::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Packages::Package::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Detail::Detail()
    :
    log{YType::str, "log"}
{
    yang_name = "detail"; yang_parent_name = "package";
}

SoftwareInstall::Packages::Package::Detail::~Detail()
{
}

bool SoftwareInstall::Packages::Package::Detail::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Packages::Package::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Packages::Package::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Packages::Package::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detail' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Packages::Package::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Packages::Package::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Packages::Package::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLogs()
{
    yang_name = "operation-logs"; yang_parent_name = "software-install";
}

SoftwareInstall::OperationLogs::~OperationLogs()
{
}

bool SoftwareInstall::OperationLogs::has_data() const
{
    for (std::size_t index=0; index<operation_log.size(); index++)
    {
        if(operation_log[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::OperationLogs::has_operation() const
{
    for (std::size_t index=0; index<operation_log.size(); index++)
    {
        if(operation_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::OperationLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-logs";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::OperationLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::OperationLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-log")
    {
        for(auto const & c : operation_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SoftwareInstall::OperationLogs::OperationLog>();
        c->parent = this;
        operation_log.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::OperationLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_log)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SoftwareInstall::OperationLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::OperationLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::OperationLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-log")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLog::OperationLog()
    :
    log_id{YType::int32, "log-id"}
    	,
    detail(std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Detail>())
	,summary(std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Summary>())
{
    detail->parent = this;

    summary->parent = this;

    yang_name = "operation-log"; yang_parent_name = "operation-logs";
}

SoftwareInstall::OperationLogs::OperationLog::~OperationLog()
{
}

bool SoftwareInstall::OperationLogs::OperationLog::has_data() const
{
    return log_id.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool SoftwareInstall::OperationLogs::OperationLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_id.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string SoftwareInstall::OperationLogs::OperationLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-log" <<"[log-id='" <<log_id <<"']";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::OperationLogs::OperationLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/operation-logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_id.is_set || is_set(log_id.yfilter)) leaf_name_data.push_back(log_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::OperationLogs::OperationLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::OperationLogs::OperationLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void SoftwareInstall::OperationLogs::OperationLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-id")
    {
        log_id = value;
        log_id.value_namespace = name_space;
        log_id.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::OperationLogs::OperationLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-id")
    {
        log_id.yfilter = yfilter;
    }
}

bool SoftwareInstall::OperationLogs::OperationLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "summary" || name == "log-id")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLog::Summary::Summary()
    :
    log{YType::str, "log"}
{
    yang_name = "summary"; yang_parent_name = "operation-log";
}

SoftwareInstall::OperationLogs::OperationLog::Summary::~Summary()
{
}

bool SoftwareInstall::OperationLogs::OperationLog::Summary::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::OperationLogs::OperationLog::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::OperationLogs::OperationLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::OperationLogs::OperationLog::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::OperationLogs::OperationLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::OperationLogs::OperationLog::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::OperationLogs::OperationLog::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::OperationLogs::OperationLog::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::OperationLogs::OperationLog::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLog::Detail::Detail()
    :
    log{YType::str, "log"}
{
    yang_name = "detail"; yang_parent_name = "operation-log";
}

SoftwareInstall::OperationLogs::OperationLog::Detail::~Detail()
{
}

bool SoftwareInstall::OperationLogs::OperationLog::Detail::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::OperationLogs::OperationLog::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::OperationLogs::OperationLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::OperationLogs::OperationLog::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detail' in Cisco_IOS_XR_spirit_install_instmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::OperationLogs::OperationLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::OperationLogs::OperationLog::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::OperationLogs::OperationLog::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::OperationLogs::OperationLog::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::OperationLogs::OperationLog::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Repository::Repository()
    :
    all(std::make_shared<SoftwareInstall::Repository::All>())
	,xr(std::make_shared<SoftwareInstall::Repository::Xr>())
{
    all->parent = this;

    xr->parent = this;

    yang_name = "repository"; yang_parent_name = "software-install";
}

SoftwareInstall::Repository::~Repository()
{
}

bool SoftwareInstall::Repository::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (xr !=  nullptr && xr->has_data());
}

bool SoftwareInstall::Repository::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (xr !=  nullptr && xr->has_operation());
}

std::string SoftwareInstall::Repository::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "repository";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Repository::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Repository::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<SoftwareInstall::Repository::All>();
        }
        return all;
    }

    if(child_yang_name == "xr")
    {
        if(xr == nullptr)
        {
            xr = std::make_shared<SoftwareInstall::Repository::Xr>();
        }
        return xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Repository::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(xr != nullptr)
    {
        children["xr"] = xr;
    }

    return children;
}

void SoftwareInstall::Repository::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Repository::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Repository::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "xr")
        return true;
    return false;
}

SoftwareInstall::Repository::Xr::Xr()
    :
    log{YType::str, "log"}
{
    yang_name = "xr"; yang_parent_name = "repository";
}

SoftwareInstall::Repository::Xr::~Xr()
{
}

bool SoftwareInstall::Repository::Xr::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Repository::Xr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Repository::Xr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Repository::Xr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/repository/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Repository::Xr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Repository::Xr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Repository::Xr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Repository::Xr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Repository::Xr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Repository::All::All()
    :
    log{YType::str, "log"}
{
    yang_name = "all"; yang_parent_name = "repository";
}

SoftwareInstall::Repository::All::~All()
{
}

bool SoftwareInstall::Repository::All::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Repository::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Repository::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath SoftwareInstall::Repository::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/repository/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SoftwareInstall::Repository::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SoftwareInstall::Repository::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SoftwareInstall::Repository::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Repository::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Repository::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

const Enum::YLeaf IsdIssuStatusEt::ok {0, "ok"};
const Enum::YLeaf IsdIssuStatusEt::prep_done {1, "prep-done"};
const Enum::YLeaf IsdIssuStatusEt::big_bang {2, "big-bang"};
const Enum::YLeaf IsdIssuStatusEt::done {3, "done"};
const Enum::YLeaf IsdIssuStatusEt::abort {4, "abort"};
const Enum::YLeaf IsdIssuStatusEt::cmd_reject {5, "cmd-reject"};
const Enum::YLeaf IsdIssuStatusEt::unknown {6, "unknown"};
const Enum::YLeaf IsdIssuStatusEt::abort_cleanup {7, "abort-cleanup"};
const Enum::YLeaf IsdIssuStatusEt::abort_cmd_reject {8, "abort-cmd-reject"};

const Enum::YLeaf NodeRoleEt::node_unknown {0, "node-unknown"};
const Enum::YLeaf NodeRoleEt::node_active {1, "node-active"};
const Enum::YLeaf NodeRoleEt::node_standby {2, "node-standby"};
const Enum::YLeaf NodeRoleEt::node_unusable {3, "node-unusable"};

const Enum::YLeaf IssuNodeRoleEt::unknown_role {0, "unknown-role"};
const Enum::YLeaf IssuNodeRoleEt::primary_role {1, "primary-role"};
const Enum::YLeaf IssuNodeRoleEt::secondary_role {2, "secondary-role"};
const Enum::YLeaf IssuNodeRoleEt::tertiary_role {3, "tertiary-role"};

const Enum::YLeaf CardTypeEt::card_rp {0, "card-rp"};
const Enum::YLeaf CardTypeEt::card_drp {1, "card-drp"};
const Enum::YLeaf CardTypeEt::card_lc {2, "card-lc"};
const Enum::YLeaf CardTypeEt::card_sc {3, "card-sc"};
const Enum::YLeaf CardTypeEt::card_sp {4, "card-sp"};
const Enum::YLeaf CardTypeEt::card_other {5, "card-other"};

const Enum::YLeaf IsdErrorEt::none {0, "none"};
const Enum::YLeaf IsdErrorEt::not_compatible {1, "not-compatible"};
const Enum::YLeaf IsdErrorEt::not_enough_resource {2, "not-enough-resource"};
const Enum::YLeaf IsdErrorEt::not_nsr_ready {3, "not-nsr-ready"};
const Enum::YLeaf IsdErrorEt::not_conn_sdrsm {4, "not-conn-sdrsm"};
const Enum::YLeaf IsdErrorEt::cmd_invalid {5, "cmd-invalid"};
const Enum::YLeaf IsdErrorEt::load_prep_fail {6, "load-prep-fail"};
const Enum::YLeaf IsdErrorEt::error_timeout {7, "error-timeout"};
const Enum::YLeaf IsdErrorEt::err_node_down {8, "err-node-down"};
const Enum::YLeaf IsdErrorEt::node_not_ready {9, "node-not-ready"};
const Enum::YLeaf IsdErrorEt::err_node_new {10, "err-node-new"};
const Enum::YLeaf IsdErrorEt::err_card_oir {11, "err-card-oir"};
const Enum::YLeaf IsdErrorEt::invalid_evt {12, "invalid-evt"};
const Enum::YLeaf IsdErrorEt::disconn_from_calv {13, "disconn-from-calv"};
const Enum::YLeaf IsdErrorEt::gsp_down {14, "gsp-down"};
const Enum::YLeaf IsdErrorEt::abort_by_ism {15, "abort-by-ism"};
const Enum::YLeaf IsdErrorEt::rpfo {16, "rpfo"};
const Enum::YLeaf IsdErrorEt::pkg_null {17, "pkg-null"};
const Enum::YLeaf IsdErrorEt::error_general {18, "error-general"};
const Enum::YLeaf IsdErrorEt::fsa_error {19, "fsa-error"};
const Enum::YLeaf IsdErrorEt::err_post_issu {20, "err-post-issu"};
const Enum::YLeaf IsdErrorEt::err_issu_dir_restart {21, "err-issu-dir-restart"};

const Enum::YLeaf IssudirNodeStatusEt::not_issu_ready {0, "not-issu-ready"};
const Enum::YLeaf IssudirNodeStatusEt::issu_ready {1, "issu-ready"};
const Enum::YLeaf IssudirNodeStatusEt::isus_go {2, "isus-go"};
const Enum::YLeaf IssudirNodeStatusEt::node_fail {3, "node-fail"};

const Enum::YLeaf IsdStateEt::none {0, "none"};
const Enum::YLeaf IsdStateEt::idle {1, "idle"};
const Enum::YLeaf IsdStateEt::init {2, "init"};
const Enum::YLeaf IsdStateEt::init_done {3, "init-done"};
const Enum::YLeaf IsdStateEt::load_prep {4, "load-prep"};
const Enum::YLeaf IsdStateEt::load_exec {5, "load-exec"};
const Enum::YLeaf IsdStateEt::load_issu_go {6, "load-issu-go"};
const Enum::YLeaf IsdStateEt::load_done {7, "load-done"};
const Enum::YLeaf IsdStateEt::run_prep {8, "run-prep"};
const Enum::YLeaf IsdStateEt::big_bang {9, "big-bang"};
const Enum::YLeaf IsdStateEt::run_done {10, "run-done"};
const Enum::YLeaf IsdStateEt::cleanup {11, "cleanup"};
const Enum::YLeaf IsdStateEt::cleanup_done {12, "cleanup-done"};
const Enum::YLeaf IsdStateEt::abort {13, "abort"};
const Enum::YLeaf IsdStateEt::abort_done {14, "abort-done"};
const Enum::YLeaf IsdStateEt::abort_cleanup {15, "abort-cleanup"};
const Enum::YLeaf IsdStateEt::unknown_state {16, "unknown-state"};


}
}

