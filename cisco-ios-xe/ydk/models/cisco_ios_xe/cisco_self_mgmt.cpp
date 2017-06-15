
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_self_mgmt.hpp"

namespace ydk {
namespace cisco_self_mgmt {

NetconfYang::NetconfYang()
    :
    cisco_ia_(std::make_shared<NetconfYang::CiscoIa>())
	,cisco_odm_(std::make_shared<NetconfYang::CiscoOdm>())
{
    cisco_ia_->parent = this;

    cisco_odm_->parent = this;

    yang_name = "netconf-yang"; yang_parent_name = "cisco-self-mgmt";
}

NetconfYang::~NetconfYang()
{
}

bool NetconfYang::has_data() const
{
    return (cisco_ia_ !=  nullptr && cisco_ia_->has_data())
	|| (cisco_odm_ !=  nullptr && cisco_odm_->has_data());
}

bool NetconfYang::has_operation() const
{
    return is_set(operation)
	|| (cisco_ia_ !=  nullptr && cisco_ia_->has_operation())
	|| (cisco_odm_ !=  nullptr && cisco_odm_->has_operation());
}

std::string NetconfYang::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang";

    return path_buffer.str();

}

const EntityPath NetconfYang::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NetconfYang::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-ia")
    {
        if(cisco_ia_ == nullptr)
        {
            cisco_ia_ = std::make_shared<NetconfYang::CiscoIa>();
        }
        return cisco_ia_;
    }

    if(child_yang_name == "cisco-odm")
    {
        if(cisco_odm_ == nullptr)
        {
            cisco_odm_ = std::make_shared<NetconfYang::CiscoOdm>();
        }
        return cisco_odm_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_ia_ != nullptr)
    {
        children["cisco-ia"] = cisco_ia_;
    }

    if(cisco_odm_ != nullptr)
    {
        children["cisco-odm"] = cisco_odm_;
    }

    return children;
}

void NetconfYang::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NetconfYang::clone_ptr() const
{
    return std::make_shared<NetconfYang>();
}

std::string NetconfYang::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NetconfYang::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NetconfYang::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

NetconfYang::CiscoIa::CiscoIa()
    :
    auto_sync{YType::enumeration, "auto-sync"},
    config_change_delay{YType::int16, "config-change-delay"},
    init_sync{YType::enumeration, "init-sync"},
    intelligent_sync{YType::boolean, "intelligent-sync"},
    max_diag_messages_saved{YType::int16, "max-diag-messages-saved"},
    message_diag_level{YType::int16, "message-diag-level"},
    nes_ttynum{YType::int16, "nes-ttynum"},
    post_sync_acl_process{YType::boolean, "post-sync-acl-process"},
    preserve_paths_enabled{YType::boolean, "preserve-paths-enabled"},
    process_missing_prc{YType::boolean, "process-missing-prc"},
    restored{YType::boolean, "restored"},
    snmp_community_string{YType::str, "snmp-community-string"}
    	,
    blocking_(std::make_shared<NetconfYang::CiscoIa::Blocking>())
	,logging_(std::make_shared<NetconfYang::CiscoIa::Logging>())
	,snmp_trap_control_(std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl>())
{
    blocking_->parent = this;

    logging_->parent = this;

    snmp_trap_control_->parent = this;

    yang_name = "cisco-ia"; yang_parent_name = "netconf-yang";
}

NetconfYang::CiscoIa::~CiscoIa()
{
}

