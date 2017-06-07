
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_syslog_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_syslog_oper {

Logging::Logging()
    :
    history(std::make_shared<Logging::History>())
{
    history->parent = this;

    yang_name = "logging"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-oper";
}

Logging::~Logging()
{
}

bool Logging::has_data() const
{
    return (history !=  nullptr && history->has_data());
}

bool Logging::has_operation() const
{
    return is_set(operation)
	|| (history !=  nullptr && history->has_operation());
}

std::string Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:logging";

    return path_buffer.str();

}

const EntityPath Logging::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Logging::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Logging::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Logging::clone_ptr() const
{
    return std::make_shared<Logging>();
}

std::string Logging::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Logging::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Logging::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Logging::History::History()
    :
    message{YType::str, "message"},
    properties{YType::str, "properties"}
{
    yang_name = "history"; yang_parent_name = "logging";
}

Logging::History::~History()
{
}

bool Logging::History::has_data() const
{
    return message.is_set
	|| properties.is_set;
}

bool Logging::History::has_operation() const
{
    return is_set(operation)
	|| is_set(message.operation)
	|| is_set(properties.operation);
}

std::string Logging::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Logging::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (properties.is_set || is_set(properties.operation)) leaf_name_data.push_back(properties.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Logging::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Logging::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Logging::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "properties")
    {
        properties = value;
    }
}

Syslog::Syslog()
    :
    an_remote_servers(std::make_shared<Syslog::AnRemoteServers>())
	,logging_files(std::make_shared<Syslog::LoggingFiles>())
	,logging_statistics(std::make_shared<Syslog::LoggingStatistics>())
	,messages(std::make_shared<Syslog::Messages>())
{
    an_remote_servers->parent = this;

    logging_files->parent = this;

    logging_statistics->parent = this;

    messages->parent = this;

    yang_name = "syslog"; yang_parent_name = "Cisco-IOS-XR-infra-syslog-oper";
}

Syslog::~Syslog()
{
}

bool Syslog::has_data() const
{
    return (an_remote_servers !=  nullptr && an_remote_servers->has_data())
	|| (logging_files !=  nullptr && logging_files->has_data())
	|| (logging_statistics !=  nullptr && logging_statistics->has_data())
	|| (messages !=  nullptr && messages->has_data());
}

bool Syslog::has_operation() const
{
    return is_set(operation)
	|| (an_remote_servers !=  nullptr && an_remote_servers->has_operation())
	|| (logging_files !=  nullptr && logging_files->has_operation())
	|| (logging_statistics !=  nullptr && logging_statistics->has_operation())
	|| (messages !=  nullptr && messages->has_operation());
}

std::string Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog";

    return path_buffer.str();

}

const EntityPath Syslog::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "an-remote-servers")
    {
        if(an_remote_servers == nullptr)
        {
            an_remote_servers = std::make_shared<Syslog::AnRemoteServers>();
        }
        return an_remote_servers;
    }

    if(child_yang_name == "logging-files")
    {
        if(logging_files == nullptr)
        {
            logging_files = std::make_shared<Syslog::LoggingFiles>();
        }
        return logging_files;
    }

    if(child_yang_name == "logging-statistics")
    {
        if(logging_statistics == nullptr)
        {
            logging_statistics = std::make_shared<Syslog::LoggingStatistics>();
        }
        return logging_statistics;
    }

    if(child_yang_name == "messages")
    {
        if(messages == nullptr)
        {
            messages = std::make_shared<Syslog::Messages>();
        }
        return messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(an_remote_servers != nullptr)
    {
        children["an-remote-servers"] = an_remote_servers;
    }

    if(logging_files != nullptr)
    {
        children["logging-files"] = logging_files;
    }

    if(logging_statistics != nullptr)
    {
        children["logging-statistics"] = logging_statistics;
    }

    if(messages != nullptr)
    {
        children["messages"] = messages;
    }

    return children;
}

void Syslog::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Syslog::clone_ptr() const
{
    return std::make_shared<Syslog>();
}

std::string Syslog::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Syslog::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Syslog::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Syslog::LoggingFiles::LoggingFiles()
{
    yang_name = "logging-files"; yang_parent_name = "syslog";
}

Syslog::LoggingFiles::~LoggingFiles()
{
}

