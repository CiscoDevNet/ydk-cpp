
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_spirit_install_instmgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_spirit_install_instmgr_oper {

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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Files::File::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Files::File::Brief::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Files::File::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Files::File::Brief::get_children()
{
    return children;
}

void SoftwareInstall::Files::File::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Files::File::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Files::File::Detail::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Files::File::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Files::File::Detail::get_children()
{
    return children;
}

void SoftwareInstall::Files::File::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

SoftwareInstall::Files::File::File()
    :
    	file_name{YType::str, "file-name"}
    	,
    brief(std::make_unique<SoftwareInstall::Files::File::Brief>())
	,detail(std::make_unique<SoftwareInstall::Files::File::Detail>())
{
    brief->parent = this;
    children["brief"] = brief.get();

    detail->parent = this;
    children["detail"] = detail.get();

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
    return is_set(operation)
	|| is_set(file_name.operation)
	|| (brief !=  nullptr && is_set(brief->operation))
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string SoftwareInstall::Files::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file" <<"[file-name='" <<file_name.get() <<"']";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Files::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/files/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.operation)) leaf_name_data.push_back(file_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Files::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
        else
        {
            brief = std::make_unique<SoftwareInstall::Files::File::Brief>();
            brief->parent = this;
            children["brief"] = brief.get();
        }
        return children.at("brief");
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<SoftwareInstall::Files::File::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Files::File::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
    }

    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void SoftwareInstall::Files::File::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-name")
    {
        file_name = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::Files::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "files";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Files::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Files::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "file")
    {
        for(auto const & c : file)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::Files::File>();
        c->parent = this;
        file.push_back(std::move(c));
        children[segment_path] = file.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Files::get_children()
{
    for (auto const & c : file)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::Files::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::get_children()
{
    return children;
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::get_children()
{
    return children;
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

SoftwareInstall::LastNOperationLogs::LastNOperationLog::LastNOperationLog()
    :
    	last_n_logs{YType::int32, "last-n-logs"}
    	,
    detail(std::make_unique<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail>())
	,summary(std::make_unique<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    summary->parent = this;
    children["summary"] = summary.get();

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
    return is_set(operation)
	|| is_set(last_n_logs.operation)
	|| (detail !=  nullptr && is_set(detail->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
}

std::string SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-n-operation-log" <<"[last-n-logs='" <<last_n_logs.get() <<"']";

    return path_buffer.str();

}

EntityPath SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/last-n-operation-logs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_n_logs.is_set || is_set(last_n_logs.operation)) leaf_name_data.push_back(last_n_logs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<SoftwareInstall::LastNOperationLogs::LastNOperationLog::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::LastNOperationLogs::LastNOperationLog::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void SoftwareInstall::LastNOperationLogs::LastNOperationLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-n-logs")
    {
        last_n_logs = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::LastNOperationLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-n-operation-logs";

    return path_buffer.str();

}

EntityPath SoftwareInstall::LastNOperationLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::LastNOperationLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-n-operation-log")
    {
        for(auto const & c : last_n_operation_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::LastNOperationLogs::LastNOperationLog>();
        c->parent = this;
        last_n_operation_log.push_back(std::move(c));
        children[segment_path] = last_n_operation_log.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::LastNOperationLogs::get_children()
{
    for (auto const & c : last_n_operation_log)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::LastNOperationLogs::set_value(const std::string & value_path, std::string value)
{
}

SoftwareInstall::Prepare::Prepare()
    :
    	log{YType::str, "log"}
{
    yang_name = "prepare"; yang_parent_name = "software-install";
}

SoftwareInstall::Prepare::~Prepare()
{
}

bool SoftwareInstall::Prepare::has_data() const
{
    return log.is_set;
}

bool SoftwareInstall::Prepare::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Prepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Prepare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Prepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Prepare::get_children()
{
    return children;
}

void SoftwareInstall::Prepare::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(active_packages.operation)
	|| is_set(boot_partition_name.operation)
	|| is_set(error_message.operation)
	|| is_set(location.operation)
	|| is_set(node_type.operation)
	|| is_set(number_of_active_packages.operation);
}

std::string SoftwareInstall::Active::ActivePackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-package-info";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Active::ActivePackageInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_packages.is_set || is_set(active_packages.operation)) leaf_name_data.push_back(active_packages.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.operation)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (number_of_active_packages.is_set || is_set(number_of_active_packages.operation)) leaf_name_data.push_back(number_of_active_packages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Active::ActivePackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Active::ActivePackageInfo::get_children()
{
    return children;
}

void SoftwareInstall::Active::ActivePackageInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-packages")
    {
        active_packages = value;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
    }
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-package-info")
    {
        for(auto const & c : active_package_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::Active::ActivePackageInfo>();
        c->parent = this;
        active_package_info.push_back(std::move(c));
        children[segment_path] = active_package_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Active::get_children()
{
    for (auto const & c : active_package_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::Active::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Version::get_children()
{
    return children;
}

void SoftwareInstall::Version::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Inactive::get_children()
{
    return children;
}

void SoftwareInstall::Inactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Request::get_children()
{
    return children;
}

void SoftwareInstall::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(issu_error.operation)
	|| is_set(issu_node_cnt.operation)
	|| is_set(issu_ready_node_cnt.operation)
	|| is_set(issu_status.operation)
	|| is_set(percentage.operation)
	|| is_set(state.operation);
}

std::string SoftwareInstall::Issu::Stage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stage";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Issu::Stage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (issu_error.is_set || is_set(issu_error.operation)) leaf_name_data.push_back(issu_error.get_name_leafdata());
    if (issu_node_cnt.is_set || is_set(issu_node_cnt.operation)) leaf_name_data.push_back(issu_node_cnt.get_name_leafdata());
    if (issu_ready_node_cnt.is_set || is_set(issu_ready_node_cnt.operation)) leaf_name_data.push_back(issu_ready_node_cnt.get_name_leafdata());
    if (issu_status.is_set || is_set(issu_status.operation)) leaf_name_data.push_back(issu_status.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Issu::Stage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Issu::Stage::get_children()
{
    return children;
}

void SoftwareInstall::Issu::Stage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "issu-error")
    {
        issu_error = value;
    }
    if(value_path == "issu-node-cnt")
    {
        issu_node_cnt = value;
    }
    if(value_path == "issu-ready-node-cnt")
    {
        issu_ready_node_cnt = value;
    }
    if(value_path == "issu-status")
    {
        issu_status = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
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
    return is_set(operation)
	|| is_set(issu_node_role.operation)
	|| is_set(node_id.operation)
	|| is_set(node_role.operation)
	|| is_set(node_state.operation)
	|| is_set(node_type.operation);
}

std::string SoftwareInstall::Issu::Inventory::Invinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invinfo";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Issu::Inventory::Invinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (issu_node_role.is_set || is_set(issu_node_role.operation)) leaf_name_data.push_back(issu_node_role.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (node_role.is_set || is_set(node_role.operation)) leaf_name_data.push_back(node_role.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.operation)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Issu::Inventory::Invinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Issu::Inventory::Invinfo::get_children()
{
    return children;
}

void SoftwareInstall::Issu::Inventory::Invinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "issu-node-role")
    {
        issu_node_role = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "node-role")
    {
        node_role = value;
    }
    if(value_path == "node-state")
    {
        node_state = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::Issu::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Issu::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Issu::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invinfo")
    {
        for(auto const & c : invinfo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::Issu::Inventory::Invinfo>();
        c->parent = this;
        invinfo.push_back(std::move(c));
        children[segment_path] = invinfo.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Issu::Inventory::get_children()
{
    for (auto const & c : invinfo)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::Issu::Inventory::set_value(const std::string & value_path, std::string value)
{
}

SoftwareInstall::Issu::Issu()
    :
    inventory(std::make_unique<SoftwareInstall::Issu::Inventory>())
	,stage(std::make_unique<SoftwareInstall::Issu::Stage>())
{
    inventory->parent = this;
    children["inventory"] = inventory.get();

    stage->parent = this;
    children["stage"] = stage.get();

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
    return is_set(operation)
	|| (inventory !=  nullptr && is_set(inventory->operation))
	|| (stage !=  nullptr && is_set(stage->operation));
}

std::string SoftwareInstall::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventory")
    {
        if(inventory != nullptr)
        {
            children["inventory"] = inventory.get();
        }
        else
        {
            inventory = std::make_unique<SoftwareInstall::Issu::Inventory>();
            inventory->parent = this;
            children["inventory"] = inventory.get();
        }
        return children.at("inventory");
    }

    if(child_yang_name == "stage")
    {
        if(stage != nullptr)
        {
            children["stage"] = stage.get();
        }
        else
        {
            stage = std::make_unique<SoftwareInstall::Issu::Stage>();
            stage->parent = this;
            children["stage"] = stage.get();
        }
        return children.at("stage");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Issu::get_children()
{
    if(children.find("inventory") == children.end())
    {
        if(inventory != nullptr)
        {
            children["inventory"] = inventory.get();
        }
    }

    if(children.find("stage") == children.end())
    {
        if(stage != nullptr)
        {
            children["stage"] = stage.get();
        }
    }

    return children;
}

void SoftwareInstall::Issu::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(boot_partition_name.operation)
	|| is_set(committed_packages.operation)
	|| is_set(error_message.operation)
	|| is_set(location.operation)
	|| is_set(node_type.operation)
	|| is_set(number_of_committed_packages.operation);
}

std::string SoftwareInstall::Committed::CommittedPackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-package-info";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Committed::CommittedPackageInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/committed/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_partition_name.is_set || is_set(boot_partition_name.operation)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (committed_packages.is_set || is_set(committed_packages.operation)) leaf_name_data.push_back(committed_packages.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (number_of_committed_packages.is_set || is_set(number_of_committed_packages.operation)) leaf_name_data.push_back(number_of_committed_packages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Committed::CommittedPackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Committed::CommittedPackageInfo::get_children()
{
    return children;
}

void SoftwareInstall::Committed::CommittedPackageInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
    }
    if(value_path == "committed-packages")
    {
        committed_packages = value;
    }
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::Committed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Committed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Committed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "committed-package-info")
    {
        for(auto const & c : committed_package_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::Committed::CommittedPackageInfo>();
        c->parent = this;
        committed_package_info.push_back(std::move(c));
        children[segment_path] = committed_package_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Committed::get_children()
{
    for (auto const & c : committed_package_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::Committed::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::AllOperationsLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath SoftwareInstall::AllOperationsLog::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::AllOperationsLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::AllOperationsLog::Summary::get_children()
{
    return children;
}

void SoftwareInstall::AllOperationsLog::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::AllOperationsLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath SoftwareInstall::AllOperationsLog::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::AllOperationsLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::AllOperationsLog::Detail::get_children()
{
    return children;
}

void SoftwareInstall::AllOperationsLog::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

SoftwareInstall::AllOperationsLog::AllOperationsLog()
    :
    detail(std::make_unique<SoftwareInstall::AllOperationsLog::Detail>())
	,summary(std::make_unique<SoftwareInstall::AllOperationsLog::Summary>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    summary->parent = this;
    children["summary"] = summary.get();

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
    return is_set(operation)
	|| (detail !=  nullptr && is_set(detail->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
}

std::string SoftwareInstall::AllOperationsLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-operations-log";

    return path_buffer.str();

}

EntityPath SoftwareInstall::AllOperationsLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::AllOperationsLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<SoftwareInstall::AllOperationsLog::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<SoftwareInstall::AllOperationsLog::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::AllOperationsLog::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void SoftwareInstall::AllOperationsLog::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Packages::Package::Verbose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verbose";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Packages::Package::Verbose::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Packages::Package::Verbose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Packages::Package::Verbose::get_children()
{
    return children;
}

void SoftwareInstall::Packages::Package::Verbose::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Packages::Package::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Packages::Package::Brief::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Packages::Package::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Packages::Package::Brief::get_children()
{
    return children;
}

void SoftwareInstall::Packages::Package::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Packages::Package::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Packages::Package::Detail::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Packages::Package::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Packages::Package::Detail::get_children()
{
    return children;
}

void SoftwareInstall::Packages::Package::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

SoftwareInstall::Packages::Package::Package()
    :
    	package_name{YType::str, "package-name"}
    	,
    brief(std::make_unique<SoftwareInstall::Packages::Package::Brief>())
	,detail(std::make_unique<SoftwareInstall::Packages::Package::Detail>())
	,verbose(std::make_unique<SoftwareInstall::Packages::Package::Verbose>())
{
    brief->parent = this;
    children["brief"] = brief.get();

    detail->parent = this;
    children["detail"] = detail.get();

    verbose->parent = this;
    children["verbose"] = verbose.get();

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
    return is_set(operation)
	|| is_set(package_name.operation)
	|| (brief !=  nullptr && is_set(brief->operation))
	|| (detail !=  nullptr && is_set(detail->operation))
	|| (verbose !=  nullptr && is_set(verbose->operation));
}

std::string SoftwareInstall::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package" <<"[package-name='" <<package_name.get() <<"']";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Packages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/packages/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.operation)) leaf_name_data.push_back(package_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
        else
        {
            brief = std::make_unique<SoftwareInstall::Packages::Package::Brief>();
            brief->parent = this;
            children["brief"] = brief.get();
        }
        return children.at("brief");
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<SoftwareInstall::Packages::Package::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    if(child_yang_name == "verbose")
    {
        if(verbose != nullptr)
        {
            children["verbose"] = verbose.get();
        }
        else
        {
            verbose = std::make_unique<SoftwareInstall::Packages::Package::Verbose>();
            verbose->parent = this;
            children["verbose"] = verbose.get();
        }
        return children.at("verbose");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Packages::Package::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
    }

    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    if(children.find("verbose") == children.end())
    {
        if(verbose != nullptr)
        {
            children["verbose"] = verbose.get();
        }
    }

    return children;
}

void SoftwareInstall::Packages::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "package-name")
    {
        package_name = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Packages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::Packages::Package>();
        c->parent = this;
        package.push_back(std::move(c));
        children[segment_path] = package.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Packages::get_children()
{
    for (auto const & c : package)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::Packages::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::OperationLogs::OperationLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath SoftwareInstall::OperationLogs::OperationLog::Summary::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::OperationLogs::OperationLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::OperationLogs::OperationLog::Summary::get_children()
{
    return children;
}

void SoftwareInstall::OperationLogs::OperationLog::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::OperationLogs::OperationLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath SoftwareInstall::OperationLogs::OperationLog::Detail::get_entity_path(Entity* ancestor) const
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

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::OperationLogs::OperationLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::OperationLogs::OperationLog::Detail::get_children()
{
    return children;
}

void SoftwareInstall::OperationLogs::OperationLog::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

SoftwareInstall::OperationLogs::OperationLog::OperationLog()
    :
    	log_id{YType::int32, "log-id"}
    	,
    detail(std::make_unique<SoftwareInstall::OperationLogs::OperationLog::Detail>())
	,summary(std::make_unique<SoftwareInstall::OperationLogs::OperationLog::Summary>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    summary->parent = this;
    children["summary"] = summary.get();

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
    return is_set(operation)
	|| is_set(log_id.operation)
	|| (detail !=  nullptr && is_set(detail->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
}

std::string SoftwareInstall::OperationLogs::OperationLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-log" <<"[log-id='" <<log_id.get() <<"']";

    return path_buffer.str();

}

EntityPath SoftwareInstall::OperationLogs::OperationLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/operation-logs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_id.is_set || is_set(log_id.operation)) leaf_name_data.push_back(log_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::OperationLogs::OperationLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<SoftwareInstall::OperationLogs::OperationLog::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<SoftwareInstall::OperationLogs::OperationLog::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::OperationLogs::OperationLog::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void SoftwareInstall::OperationLogs::OperationLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-id")
    {
        log_id = value;
    }
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
    return is_set(operation);
}

std::string SoftwareInstall::OperationLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-logs";

    return path_buffer.str();

}

EntityPath SoftwareInstall::OperationLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::OperationLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operation-log")
    {
        for(auto const & c : operation_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SoftwareInstall::OperationLogs::OperationLog>();
        c->parent = this;
        operation_log.push_back(std::move(c));
        children[segment_path] = operation_log.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::OperationLogs::get_children()
{
    for (auto const & c : operation_log)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SoftwareInstall::OperationLogs::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Repository::Xr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Repository::Xr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/repository/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Repository::Xr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Repository::Xr::get_children()
{
    return children;
}

void SoftwareInstall::Repository::Xr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
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
    return is_set(operation)
	|| is_set(log.operation);
}

std::string SoftwareInstall::Repository::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Repository::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/repository/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Repository::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SoftwareInstall::Repository::All::get_children()
{
    return children;
}

void SoftwareInstall::Repository::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

SoftwareInstall::Repository::Repository()
    :
    all(std::make_unique<SoftwareInstall::Repository::All>())
	,xr(std::make_unique<SoftwareInstall::Repository::Xr>())
{
    all->parent = this;
    children["all"] = all.get();

    xr->parent = this;
    children["xr"] = xr.get();

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
    return is_set(operation)
	|| (all !=  nullptr && is_set(all->operation))
	|| (xr !=  nullptr && is_set(xr->operation));
}

std::string SoftwareInstall::Repository::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "repository";

    return path_buffer.str();

}

EntityPath SoftwareInstall::Repository::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SoftwareInstall::Repository::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all.get();
        }
        else
        {
            all = std::make_unique<SoftwareInstall::Repository::All>();
            all->parent = this;
            children["all"] = all.get();
        }
        return children.at("all");
    }

    if(child_yang_name == "xr")
    {
        if(xr != nullptr)
        {
            children["xr"] = xr.get();
        }
        else
        {
            xr = std::make_unique<SoftwareInstall::Repository::Xr>();
            xr->parent = this;
            children["xr"] = xr.get();
        }
        return children.at("xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::Repository::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all.get();
        }
    }

    if(children.find("xr") == children.end())
    {
        if(xr != nullptr)
        {
            children["xr"] = xr.get();
        }
    }

    return children;
}

void SoftwareInstall::Repository::set_value(const std::string & value_path, std::string value)
{
}

SoftwareInstall::SoftwareInstall()
    :
    active(std::make_unique<SoftwareInstall::Active>())
	,all_operations_log(std::make_unique<SoftwareInstall::AllOperationsLog>())
	,committed(std::make_unique<SoftwareInstall::Committed>())
	,files(std::make_unique<SoftwareInstall::Files>())
	,inactive(std::make_unique<SoftwareInstall::Inactive>())
	,issu(std::make_unique<SoftwareInstall::Issu>())
	,last_n_operation_logs(std::make_unique<SoftwareInstall::LastNOperationLogs>())
	,operation_logs(std::make_unique<SoftwareInstall::OperationLogs>())
	,packages(std::make_unique<SoftwareInstall::Packages>())
	,prepare(std::make_unique<SoftwareInstall::Prepare>())
	,repository(std::make_unique<SoftwareInstall::Repository>())
	,request(std::make_unique<SoftwareInstall::Request>())
	,version(std::make_unique<SoftwareInstall::Version>())
{
    active->parent = this;
    children["active"] = active.get();

    all_operations_log->parent = this;
    children["all-operations-log"] = all_operations_log.get();

    committed->parent = this;
    children["committed"] = committed.get();

    files->parent = this;
    children["files"] = files.get();

    inactive->parent = this;
    children["inactive"] = inactive.get();

    issu->parent = this;
    children["issu"] = issu.get();

    last_n_operation_logs->parent = this;
    children["last-n-operation-logs"] = last_n_operation_logs.get();

    operation_logs->parent = this;
    children["operation-logs"] = operation_logs.get();

    packages->parent = this;
    children["packages"] = packages.get();

    prepare->parent = this;
    children["prepare"] = prepare.get();

    repository->parent = this;
    children["repository"] = repository.get();

    request->parent = this;
    children["request"] = request.get();

    version->parent = this;
    children["version"] = version.get();

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
    return is_set(operation)
	|| (active !=  nullptr && is_set(active->operation))
	|| (all_operations_log !=  nullptr && is_set(all_operations_log->operation))
	|| (committed !=  nullptr && is_set(committed->operation))
	|| (files !=  nullptr && is_set(files->operation))
	|| (inactive !=  nullptr && is_set(inactive->operation))
	|| (issu !=  nullptr && is_set(issu->operation))
	|| (last_n_operation_logs !=  nullptr && is_set(last_n_operation_logs->operation))
	|| (operation_logs !=  nullptr && is_set(operation_logs->operation))
	|| (packages !=  nullptr && is_set(packages->operation))
	|| (prepare !=  nullptr && is_set(prepare->operation))
	|| (repository !=  nullptr && is_set(repository->operation))
	|| (request !=  nullptr && is_set(request->operation))
	|| (version !=  nullptr && is_set(version->operation));
}

std::string SoftwareInstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install";

    return path_buffer.str();

}

EntityPath SoftwareInstall::get_entity_path(Entity* ancestor) const
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

Entity* SoftwareInstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
        else
        {
            active = std::make_unique<SoftwareInstall::Active>();
            active->parent = this;
            children["active"] = active.get();
        }
        return children.at("active");
    }

    if(child_yang_name == "all-operations-log")
    {
        if(all_operations_log != nullptr)
        {
            children["all-operations-log"] = all_operations_log.get();
        }
        else
        {
            all_operations_log = std::make_unique<SoftwareInstall::AllOperationsLog>();
            all_operations_log->parent = this;
            children["all-operations-log"] = all_operations_log.get();
        }
        return children.at("all-operations-log");
    }

    if(child_yang_name == "committed")
    {
        if(committed != nullptr)
        {
            children["committed"] = committed.get();
        }
        else
        {
            committed = std::make_unique<SoftwareInstall::Committed>();
            committed->parent = this;
            children["committed"] = committed.get();
        }
        return children.at("committed");
    }

    if(child_yang_name == "files")
    {
        if(files != nullptr)
        {
            children["files"] = files.get();
        }
        else
        {
            files = std::make_unique<SoftwareInstall::Files>();
            files->parent = this;
            children["files"] = files.get();
        }
        return children.at("files");
    }

    if(child_yang_name == "inactive")
    {
        if(inactive != nullptr)
        {
            children["inactive"] = inactive.get();
        }
        else
        {
            inactive = std::make_unique<SoftwareInstall::Inactive>();
            inactive->parent = this;
            children["inactive"] = inactive.get();
        }
        return children.at("inactive");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu.get();
        }
        else
        {
            issu = std::make_unique<SoftwareInstall::Issu>();
            issu->parent = this;
            children["issu"] = issu.get();
        }
        return children.at("issu");
    }

    if(child_yang_name == "last-n-operation-logs")
    {
        if(last_n_operation_logs != nullptr)
        {
            children["last-n-operation-logs"] = last_n_operation_logs.get();
        }
        else
        {
            last_n_operation_logs = std::make_unique<SoftwareInstall::LastNOperationLogs>();
            last_n_operation_logs->parent = this;
            children["last-n-operation-logs"] = last_n_operation_logs.get();
        }
        return children.at("last-n-operation-logs");
    }

    if(child_yang_name == "operation-logs")
    {
        if(operation_logs != nullptr)
        {
            children["operation-logs"] = operation_logs.get();
        }
        else
        {
            operation_logs = std::make_unique<SoftwareInstall::OperationLogs>();
            operation_logs->parent = this;
            children["operation-logs"] = operation_logs.get();
        }
        return children.at("operation-logs");
    }

    if(child_yang_name == "packages")
    {
        if(packages != nullptr)
        {
            children["packages"] = packages.get();
        }
        else
        {
            packages = std::make_unique<SoftwareInstall::Packages>();
            packages->parent = this;
            children["packages"] = packages.get();
        }
        return children.at("packages");
    }

    if(child_yang_name == "prepare")
    {
        if(prepare != nullptr)
        {
            children["prepare"] = prepare.get();
        }
        else
        {
            prepare = std::make_unique<SoftwareInstall::Prepare>();
            prepare->parent = this;
            children["prepare"] = prepare.get();
        }
        return children.at("prepare");
    }

    if(child_yang_name == "repository")
    {
        if(repository != nullptr)
        {
            children["repository"] = repository.get();
        }
        else
        {
            repository = std::make_unique<SoftwareInstall::Repository>();
            repository->parent = this;
            children["repository"] = repository.get();
        }
        return children.at("repository");
    }

    if(child_yang_name == "request")
    {
        if(request != nullptr)
        {
            children["request"] = request.get();
        }
        else
        {
            request = std::make_unique<SoftwareInstall::Request>();
            request->parent = this;
            children["request"] = request.get();
        }
        return children.at("request");
    }

    if(child_yang_name == "version")
    {
        if(version != nullptr)
        {
            children["version"] = version.get();
        }
        else
        {
            version = std::make_unique<SoftwareInstall::Version>();
            version->parent = this;
            children["version"] = version.get();
        }
        return children.at("version");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SoftwareInstall::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
    }

    if(children.find("all-operations-log") == children.end())
    {
        if(all_operations_log != nullptr)
        {
            children["all-operations-log"] = all_operations_log.get();
        }
    }

    if(children.find("committed") == children.end())
    {
        if(committed != nullptr)
        {
            children["committed"] = committed.get();
        }
    }

    if(children.find("files") == children.end())
    {
        if(files != nullptr)
        {
            children["files"] = files.get();
        }
    }

    if(children.find("inactive") == children.end())
    {
        if(inactive != nullptr)
        {
            children["inactive"] = inactive.get();
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu.get();
        }
    }

    if(children.find("last-n-operation-logs") == children.end())
    {
        if(last_n_operation_logs != nullptr)
        {
            children["last-n-operation-logs"] = last_n_operation_logs.get();
        }
    }

    if(children.find("operation-logs") == children.end())
    {
        if(operation_logs != nullptr)
        {
            children["operation-logs"] = operation_logs.get();
        }
    }

    if(children.find("packages") == children.end())
    {
        if(packages != nullptr)
        {
            children["packages"] = packages.get();
        }
    }

    if(children.find("prepare") == children.end())
    {
        if(prepare != nullptr)
        {
            children["prepare"] = prepare.get();
        }
    }

    if(children.find("repository") == children.end())
    {
        if(repository != nullptr)
        {
            children["repository"] = repository.get();
        }
    }

    if(children.find("request") == children.end())
    {
        if(request != nullptr)
        {
            children["request"] = request.get();
        }
    }

    if(children.find("version") == children.end())
    {
        if(version != nullptr)
        {
            children["version"] = version.get();
        }
    }

    return children;
}

void SoftwareInstall::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SoftwareInstall::clone_ptr()
{
    return std::make_unique<SoftwareInstall>();
}

const Enum::Value IsdErrorEtEnum::none {0, "none"};
const Enum::Value IsdErrorEtEnum::not_compatible {1, "not-compatible"};
const Enum::Value IsdErrorEtEnum::not_enough_resource {2, "not-enough-resource"};
const Enum::Value IsdErrorEtEnum::not_nsr_ready {3, "not-nsr-ready"};
const Enum::Value IsdErrorEtEnum::not_conn_sdrsm {4, "not-conn-sdrsm"};
const Enum::Value IsdErrorEtEnum::cmd_invalid {5, "cmd-invalid"};
const Enum::Value IsdErrorEtEnum::load_prep_fail {6, "load-prep-fail"};
const Enum::Value IsdErrorEtEnum::error_timeout {7, "error-timeout"};
const Enum::Value IsdErrorEtEnum::err_node_down {8, "err-node-down"};
const Enum::Value IsdErrorEtEnum::node_not_ready {9, "node-not-ready"};
const Enum::Value IsdErrorEtEnum::err_node_new {10, "err-node-new"};
const Enum::Value IsdErrorEtEnum::err_card_oir {11, "err-card-oir"};
const Enum::Value IsdErrorEtEnum::invalid_evt {12, "invalid-evt"};
const Enum::Value IsdErrorEtEnum::disconn_from_calv {13, "disconn-from-calv"};
const Enum::Value IsdErrorEtEnum::gsp_down {14, "gsp-down"};
const Enum::Value IsdErrorEtEnum::abort_by_ism {15, "abort-by-ism"};
const Enum::Value IsdErrorEtEnum::rpfo {16, "rpfo"};
const Enum::Value IsdErrorEtEnum::pkg_null {17, "pkg-null"};
const Enum::Value IsdErrorEtEnum::error_general {18, "error-general"};
const Enum::Value IsdErrorEtEnum::fsa_error {19, "fsa-error"};
const Enum::Value IsdErrorEtEnum::err_post_issu {20, "err-post-issu"};
const Enum::Value IsdErrorEtEnum::err_issu_dir_restart {21, "err-issu-dir-restart"};

const Enum::Value NodeRoleEtEnum::node_unknown {0, "node-unknown"};
const Enum::Value NodeRoleEtEnum::node_active {1, "node-active"};
const Enum::Value NodeRoleEtEnum::node_standby {2, "node-standby"};
const Enum::Value NodeRoleEtEnum::node_unusable {3, "node-unusable"};

const Enum::Value IsdStateEtEnum::none {0, "none"};
const Enum::Value IsdStateEtEnum::idle {1, "idle"};
const Enum::Value IsdStateEtEnum::init {2, "init"};
const Enum::Value IsdStateEtEnum::init_done {3, "init-done"};
const Enum::Value IsdStateEtEnum::load_prep {4, "load-prep"};
const Enum::Value IsdStateEtEnum::load_exec {5, "load-exec"};
const Enum::Value IsdStateEtEnum::load_issu_go {6, "load-issu-go"};
const Enum::Value IsdStateEtEnum::load_done {7, "load-done"};
const Enum::Value IsdStateEtEnum::run_prep {8, "run-prep"};
const Enum::Value IsdStateEtEnum::big_bang {9, "big-bang"};
const Enum::Value IsdStateEtEnum::run_done {10, "run-done"};
const Enum::Value IsdStateEtEnum::cleanup {11, "cleanup"};
const Enum::Value IsdStateEtEnum::cleanup_done {12, "cleanup-done"};
const Enum::Value IsdStateEtEnum::abort {13, "abort"};
const Enum::Value IsdStateEtEnum::abort_done {14, "abort-done"};
const Enum::Value IsdStateEtEnum::abort_cleanup {15, "abort-cleanup"};
const Enum::Value IsdStateEtEnum::unknown_state {16, "unknown-state"};

const Enum::Value IsdIssuStatusEtEnum::ok {0, "ok"};
const Enum::Value IsdIssuStatusEtEnum::prep_done {1, "prep-done"};
const Enum::Value IsdIssuStatusEtEnum::big_bang {2, "big-bang"};
const Enum::Value IsdIssuStatusEtEnum::done {3, "done"};
const Enum::Value IsdIssuStatusEtEnum::abort {4, "abort"};
const Enum::Value IsdIssuStatusEtEnum::cmd_reject {5, "cmd-reject"};
const Enum::Value IsdIssuStatusEtEnum::unknown {6, "unknown"};
const Enum::Value IsdIssuStatusEtEnum::abort_cleanup {7, "abort-cleanup"};
const Enum::Value IsdIssuStatusEtEnum::abort_cmd_reject {8, "abort-cmd-reject"};

const Enum::Value IssudirNodeStatusEtEnum::not_issu_ready {0, "not-issu-ready"};
const Enum::Value IssudirNodeStatusEtEnum::issu_ready {1, "issu-ready"};
const Enum::Value IssudirNodeStatusEtEnum::isus_go {2, "isus-go"};
const Enum::Value IssudirNodeStatusEtEnum::node_fail {3, "node-fail"};

const Enum::Value IssuNodeRoleEtEnum::unknown_role {0, "unknown-role"};
const Enum::Value IssuNodeRoleEtEnum::primary_role {1, "primary-role"};
const Enum::Value IssuNodeRoleEtEnum::secondary_role {2, "secondary-role"};
const Enum::Value IssuNodeRoleEtEnum::tertiary_role {3, "tertiary-role"};

const Enum::Value CardTypeEtEnum::card_rp {0, "card-rp"};
const Enum::Value CardTypeEtEnum::card_drp {1, "card-drp"};
const Enum::Value CardTypeEtEnum::card_lc {2, "card-lc"};
const Enum::Value CardTypeEtEnum::card_sc {3, "card-sc"};
const Enum::Value CardTypeEtEnum::card_sp {4, "card-sp"};
const Enum::Value CardTypeEtEnum::card_other {5, "card-other"};


}
}