bool NetconfYang::CiscoIa::has_data() const
{
    for (std::size_t index=0; index<conf_full_sync_cli_.size(); index++)
    {
        if(conf_full_sync_cli_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_ignore_.size(); index++)
    {
        if(conf_parser_msg_ignore_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<full_sync_cli_.size(); index++)
    {
        if(full_sync_cli_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_ignore_.size(); index++)
    {
        if(parser_msg_ignore_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<preserve_ned_path_.size(); index++)
    {
        if(preserve_ned_path_[index]->has_data())
            return true;
    }
    return auto_sync.is_set
	|| config_change_delay.is_set
	|| init_sync.is_set
	|| intelligent_sync.is_set
	|| max_diag_messages_saved.is_set
	|| message_diag_level.is_set
	|| nes_ttynum.is_set
	|| post_sync_acl_process.is_set
	|| preserve_paths_enabled.is_set
	|| process_missing_prc.is_set
	|| restored.is_set
	|| snmp_community_string.is_set
	|| (blocking_ !=  nullptr && blocking_->has_data())
	|| (logging_ !=  nullptr && logging_->has_data())
	|| (snmp_trap_control_ !=  nullptr && snmp_trap_control_->has_data());
}

bool NetconfYang::CiscoIa::has_operation() const
{
    for (std::size_t index=0; index<conf_full_sync_cli_.size(); index++)
    {
        if(conf_full_sync_cli_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_ignore_.size(); index++)
    {
        if(conf_parser_msg_ignore_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<full_sync_cli_.size(); index++)
    {
        if(full_sync_cli_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_ignore_.size(); index++)
    {
        if(parser_msg_ignore_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<preserve_ned_path_.size(); index++)
    {
        if(preserve_ned_path_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auto_sync.operation)
	|| is_set(config_change_delay.operation)
	|| is_set(init_sync.operation)
	|| is_set(intelligent_sync.operation)
	|| is_set(max_diag_messages_saved.operation)
	|| is_set(message_diag_level.operation)
	|| is_set(nes_ttynum.operation)
	|| is_set(post_sync_acl_process.operation)
	|| is_set(preserve_paths_enabled.operation)
	|| is_set(process_missing_prc.operation)
	|| is_set(restored.operation)
	|| is_set(snmp_community_string.operation)
	|| (blocking_ !=  nullptr && blocking_->has_operation())
	|| (logging_ !=  nullptr && logging_->has_operation())
	|| (snmp_trap_control_ !=  nullptr && snmp_trap_control_->has_operation());
}

std::string NetconfYang::CiscoIa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:cisco-ia";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_sync.is_set || is_set(auto_sync.operation)) leaf_name_data.push_back(auto_sync.get_name_leafdata());
    if (config_change_delay.is_set || is_set(config_change_delay.operation)) leaf_name_data.push_back(config_change_delay.get_name_leafdata());
    if (init_sync.is_set || is_set(init_sync.operation)) leaf_name_data.push_back(init_sync.get_name_leafdata());
    if (intelligent_sync.is_set || is_set(intelligent_sync.operation)) leaf_name_data.push_back(intelligent_sync.get_name_leafdata());
    if (max_diag_messages_saved.is_set || is_set(max_diag_messages_saved.operation)) leaf_name_data.push_back(max_diag_messages_saved.get_name_leafdata());
    if (message_diag_level.is_set || is_set(message_diag_level.operation)) leaf_name_data.push_back(message_diag_level.get_name_leafdata());
    if (nes_ttynum.is_set || is_set(nes_ttynum.operation)) leaf_name_data.push_back(nes_ttynum.get_name_leafdata());
    if (post_sync_acl_process.is_set || is_set(post_sync_acl_process.operation)) leaf_name_data.push_back(post_sync_acl_process.get_name_leafdata());
    if (preserve_paths_enabled.is_set || is_set(preserve_paths_enabled.operation)) leaf_name_data.push_back(preserve_paths_enabled.get_name_leafdata());
    if (process_missing_prc.is_set || is_set(process_missing_prc.operation)) leaf_name_data.push_back(process_missing_prc.get_name_leafdata());
    if (restored.is_set || is_set(restored.operation)) leaf_name_data.push_back(restored.get_name_leafdata());
    if (snmp_community_string.is_set || is_set(snmp_community_string.operation)) leaf_name_data.push_back(snmp_community_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blocking")
    {
        if(blocking_ == nullptr)
        {
            blocking_ = std::make_shared<NetconfYang::CiscoIa::Blocking>();
        }
        return blocking_;
    }

    if(child_yang_name == "conf-full-sync-cli")
    {
        for(auto const & c : conf_full_sync_cli_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::ConfFullSyncCli>();
        c->parent = this;
        conf_full_sync_cli_.push_back(c);
        return c;
    }

    if(child_yang_name == "conf-parser-msg-ignore")
    {
        for(auto const & c : conf_parser_msg_ignore_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::ConfParserMsgIgnore>();
        c->parent = this;
        conf_parser_msg_ignore_.push_back(c);
        return c;
    }

    if(child_yang_name == "full-sync-cli")
    {
        for(auto const & c : full_sync_cli_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::FullSyncCli>();
        c->parent = this;
        full_sync_cli_.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging_ == nullptr)
        {
            logging_ = std::make_shared<NetconfYang::CiscoIa::Logging>();
        }
        return logging_;
    }

    if(child_yang_name == "parser-msg-ignore")
    {
        for(auto const & c : parser_msg_ignore_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::ParserMsgIgnore>();
        c->parent = this;
        parser_msg_ignore_.push_back(c);
        return c;
    }

    if(child_yang_name == "preserve-ned-path")
    {
        for(auto const & c : preserve_ned_path_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::PreserveNedPath>();
        c->parent = this;
        preserve_ned_path_.push_back(c);
        return c;
    }

    if(child_yang_name == "snmp-trap-control")
    {
        if(snmp_trap_control_ == nullptr)
        {
            snmp_trap_control_ = std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl>();
        }
        return snmp_trap_control_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(blocking_ != nullptr)
    {
        children["blocking"] = blocking_;
    }

    for (auto const & c : conf_full_sync_cli_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : conf_parser_msg_ignore_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : full_sync_cli_)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging_ != nullptr)
    {
        children["logging"] = logging_;
    }

    for (auto const & c : parser_msg_ignore_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : preserve_ned_path_)
    {
        children[c->get_segment_path()] = c;
    }

    if(snmp_trap_control_ != nullptr)
    {
        children["snmp-trap-control"] = snmp_trap_control_;
    }

    return children;
}

void NetconfYang::CiscoIa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-sync")
    {
        auto_sync = value;
    }
    if(value_path == "config-change-delay")
    {
        config_change_delay = value;
    }
    if(value_path == "init-sync")
    {
        init_sync = value;
    }
    if(value_path == "intelligent-sync")
    {
        intelligent_sync = value;
    }
    if(value_path == "max-diag-messages-saved")
    {
        max_diag_messages_saved = value;
    }
    if(value_path == "message-diag-level")
    {
        message_diag_level = value;
    }
    if(value_path == "nes-ttynum")
    {
        nes_ttynum = value;
    }
    if(value_path == "post-sync-acl-process")
    {
        post_sync_acl_process = value;
    }
    if(value_path == "preserve-paths-enabled")
    {
        preserve_paths_enabled = value;
    }
    if(value_path == "process-missing-prc")
    {
        process_missing_prc = value;
    }
    if(value_path == "restored")
    {
        restored = value;
    }
    if(value_path == "snmp-community-string")
    {
        snmp_community_string = value;
    }
}

NetconfYang::CiscoIa::SnmpTrapControl::SnmpTrapControl()
    :
    global_forwarding{YType::boolean, "global-forwarding"}
{
    yang_name = "snmp-trap-control"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::SnmpTrapControl::~SnmpTrapControl()
{
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_data() const
{
    for (std::size_t index=0; index<trap_list_.size(); index++)
    {
        if(trap_list_[index]->has_data())
            return true;
    }
    return global_forwarding.is_set;
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_operation() const
{
    for (std::size_t index=0; index<trap_list_.size(); index++)
    {
        if(trap_list_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(global_forwarding.operation);
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap-control";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::SnmpTrapControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_forwarding.is_set || is_set(global_forwarding.operation)) leaf_name_data.push_back(global_forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::SnmpTrapControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-list")
    {
        for(auto const & c : trap_list_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl::TrapList>();
        c->parent = this;
        trap_list_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::SnmpTrapControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_list_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfYang::CiscoIa::SnmpTrapControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-forwarding")
    {
        global_forwarding = value;
    }
}

NetconfYang::CiscoIa::SnmpTrapControl::TrapList::TrapList()
    :
    trap_oid{YType::str, "trap-oid"},
    description{YType::str, "description"},
    forward{YType::boolean, "forward"}
{
    yang_name = "trap-list"; yang_parent_name = "snmp-trap-control";
}

NetconfYang::CiscoIa::SnmpTrapControl::TrapList::~TrapList()
{
}

bool NetconfYang::CiscoIa::SnmpTrapControl::TrapList::has_data() const
{
    return trap_oid.is_set
	|| description.is_set
	|| forward.is_set;
}

bool NetconfYang::CiscoIa::SnmpTrapControl::TrapList::has_operation() const
{
    return is_set(operation)
	|| is_set(trap_oid.operation)
	|| is_set(description.operation)
	|| is_set(forward.operation);
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-list" <<"[trap-oid='" <<trap_oid <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/snmp-trap-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.operation)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (forward.is_set || is_set(forward.operation)) leaf_name_data.push_back(forward.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::SnmpTrapControl::TrapList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "forward")
    {
        forward = value;
    }
}

NetconfYang::CiscoIa::PreserveNedPath::PreserveNedPath()
    :
    xpath{YType::str, "xpath"}
{
    yang_name = "preserve-ned-path"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::PreserveNedPath::~PreserveNedPath()
{
}

bool NetconfYang::CiscoIa::PreserveNedPath::has_data() const
{
    return xpath.is_set;
}

bool NetconfYang::CiscoIa::PreserveNedPath::has_operation() const
{
    return is_set(operation)
	|| is_set(xpath.operation);
}

std::string NetconfYang::CiscoIa::PreserveNedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preserve-ned-path" <<"[xpath='" <<xpath <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::PreserveNedPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xpath.is_set || is_set(xpath.operation)) leaf_name_data.push_back(xpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::PreserveNedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::PreserveNedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::PreserveNedPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xpath")
    {
        xpath = value;
    }
}

NetconfYang::CiscoIa::ParserMsgIgnore::ParserMsgIgnore()
    :
    message{YType::str, "message"}
{
    yang_name = "parser-msg-ignore"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::ParserMsgIgnore::~ParserMsgIgnore()
{
}

bool NetconfYang::CiscoIa::ParserMsgIgnore::has_data() const
{
    return message.is_set;
}

bool NetconfYang::CiscoIa::ParserMsgIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(message.operation);
}

std::string NetconfYang::CiscoIa::ParserMsgIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser-msg-ignore" <<"[message='" <<message <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::ParserMsgIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::ParserMsgIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::ParserMsgIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::ParserMsgIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message")
    {
        message = value;
    }
}

NetconfYang::CiscoIa::ConfParserMsgIgnore::ConfParserMsgIgnore()
    :
    message{YType::str, "message"}
{
    yang_name = "conf-parser-msg-ignore"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::ConfParserMsgIgnore::~ConfParserMsgIgnore()
{
}

bool NetconfYang::CiscoIa::ConfParserMsgIgnore::has_data() const
{
    return message.is_set;
}

bool NetconfYang::CiscoIa::ConfParserMsgIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(message.operation);
}

std::string NetconfYang::CiscoIa::ConfParserMsgIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-parser-msg-ignore" <<"[message='" <<message <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::ConfParserMsgIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::ConfParserMsgIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::ConfParserMsgIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::ConfParserMsgIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message")
    {
        message = value;
    }
}

NetconfYang::CiscoIa::FullSyncCli::FullSyncCli()
    :
    command{YType::str, "command"}
{
    yang_name = "full-sync-cli"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::FullSyncCli::~FullSyncCli()
{
}

bool NetconfYang::CiscoIa::FullSyncCli::has_data() const
{
    return command.is_set;
}

bool NetconfYang::CiscoIa::FullSyncCli::has_operation() const
{
    return is_set(operation)
	|| is_set(command.operation);
}

std::string NetconfYang::CiscoIa::FullSyncCli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "full-sync-cli" <<"[command='" <<command <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::FullSyncCli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::FullSyncCli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::FullSyncCli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::FullSyncCli::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
}

NetconfYang::CiscoIa::ConfFullSyncCli::ConfFullSyncCli()
    :
    command{YType::str, "command"}
{
    yang_name = "conf-full-sync-cli"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::ConfFullSyncCli::~ConfFullSyncCli()
{
}

bool NetconfYang::CiscoIa::ConfFullSyncCli::has_data() const
{
    return command.is_set;
}

bool NetconfYang::CiscoIa::ConfFullSyncCli::has_operation() const
{
    return is_set(operation)
	|| is_set(command.operation);
}

std::string NetconfYang::CiscoIa::ConfFullSyncCli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-full-sync-cli" <<"[command='" <<command <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::ConfFullSyncCli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::ConfFullSyncCli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::ConfFullSyncCli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::ConfFullSyncCli::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
}

NetconfYang::CiscoIa::Logging::Logging()
    :
    ciaauthd_log_level{YType::enumeration, "ciaauthd-log-level"},
    confd_log_level{YType::enumeration, "confd-log-level"},
    nes_log_level{YType::enumeration, "nes-log-level"},
    odm_log_level{YType::enumeration, "odm-log-level"},
    onep_log_level{YType::enumeration, "onep-log-level"},
    sync_log_level{YType::enumeration, "sync-log-level"}
{
    yang_name = "logging"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::Logging::~Logging()
{
}

bool NetconfYang::CiscoIa::Logging::has_data() const
{
    return ciaauthd_log_level.is_set
	|| confd_log_level.is_set
	|| nes_log_level.is_set
	|| odm_log_level.is_set
	|| onep_log_level.is_set
	|| sync_log_level.is_set;
}

bool NetconfYang::CiscoIa::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(ciaauthd_log_level.operation)
	|| is_set(confd_log_level.operation)
	|| is_set(nes_log_level.operation)
	|| is_set(odm_log_level.operation)
	|| is_set(onep_log_level.operation)
	|| is_set(sync_log_level.operation);
}

std::string NetconfYang::CiscoIa::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciaauthd_log_level.is_set || is_set(ciaauthd_log_level.operation)) leaf_name_data.push_back(ciaauthd_log_level.get_name_leafdata());
    if (confd_log_level.is_set || is_set(confd_log_level.operation)) leaf_name_data.push_back(confd_log_level.get_name_leafdata());
    if (nes_log_level.is_set || is_set(nes_log_level.operation)) leaf_name_data.push_back(nes_log_level.get_name_leafdata());
    if (odm_log_level.is_set || is_set(odm_log_level.operation)) leaf_name_data.push_back(odm_log_level.get_name_leafdata());
    if (onep_log_level.is_set || is_set(onep_log_level.operation)) leaf_name_data.push_back(onep_log_level.get_name_leafdata());
    if (sync_log_level.is_set || is_set(sync_log_level.operation)) leaf_name_data.push_back(sync_log_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciaauthd-log-level")
    {
        ciaauthd_log_level = value;
    }
    if(value_path == "confd-log-level")
    {
        confd_log_level = value;
    }
    if(value_path == "nes-log-level")
    {
        nes_log_level = value;
    }
    if(value_path == "odm-log-level")
    {
        odm_log_level = value;
    }
    if(value_path == "onep-log-level")
    {
        onep_log_level = value;
    }
    if(value_path == "sync-log-level")
    {
        sync_log_level = value;
    }
}

NetconfYang::CiscoIa::Blocking::Blocking()
    :
    cli_blocking_enabled{YType::boolean, "cli-blocking-enabled"},
    confd_cfg_blocking_enabled{YType::boolean, "confd-cfg-blocking-enabled"}
{
    yang_name = "blocking"; yang_parent_name = "cisco-ia";
}

NetconfYang::CiscoIa::Blocking::~Blocking()
{
}

bool NetconfYang::CiscoIa::Blocking::has_data() const
{
    for (std::size_t index=0; index<confd_cfg_command_.size(); index++)
    {
        if(confd_cfg_command_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network_element_command_.size(); index++)
    {
        if(network_element_command_[index]->has_data())
            return true;
    }
    return cli_blocking_enabled.is_set
	|| confd_cfg_blocking_enabled.is_set;
}

bool NetconfYang::CiscoIa::Blocking::has_operation() const
{
    for (std::size_t index=0; index<confd_cfg_command_.size(); index++)
    {
        if(confd_cfg_command_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network_element_command_.size(); index++)
    {
        if(network_element_command_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cli_blocking_enabled.operation)
	|| is_set(confd_cfg_blocking_enabled.operation);
}

std::string NetconfYang::CiscoIa::Blocking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blocking";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::Blocking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cli_blocking_enabled.is_set || is_set(cli_blocking_enabled.operation)) leaf_name_data.push_back(cli_blocking_enabled.get_name_leafdata());
    if (confd_cfg_blocking_enabled.is_set || is_set(confd_cfg_blocking_enabled.operation)) leaf_name_data.push_back(confd_cfg_blocking_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::Blocking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confd-cfg-command")
    {
        for(auto const & c : confd_cfg_command_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::Blocking::ConfdCfgCommand>();
        c->parent = this;
        confd_cfg_command_.push_back(c);
        return c;
    }

    if(child_yang_name == "network-element-command")
    {
        for(auto const & c : network_element_command_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::Blocking::NetworkElementCommand>();
        c->parent = this;
        network_element_command_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::Blocking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : confd_cfg_command_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network_element_command_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfYang::CiscoIa::Blocking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cli-blocking-enabled")
    {
        cli_blocking_enabled = value;
    }
    if(value_path == "confd-cfg-blocking-enabled")
    {
        confd_cfg_blocking_enabled = value;
    }
}

NetconfYang::CiscoIa::Blocking::NetworkElementCommand::NetworkElementCommand()
    :
    command{YType::str, "command"}
{
    yang_name = "network-element-command"; yang_parent_name = "blocking";
}

NetconfYang::CiscoIa::Blocking::NetworkElementCommand::~NetworkElementCommand()
{
}

bool NetconfYang::CiscoIa::Blocking::NetworkElementCommand::has_data() const
{
    return command.is_set;
}

bool NetconfYang::CiscoIa::Blocking::NetworkElementCommand::has_operation() const
{
    return is_set(operation)
	|| is_set(command.operation);
}

std::string NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-element-command" <<"[command='" <<command <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/blocking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::Blocking::NetworkElementCommand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
}

NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::ConfdCfgCommand()
    :
    command{YType::str, "command"}
{
    yang_name = "confd-cfg-command"; yang_parent_name = "blocking";
}

NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::~ConfdCfgCommand()
{
}

bool NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::has_data() const
{
    return command.is_set;
}

bool NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::has_operation() const
{
    return is_set(operation)
	|| is_set(command.operation);
}

std::string NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confd-cfg-command" <<"[command='" <<command <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/blocking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
}

NetconfYang::CiscoOdm::CiscoOdm()
    :
    on_demand_default_time{YType::uint32, "on-demand-default-time"},
    on_demand_enable{YType::boolean, "on-demand-enable"},
    polling_enable{YType::boolean, "polling-enable"}
{
    yang_name = "cisco-odm"; yang_parent_name = "netconf-yang";
}

NetconfYang::CiscoOdm::~CiscoOdm()
{
}

bool NetconfYang::CiscoOdm::has_data() const
{
    for (std::size_t index=0; index<actions_.size(); index++)
    {
        if(actions_[index]->has_data())
            return true;
    }
    return on_demand_default_time.is_set
	|| on_demand_enable.is_set
	|| polling_enable.is_set;
}

bool NetconfYang::CiscoOdm::has_operation() const
{
    for (std::size_t index=0; index<actions_.size(); index++)
    {
        if(actions_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(on_demand_default_time.operation)
	|| is_set(on_demand_enable.operation)
	|| is_set(polling_enable.operation);
}

std::string NetconfYang::CiscoOdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-odm:cisco-odm";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoOdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_demand_default_time.is_set || is_set(on_demand_default_time.operation)) leaf_name_data.push_back(on_demand_default_time.get_name_leafdata());
    if (on_demand_enable.is_set || is_set(on_demand_enable.operation)) leaf_name_data.push_back(on_demand_enable.get_name_leafdata());
    if (polling_enable.is_set || is_set(polling_enable.operation)) leaf_name_data.push_back(polling_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoOdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        for(auto const & c : actions_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoOdm::Actions>();
        c->parent = this;
        actions_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoOdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : actions_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfYang::CiscoOdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "on-demand-default-time")
    {
        on_demand_default_time = value;
    }
    if(value_path == "on-demand-enable")
    {
        on_demand_enable = value;
    }
    if(value_path == "polling-enable")
    {
        polling_enable = value;
    }
}

NetconfYang::CiscoOdm::Actions::Actions()
    :
    action_name{YType::identityref, "action-name"},
    cdb_xpath{YType::str, "cdb-xpath"},
    mode{YType::enumeration, "mode"},
    polling_interval{YType::uint32, "polling-interval"}
{
    yang_name = "actions"; yang_parent_name = "cisco-odm";
}

NetconfYang::CiscoOdm::Actions::~Actions()
{
}

bool NetconfYang::CiscoOdm::Actions::has_data() const
{
    return action_name.is_set
	|| cdb_xpath.is_set
	|| mode.is_set
	|| polling_interval.is_set;
}

bool NetconfYang::CiscoOdm::Actions::has_operation() const
{
    return is_set(operation)
	|| is_set(action_name.operation)
	|| is_set(cdb_xpath.operation)
	|| is_set(mode.operation)
	|| is_set(polling_interval.operation);
}

std::string NetconfYang::CiscoOdm::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions" <<"[action-name='" <<action_name <<"']";

    return path_buffer.str();

}

const EntityPath NetconfYang::CiscoOdm::Actions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-self-mgmt:netconf-yang/cisco-odm:cisco-odm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_name.is_set || is_set(action_name.operation)) leaf_name_data.push_back(action_name.get_name_leafdata());
    if (cdb_xpath.is_set || is_set(cdb_xpath.operation)) leaf_name_data.push_back(cdb_xpath.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (polling_interval.is_set || is_set(polling_interval.operation)) leaf_name_data.push_back(polling_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfYang::CiscoOdm::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoOdm::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfYang::CiscoOdm::Actions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-name")
    {
        action_name = value;
    }
    if(value_path == "cdb-xpath")
    {
        cdb_xpath = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "polling-interval")
    {
        polling_interval = value;
    }
}

const Enum::YLeaf NetconfYang::CiscoOdm::Actions::ModeEnum::poll {0, "poll"};
const Enum::YLeaf NetconfYang::CiscoOdm::Actions::ModeEnum::on_demand {1, "on-demand"};
const Enum::YLeaf NetconfYang::CiscoOdm::Actions::ModeEnum::none {2, "none"};


}
}