bool Syslog::LoggingFiles::has_data() const
{
    for (std::size_t index=0; index<file_log_detail.size(); index++)
    {
        if(file_log_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::LoggingFiles::has_operation() const
{
    for (std::size_t index=0; index<file_log_detail.size(); index++)
    {
        if(file_log_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::LoggingFiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-files";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingFiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingFiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file-log-detail")
    {
        for(auto const & c : file_log_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::LoggingFiles::FileLogDetail>();
        c->parent = this;
        file_log_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingFiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : file_log_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::LoggingFiles::set_value(const std::string & value_path, std::string value)
{
}

Syslog::LoggingFiles::FileLogDetail::FileLogDetail()
    :
    file_name{YType::str, "file-name"},
    file_path{YType::str, "file-path"}
{
    yang_name = "file-log-detail"; yang_parent_name = "logging-files";
}

Syslog::LoggingFiles::FileLogDetail::~FileLogDetail()
{
}

bool Syslog::LoggingFiles::FileLogDetail::has_data() const
{
    return file_name.is_set
	|| file_path.is_set;
}

bool Syslog::LoggingFiles::FileLogDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(file_name.operation)
	|| is_set(file_path.operation);
}

std::string Syslog::LoggingFiles::FileLogDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-log-detail";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingFiles::FileLogDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-files/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.operation)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (file_path.is_set || is_set(file_path.operation)) leaf_name_data.push_back(file_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingFiles::FileLogDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingFiles::FileLogDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingFiles::FileLogDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-name")
    {
        file_name = value;
    }
    if(value_path == "file-path")
    {
        file_path = value;
    }
}

Syslog::AnRemoteServers::AnRemoteServers()
{
    yang_name = "an-remote-servers"; yang_parent_name = "syslog";
}

Syslog::AnRemoteServers::~AnRemoteServers()
{
}

bool Syslog::AnRemoteServers::has_data() const
{
    for (std::size_t index=0; index<an_remote_log_server.size(); index++)
    {
        if(an_remote_log_server[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::AnRemoteServers::has_operation() const
{
    for (std::size_t index=0; index<an_remote_log_server.size(); index++)
    {
        if(an_remote_log_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::AnRemoteServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "an-remote-servers";

    return path_buffer.str();

}

const EntityPath Syslog::AnRemoteServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::AnRemoteServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "an-remote-log-server")
    {
        for(auto const & c : an_remote_log_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::AnRemoteServers::AnRemoteLogServer>();
        c->parent = this;
        an_remote_log_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::AnRemoteServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : an_remote_log_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::AnRemoteServers::set_value(const std::string & value_path, std::string value)
{
}

Syslog::AnRemoteServers::AnRemoteLogServer::AnRemoteLogServer()
    :
    ip_address{YType::str, "ip-address"},
    rh_discriminator{YType::str, "rh-discriminator"},
    vrf_name{YType::str, "vrf-name"},
    vrf_severity{YType::str, "vrf-severity"}
{
    yang_name = "an-remote-log-server"; yang_parent_name = "an-remote-servers";
}

Syslog::AnRemoteServers::AnRemoteLogServer::~AnRemoteLogServer()
{
}

bool Syslog::AnRemoteServers::AnRemoteLogServer::has_data() const
{
    return ip_address.is_set
	|| rh_discriminator.is_set
	|| vrf_name.is_set
	|| vrf_severity.is_set;
}

bool Syslog::AnRemoteServers::AnRemoteLogServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(rh_discriminator.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_severity.operation);
}

std::string Syslog::AnRemoteServers::AnRemoteLogServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "an-remote-log-server";

    return path_buffer.str();

}

const EntityPath Syslog::AnRemoteServers::AnRemoteLogServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/an-remote-servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (rh_discriminator.is_set || is_set(rh_discriminator.operation)) leaf_name_data.push_back(rh_discriminator.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_severity.is_set || is_set(vrf_severity.operation)) leaf_name_data.push_back(vrf_severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::AnRemoteServers::AnRemoteLogServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::AnRemoteServers::AnRemoteLogServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::AnRemoteServers::AnRemoteLogServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "rh-discriminator")
    {
        rh_discriminator = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-severity")
    {
        vrf_severity = value;
    }
}

Syslog::Messages::Messages()
{
    yang_name = "messages"; yang_parent_name = "syslog";
}

Syslog::Messages::~Messages()
{
}

bool Syslog::Messages::has_data() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return false;
}

bool Syslog::Messages::has_operation() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Syslog::Messages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "messages";

    return path_buffer.str();

}

const EntityPath Syslog::Messages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Messages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::Messages::Message>();
        c->parent = this;
        message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Messages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Syslog::Messages::set_value(const std::string & value_path, std::string value)
{
}

Syslog::Messages::Message::Message()
    :
    message_id{YType::int32, "message-id"},
    card_type{YType::str, "card-type"},
    category{YType::str, "category"},
    group{YType::str, "group"},
    message_name{YType::str, "message-name"},
    node_name{YType::str, "node-name"},
    process_name{YType::str, "process-name"},
    severity{YType::enumeration, "severity"},
    text{YType::str, "text"},
    time_of_day{YType::str, "time-of-day"},
    time_stamp{YType::uint64, "time-stamp"},
    time_zone{YType::str, "time-zone"}
{
    yang_name = "message"; yang_parent_name = "messages";
}

Syslog::Messages::Message::~Message()
{
}

bool Syslog::Messages::Message::has_data() const
{
    return message_id.is_set
	|| card_type.is_set
	|| category.is_set
	|| group.is_set
	|| message_name.is_set
	|| node_name.is_set
	|| process_name.is_set
	|| severity.is_set
	|| text.is_set
	|| time_of_day.is_set
	|| time_stamp.is_set
	|| time_zone.is_set;
}

bool Syslog::Messages::Message::has_operation() const
{
    return is_set(operation)
	|| is_set(message_id.operation)
	|| is_set(card_type.operation)
	|| is_set(category.operation)
	|| is_set(group.operation)
	|| is_set(message_name.operation)
	|| is_set(node_name.operation)
	|| is_set(process_name.operation)
	|| is_set(severity.operation)
	|| is_set(text.operation)
	|| is_set(time_of_day.operation)
	|| is_set(time_stamp.operation)
	|| is_set(time_zone.operation);
}

std::string Syslog::Messages::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message" <<"[message-id='" <<message_id <<"']";

    return path_buffer.str();

}

const EntityPath Syslog::Messages::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/messages/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.operation)) leaf_name_data.push_back(message_id.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (message_name.is_set || is_set(message_name.operation)) leaf_name_data.push_back(message_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());
    if (time_of_day.is_set || is_set(time_of_day.operation)) leaf_name_data.push_back(time_of_day.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (time_zone.is_set || is_set(time_zone.operation)) leaf_name_data.push_back(time_zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::Messages::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::Messages::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::Messages::Message::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-id")
    {
        message_id = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "message-name")
    {
        message_name = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "text")
    {
        text = value;
    }
    if(value_path == "time-of-day")
    {
        time_of_day = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
    if(value_path == "time-zone")
    {
        time_zone = value;
    }
}

Syslog::LoggingStatistics::LoggingStatistics()
    :
    buffer_logging_stats(std::make_shared<Syslog::LoggingStatistics::BufferLoggingStats>())
	,console_logging_stats(std::make_shared<Syslog::LoggingStatistics::ConsoleLoggingStats>())
	,logging_stats(std::make_shared<Syslog::LoggingStatistics::LoggingStats>())
	,monitor_logging_stats(std::make_shared<Syslog::LoggingStatistics::MonitorLoggingStats>())
	,trap_logging_stats(std::make_shared<Syslog::LoggingStatistics::TrapLoggingStats>())
{
    buffer_logging_stats->parent = this;

    console_logging_stats->parent = this;

    logging_stats->parent = this;

    monitor_logging_stats->parent = this;

    trap_logging_stats->parent = this;

    yang_name = "logging-statistics"; yang_parent_name = "syslog";
}

Syslog::LoggingStatistics::~LoggingStatistics()
{
}

bool Syslog::LoggingStatistics::has_data() const
{
    for (std::size_t index=0; index<file_logging_stat.size(); index++)
    {
        if(file_logging_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_logging_stat.size(); index++)
    {
        if(remote_logging_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tls_remote_logging_stat.size(); index++)
    {
        if(tls_remote_logging_stat[index]->has_data())
            return true;
    }
    return (buffer_logging_stats !=  nullptr && buffer_logging_stats->has_data())
	|| (console_logging_stats !=  nullptr && console_logging_stats->has_data())
	|| (logging_stats !=  nullptr && logging_stats->has_data())
	|| (monitor_logging_stats !=  nullptr && monitor_logging_stats->has_data())
	|| (trap_logging_stats !=  nullptr && trap_logging_stats->has_data());
}

bool Syslog::LoggingStatistics::has_operation() const
{
    for (std::size_t index=0; index<file_logging_stat.size(); index++)
    {
        if(file_logging_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_logging_stat.size(); index++)
    {
        if(remote_logging_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tls_remote_logging_stat.size(); index++)
    {
        if(tls_remote_logging_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (buffer_logging_stats !=  nullptr && buffer_logging_stats->has_operation())
	|| (console_logging_stats !=  nullptr && console_logging_stats->has_operation())
	|| (logging_stats !=  nullptr && logging_stats->has_operation())
	|| (monitor_logging_stats !=  nullptr && monitor_logging_stats->has_operation())
	|| (trap_logging_stats !=  nullptr && trap_logging_stats->has_operation());
}

std::string Syslog::LoggingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-statistics";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-logging-stats")
    {
        if(buffer_logging_stats == nullptr)
        {
            buffer_logging_stats = std::make_shared<Syslog::LoggingStatistics::BufferLoggingStats>();
        }
        return buffer_logging_stats;
    }

    if(child_yang_name == "console-logging-stats")
    {
        if(console_logging_stats == nullptr)
        {
            console_logging_stats = std::make_shared<Syslog::LoggingStatistics::ConsoleLoggingStats>();
        }
        return console_logging_stats;
    }

    if(child_yang_name == "file-logging-stat")
    {
        for(auto const & c : file_logging_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::LoggingStatistics::FileLoggingStat>();
        c->parent = this;
        file_logging_stat.push_back(c);
        return c;
    }

    if(child_yang_name == "logging-stats")
    {
        if(logging_stats == nullptr)
        {
            logging_stats = std::make_shared<Syslog::LoggingStatistics::LoggingStats>();
        }
        return logging_stats;
    }

    if(child_yang_name == "monitor-logging-stats")
    {
        if(monitor_logging_stats == nullptr)
        {
            monitor_logging_stats = std::make_shared<Syslog::LoggingStatistics::MonitorLoggingStats>();
        }
        return monitor_logging_stats;
    }

    if(child_yang_name == "remote-logging-stat")
    {
        for(auto const & c : remote_logging_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::LoggingStatistics::RemoteLoggingStat>();
        c->parent = this;
        remote_logging_stat.push_back(c);
        return c;
    }

    if(child_yang_name == "tls-remote-logging-stat")
    {
        for(auto const & c : tls_remote_logging_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Syslog::LoggingStatistics::TlsRemoteLoggingStat>();
        c->parent = this;
        tls_remote_logging_stat.push_back(c);
        return c;
    }

    if(child_yang_name == "trap-logging-stats")
    {
        if(trap_logging_stats == nullptr)
        {
            trap_logging_stats = std::make_shared<Syslog::LoggingStatistics::TrapLoggingStats>();
        }
        return trap_logging_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_logging_stats != nullptr)
    {
        children["buffer-logging-stats"] = buffer_logging_stats;
    }

    if(console_logging_stats != nullptr)
    {
        children["console-logging-stats"] = console_logging_stats;
    }

    for (auto const & c : file_logging_stat)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging_stats != nullptr)
    {
        children["logging-stats"] = logging_stats;
    }

    if(monitor_logging_stats != nullptr)
    {
        children["monitor-logging-stats"] = monitor_logging_stats;
    }

    for (auto const & c : remote_logging_stat)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tls_remote_logging_stat)
    {
        children[c->get_segment_path()] = c;
    }

    if(trap_logging_stats != nullptr)
    {
        children["trap-logging-stats"] = trap_logging_stats;
    }

    return children;
}

void Syslog::LoggingStatistics::set_value(const std::string & value_path, std::string value)
{
}

Syslog::LoggingStatistics::LoggingStats::LoggingStats()
    :
    drop_count{YType::uint32, "drop-count"},
    flush_count{YType::uint32, "flush-count"},
    is_log_enabled{YType::boolean, "is-log-enabled"},
    overrun_count{YType::uint32, "overrun-count"}
{
    yang_name = "logging-stats"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::LoggingStats::~LoggingStats()
{
}

bool Syslog::LoggingStatistics::LoggingStats::has_data() const
{
    return drop_count.is_set
	|| flush_count.is_set
	|| is_log_enabled.is_set
	|| overrun_count.is_set;
}

bool Syslog::LoggingStatistics::LoggingStats::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_count.operation)
	|| is_set(flush_count.operation)
	|| is_set(is_log_enabled.operation)
	|| is_set(overrun_count.operation);
}

std::string Syslog::LoggingStatistics::LoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-stats";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::LoggingStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_count.is_set || is_set(drop_count.operation)) leaf_name_data.push_back(drop_count.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.operation)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (is_log_enabled.is_set || is_set(is_log_enabled.operation)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (overrun_count.is_set || is_set(overrun_count.operation)) leaf_name_data.push_back(overrun_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::LoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::LoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::LoggingStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-count")
    {
        drop_count = value;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
    }
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
    }
    if(value_path == "overrun-count")
    {
        overrun_count = value;
    }
}

Syslog::LoggingStatistics::ConsoleLoggingStats::ConsoleLoggingStats()
    :
    buffer_size{YType::uint32, "buffer-size"},
    is_log_enabled{YType::boolean, "is-log-enabled"},
    message_count{YType::uint32, "message-count"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "console-logging-stats"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::ConsoleLoggingStats::~ConsoleLoggingStats()
{
}

bool Syslog::LoggingStatistics::ConsoleLoggingStats::has_data() const
{
    return buffer_size.is_set
	|| is_log_enabled.is_set
	|| message_count.is_set
	|| severity.is_set;
}

bool Syslog::LoggingStatistics::ConsoleLoggingStats::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| is_set(is_log_enabled.operation)
	|| is_set(message_count.operation)
	|| is_set(severity.operation);
}

std::string Syslog::LoggingStatistics::ConsoleLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-logging-stats";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::ConsoleLoggingStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (is_log_enabled.is_set || is_set(is_log_enabled.operation)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::ConsoleLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::ConsoleLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::ConsoleLoggingStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
    }
    if(value_path == "message-count")
    {
        message_count = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::LoggingStatistics::MonitorLoggingStats::MonitorLoggingStats()
    :
    buffer_size{YType::uint32, "buffer-size"},
    is_log_enabled{YType::boolean, "is-log-enabled"},
    message_count{YType::uint32, "message-count"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "monitor-logging-stats"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::MonitorLoggingStats::~MonitorLoggingStats()
{
}

bool Syslog::LoggingStatistics::MonitorLoggingStats::has_data() const
{
    return buffer_size.is_set
	|| is_log_enabled.is_set
	|| message_count.is_set
	|| severity.is_set;
}

bool Syslog::LoggingStatistics::MonitorLoggingStats::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| is_set(is_log_enabled.operation)
	|| is_set(message_count.operation)
	|| is_set(severity.operation);
}

std::string Syslog::LoggingStatistics::MonitorLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-logging-stats";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::MonitorLoggingStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (is_log_enabled.is_set || is_set(is_log_enabled.operation)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::MonitorLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::MonitorLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::MonitorLoggingStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
    }
    if(value_path == "message-count")
    {
        message_count = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::LoggingStatistics::TrapLoggingStats::TrapLoggingStats()
    :
    buffer_size{YType::uint32, "buffer-size"},
    is_log_enabled{YType::boolean, "is-log-enabled"},
    message_count{YType::uint32, "message-count"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "trap-logging-stats"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::TrapLoggingStats::~TrapLoggingStats()
{
}

bool Syslog::LoggingStatistics::TrapLoggingStats::has_data() const
{
    return buffer_size.is_set
	|| is_log_enabled.is_set
	|| message_count.is_set
	|| severity.is_set;
}

bool Syslog::LoggingStatistics::TrapLoggingStats::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| is_set(is_log_enabled.operation)
	|| is_set(message_count.operation)
	|| is_set(severity.operation);
}

std::string Syslog::LoggingStatistics::TrapLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-logging-stats";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::TrapLoggingStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (is_log_enabled.is_set || is_set(is_log_enabled.operation)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::TrapLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::TrapLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::TrapLoggingStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
    }
    if(value_path == "message-count")
    {
        message_count = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::LoggingStatistics::BufferLoggingStats::BufferLoggingStats()
    :
    buffer_size{YType::uint32, "buffer-size"},
    is_log_enabled{YType::boolean, "is-log-enabled"},
    message_count{YType::uint32, "message-count"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "buffer-logging-stats"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::BufferLoggingStats::~BufferLoggingStats()
{
}

bool Syslog::LoggingStatistics::BufferLoggingStats::has_data() const
{
    return buffer_size.is_set
	|| is_log_enabled.is_set
	|| message_count.is_set
	|| severity.is_set;
}

bool Syslog::LoggingStatistics::BufferLoggingStats::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size.operation)
	|| is_set(is_log_enabled.operation)
	|| is_set(message_count.operation)
	|| is_set(severity.operation);
}

std::string Syslog::LoggingStatistics::BufferLoggingStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-logging-stats";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::BufferLoggingStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.operation)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (is_log_enabled.is_set || is_set(is_log_enabled.operation)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::BufferLoggingStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::BufferLoggingStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::BufferLoggingStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
    }
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
    }
    if(value_path == "message-count")
    {
        message_count = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Syslog::LoggingStatistics::RemoteLoggingStat::RemoteLoggingStat()
    :
    message_count{YType::uint32, "message-count"},
    remote_host_name{YType::str, "remote-host-name"}
{
    yang_name = "remote-logging-stat"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::RemoteLoggingStat::~RemoteLoggingStat()
{
}

bool Syslog::LoggingStatistics::RemoteLoggingStat::has_data() const
{
    return message_count.is_set
	|| remote_host_name.is_set;
}

bool Syslog::LoggingStatistics::RemoteLoggingStat::has_operation() const
{
    return is_set(operation)
	|| is_set(message_count.operation)
	|| is_set(remote_host_name.operation);
}

std::string Syslog::LoggingStatistics::RemoteLoggingStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-logging-stat";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::RemoteLoggingStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (remote_host_name.is_set || is_set(remote_host_name.operation)) leaf_name_data.push_back(remote_host_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::RemoteLoggingStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::RemoteLoggingStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::RemoteLoggingStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-count")
    {
        message_count = value;
    }
    if(value_path == "remote-host-name")
    {
        remote_host_name = value;
    }
}

Syslog::LoggingStatistics::TlsRemoteLoggingStat::TlsRemoteLoggingStat()
    :
    message_count{YType::uint32, "message-count"},
    remote_host_name{YType::str, "remote-host-name"}
{
    yang_name = "tls-remote-logging-stat"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::TlsRemoteLoggingStat::~TlsRemoteLoggingStat()
{
}

bool Syslog::LoggingStatistics::TlsRemoteLoggingStat::has_data() const
{
    return message_count.is_set
	|| remote_host_name.is_set;
}

bool Syslog::LoggingStatistics::TlsRemoteLoggingStat::has_operation() const
{
    return is_set(operation)
	|| is_set(message_count.operation)
	|| is_set(remote_host_name.operation);
}

std::string Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls-remote-logging-stat";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());
    if (remote_host_name.is_set || is_set(remote_host_name.operation)) leaf_name_data.push_back(remote_host_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::TlsRemoteLoggingStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::TlsRemoteLoggingStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-count")
    {
        message_count = value;
    }
    if(value_path == "remote-host-name")
    {
        remote_host_name = value;
    }
}

Syslog::LoggingStatistics::FileLoggingStat::FileLoggingStat()
    :
    file_name{YType::str, "file-name"},
    message_count{YType::uint32, "message-count"}
{
    yang_name = "file-logging-stat"; yang_parent_name = "logging-statistics";
}

Syslog::LoggingStatistics::FileLoggingStat::~FileLoggingStat()
{
}

bool Syslog::LoggingStatistics::FileLoggingStat::has_data() const
{
    return file_name.is_set
	|| message_count.is_set;
}

bool Syslog::LoggingStatistics::FileLoggingStat::has_operation() const
{
    return is_set(operation)
	|| is_set(file_name.operation)
	|| is_set(message_count.operation);
}

std::string Syslog::LoggingStatistics::FileLoggingStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-logging-stat";

    return path_buffer.str();

}

const EntityPath Syslog::LoggingStatistics::FileLoggingStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-syslog-oper:syslog/logging-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_name.is_set || is_set(file_name.operation)) leaf_name_data.push_back(file_name.get_name_leafdata());
    if (message_count.is_set || is_set(message_count.operation)) leaf_name_data.push_back(message_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Syslog::LoggingStatistics::FileLoggingStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Syslog::LoggingStatistics::FileLoggingStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Syslog::LoggingStatistics::FileLoggingStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-name")
    {
        file_name = value;
    }
    if(value_path == "message-count")
    {
        message_count = value;
    }
}

const Enum::YLeaf SystemMessageSeverityEnum::message_severity_unknown {-1, "message-severity-unknown"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_emergency {0, "message-severity-emergency"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_alert {1, "message-severity-alert"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_critical {2, "message-severity-critical"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_error {3, "message-severity-error"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_warning {4, "message-severity-warning"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_notice {5, "message-severity-notice"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_informational {6, "message-severity-informational"};
const Enum::YLeaf SystemMessageSeverityEnum::message_severity_debug {7, "message-severity-debug"};


}
}

