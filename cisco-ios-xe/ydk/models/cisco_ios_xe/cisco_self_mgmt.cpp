
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_self_mgmt.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_self_mgmt {

NetconfYang::NetconfYang()
    :
    cisco_ia(std::make_shared<NetconfYang::CiscoIa>())
	,cisco_odm(std::make_shared<NetconfYang::CiscoOdm>())
{
    cisco_ia->parent = this;
    cisco_odm->parent = this;

    yang_name = "netconf-yang"; yang_parent_name = "cisco-self-mgmt"; is_top_level_class = true; has_list_ancestor = false;
}

NetconfYang::~NetconfYang()
{
}

bool NetconfYang::has_data() const
{
    return (cisco_ia !=  nullptr && cisco_ia->has_data())
	|| (cisco_odm !=  nullptr && cisco_odm->has_data());
}

bool NetconfYang::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_ia !=  nullptr && cisco_ia->has_operation())
	|| (cisco_odm !=  nullptr && cisco_odm->has_operation());
}

std::string NetconfYang::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfYang::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-ia")
    {
        if(cisco_ia == nullptr)
        {
            cisco_ia = std::make_shared<NetconfYang::CiscoIa>();
        }
        return cisco_ia;
    }

    if(child_yang_name == "cisco-odm")
    {
        if(cisco_odm == nullptr)
        {
            cisco_odm = std::make_shared<NetconfYang::CiscoOdm>();
        }
        return cisco_odm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_ia != nullptr)
    {
        children["cisco-ia"] = cisco_ia;
    }

    if(cisco_odm != nullptr)
    {
        children["cisco-odm"] = cisco_odm;
    }

    return children;
}

void NetconfYang::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfYang::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> NetconfYang::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NetconfYang::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-ia" || name == "cisco-odm")
        return true;
    return false;
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
    blocking(std::make_shared<NetconfYang::CiscoIa::Blocking>())
	,logging(std::make_shared<NetconfYang::CiscoIa::Logging>())
	,snmp_trap_control(std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl>())
{
    blocking->parent = this;
    logging->parent = this;
    snmp_trap_control->parent = this;

    yang_name = "cisco-ia"; yang_parent_name = "netconf-yang"; is_top_level_class = false; has_list_ancestor = false;
}

NetconfYang::CiscoIa::~CiscoIa()
{
}

bool NetconfYang::CiscoIa::has_data() const
{
    for (std::size_t index=0; index<conf_full_sync_cli.size(); index++)
    {
        if(conf_full_sync_cli[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_ignore.size(); index++)
    {
        if(conf_parser_msg_ignore[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<full_sync_cli.size(); index++)
    {
        if(full_sync_cli[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_ignore.size(); index++)
    {
        if(parser_msg_ignore[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<preserve_ned_path.size(); index++)
    {
        if(preserve_ned_path[index]->has_data())
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
	|| (blocking !=  nullptr && blocking->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (snmp_trap_control !=  nullptr && snmp_trap_control->has_data());
}

bool NetconfYang::CiscoIa::has_operation() const
{
    for (std::size_t index=0; index<conf_full_sync_cli.size(); index++)
    {
        if(conf_full_sync_cli[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<conf_parser_msg_ignore.size(); index++)
    {
        if(conf_parser_msg_ignore[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<full_sync_cli.size(); index++)
    {
        if(full_sync_cli[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parser_msg_ignore.size(); index++)
    {
        if(parser_msg_ignore[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<preserve_ned_path.size(); index++)
    {
        if(preserve_ned_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_sync.yfilter)
	|| ydk::is_set(config_change_delay.yfilter)
	|| ydk::is_set(init_sync.yfilter)
	|| ydk::is_set(intelligent_sync.yfilter)
	|| ydk::is_set(max_diag_messages_saved.yfilter)
	|| ydk::is_set(message_diag_level.yfilter)
	|| ydk::is_set(nes_ttynum.yfilter)
	|| ydk::is_set(post_sync_acl_process.yfilter)
	|| ydk::is_set(preserve_paths_enabled.yfilter)
	|| ydk::is_set(process_missing_prc.yfilter)
	|| ydk::is_set(restored.yfilter)
	|| ydk::is_set(snmp_community_string.yfilter)
	|| (blocking !=  nullptr && blocking->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (snmp_trap_control !=  nullptr && snmp_trap_control->has_operation());
}

std::string NetconfYang::CiscoIa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:cisco-ia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_sync.is_set || is_set(auto_sync.yfilter)) leaf_name_data.push_back(auto_sync.get_name_leafdata());
    if (config_change_delay.is_set || is_set(config_change_delay.yfilter)) leaf_name_data.push_back(config_change_delay.get_name_leafdata());
    if (init_sync.is_set || is_set(init_sync.yfilter)) leaf_name_data.push_back(init_sync.get_name_leafdata());
    if (intelligent_sync.is_set || is_set(intelligent_sync.yfilter)) leaf_name_data.push_back(intelligent_sync.get_name_leafdata());
    if (max_diag_messages_saved.is_set || is_set(max_diag_messages_saved.yfilter)) leaf_name_data.push_back(max_diag_messages_saved.get_name_leafdata());
    if (message_diag_level.is_set || is_set(message_diag_level.yfilter)) leaf_name_data.push_back(message_diag_level.get_name_leafdata());
    if (nes_ttynum.is_set || is_set(nes_ttynum.yfilter)) leaf_name_data.push_back(nes_ttynum.get_name_leafdata());
    if (post_sync_acl_process.is_set || is_set(post_sync_acl_process.yfilter)) leaf_name_data.push_back(post_sync_acl_process.get_name_leafdata());
    if (preserve_paths_enabled.is_set || is_set(preserve_paths_enabled.yfilter)) leaf_name_data.push_back(preserve_paths_enabled.get_name_leafdata());
    if (process_missing_prc.is_set || is_set(process_missing_prc.yfilter)) leaf_name_data.push_back(process_missing_prc.get_name_leafdata());
    if (restored.is_set || is_set(restored.yfilter)) leaf_name_data.push_back(restored.get_name_leafdata());
    if (snmp_community_string.is_set || is_set(snmp_community_string.yfilter)) leaf_name_data.push_back(snmp_community_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blocking")
    {
        if(blocking == nullptr)
        {
            blocking = std::make_shared<NetconfYang::CiscoIa::Blocking>();
        }
        return blocking;
    }

    if(child_yang_name == "conf-full-sync-cli")
    {
        for(auto const & c : conf_full_sync_cli)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::ConfFullSyncCli>();
        c->parent = this;
        conf_full_sync_cli.push_back(c);
        return c;
    }

    if(child_yang_name == "conf-parser-msg-ignore")
    {
        for(auto const & c : conf_parser_msg_ignore)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::ConfParserMsgIgnore>();
        c->parent = this;
        conf_parser_msg_ignore.push_back(c);
        return c;
    }

    if(child_yang_name == "full-sync-cli")
    {
        for(auto const & c : full_sync_cli)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::FullSyncCli>();
        c->parent = this;
        full_sync_cli.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<NetconfYang::CiscoIa::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "parser-msg-ignore")
    {
        for(auto const & c : parser_msg_ignore)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::ParserMsgIgnore>();
        c->parent = this;
        parser_msg_ignore.push_back(c);
        return c;
    }

    if(child_yang_name == "preserve-ned-path")
    {
        for(auto const & c : preserve_ned_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::PreserveNedPath>();
        c->parent = this;
        preserve_ned_path.push_back(c);
        return c;
    }

    if(child_yang_name == "snmp-trap-control")
    {
        if(snmp_trap_control == nullptr)
        {
            snmp_trap_control = std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl>();
        }
        return snmp_trap_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(blocking != nullptr)
    {
        children["blocking"] = blocking;
    }

    for (auto const & c : conf_full_sync_cli)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : conf_parser_msg_ignore)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : full_sync_cli)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : parser_msg_ignore)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : preserve_ned_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(snmp_trap_control != nullptr)
    {
        children["snmp-trap-control"] = snmp_trap_control;
    }

    return children;
}

void NetconfYang::CiscoIa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-sync")
    {
        auto_sync = value;
        auto_sync.value_namespace = name_space;
        auto_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-change-delay")
    {
        config_change_delay = value;
        config_change_delay.value_namespace = name_space;
        config_change_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync")
    {
        init_sync = value;
        init_sync.value_namespace = name_space;
        init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intelligent-sync")
    {
        intelligent_sync = value;
        intelligent_sync.value_namespace = name_space;
        intelligent_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-diag-messages-saved")
    {
        max_diag_messages_saved = value;
        max_diag_messages_saved.value_namespace = name_space;
        max_diag_messages_saved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-diag-level")
    {
        message_diag_level = value;
        message_diag_level.value_namespace = name_space;
        message_diag_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nes-ttynum")
    {
        nes_ttynum = value;
        nes_ttynum.value_namespace = name_space;
        nes_ttynum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-sync-acl-process")
    {
        post_sync_acl_process = value;
        post_sync_acl_process.value_namespace = name_space;
        post_sync_acl_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-paths-enabled")
    {
        preserve_paths_enabled = value;
        preserve_paths_enabled.value_namespace = name_space;
        preserve_paths_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-missing-prc")
    {
        process_missing_prc = value;
        process_missing_prc.value_namespace = name_space;
        process_missing_prc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored")
    {
        restored = value;
        restored.value_namespace = name_space;
        restored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-community-string")
    {
        snmp_community_string = value;
        snmp_community_string.value_namespace = name_space;
        snmp_community_string.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-sync")
    {
        auto_sync.yfilter = yfilter;
    }
    if(value_path == "config-change-delay")
    {
        config_change_delay.yfilter = yfilter;
    }
    if(value_path == "init-sync")
    {
        init_sync.yfilter = yfilter;
    }
    if(value_path == "intelligent-sync")
    {
        intelligent_sync.yfilter = yfilter;
    }
    if(value_path == "max-diag-messages-saved")
    {
        max_diag_messages_saved.yfilter = yfilter;
    }
    if(value_path == "message-diag-level")
    {
        message_diag_level.yfilter = yfilter;
    }
    if(value_path == "nes-ttynum")
    {
        nes_ttynum.yfilter = yfilter;
    }
    if(value_path == "post-sync-acl-process")
    {
        post_sync_acl_process.yfilter = yfilter;
    }
    if(value_path == "preserve-paths-enabled")
    {
        preserve_paths_enabled.yfilter = yfilter;
    }
    if(value_path == "process-missing-prc")
    {
        process_missing_prc.yfilter = yfilter;
    }
    if(value_path == "restored")
    {
        restored.yfilter = yfilter;
    }
    if(value_path == "snmp-community-string")
    {
        snmp_community_string.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blocking" || name == "conf-full-sync-cli" || name == "conf-parser-msg-ignore" || name == "full-sync-cli" || name == "logging" || name == "parser-msg-ignore" || name == "preserve-ned-path" || name == "snmp-trap-control" || name == "auto-sync" || name == "config-change-delay" || name == "init-sync" || name == "intelligent-sync" || name == "max-diag-messages-saved" || name == "message-diag-level" || name == "nes-ttynum" || name == "post-sync-acl-process" || name == "preserve-paths-enabled" || name == "process-missing-prc" || name == "restored" || name == "snmp-community-string")
        return true;
    return false;
}

NetconfYang::CiscoIa::Blocking::Blocking()
    :
    cli_blocking_enabled{YType::boolean, "cli-blocking-enabled"},
    confd_cfg_blocking_enabled{YType::boolean, "confd-cfg-blocking-enabled"}
{

    yang_name = "blocking"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
}

NetconfYang::CiscoIa::Blocking::~Blocking()
{
}

bool NetconfYang::CiscoIa::Blocking::has_data() const
{
    for (std::size_t index=0; index<confd_cfg_command.size(); index++)
    {
        if(confd_cfg_command[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network_element_command.size(); index++)
    {
        if(network_element_command[index]->has_data())
            return true;
    }
    return cli_blocking_enabled.is_set
	|| confd_cfg_blocking_enabled.is_set;
}

bool NetconfYang::CiscoIa::Blocking::has_operation() const
{
    for (std::size_t index=0; index<confd_cfg_command.size(); index++)
    {
        if(confd_cfg_command[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network_element_command.size(); index++)
    {
        if(network_element_command[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cli_blocking_enabled.yfilter)
	|| ydk::is_set(confd_cfg_blocking_enabled.yfilter);
}

std::string NetconfYang::CiscoIa::Blocking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Blocking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blocking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Blocking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cli_blocking_enabled.is_set || is_set(cli_blocking_enabled.yfilter)) leaf_name_data.push_back(cli_blocking_enabled.get_name_leafdata());
    if (confd_cfg_blocking_enabled.is_set || is_set(confd_cfg_blocking_enabled.yfilter)) leaf_name_data.push_back(confd_cfg_blocking_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::Blocking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confd-cfg-command")
    {
        for(auto const & c : confd_cfg_command)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::Blocking::ConfdCfgCommand>();
        c->parent = this;
        confd_cfg_command.push_back(c);
        return c;
    }

    if(child_yang_name == "network-element-command")
    {
        for(auto const & c : network_element_command)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::Blocking::NetworkElementCommand>();
        c->parent = this;
        network_element_command.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::Blocking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : confd_cfg_command)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network_element_command)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfYang::CiscoIa::Blocking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cli-blocking-enabled")
    {
        cli_blocking_enabled = value;
        cli_blocking_enabled.value_namespace = name_space;
        cli_blocking_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confd-cfg-blocking-enabled")
    {
        confd_cfg_blocking_enabled = value;
        confd_cfg_blocking_enabled.value_namespace = name_space;
        confd_cfg_blocking_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Blocking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cli-blocking-enabled")
    {
        cli_blocking_enabled.yfilter = yfilter;
    }
    if(value_path == "confd-cfg-blocking-enabled")
    {
        confd_cfg_blocking_enabled.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Blocking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confd-cfg-command" || name == "network-element-command" || name == "cli-blocking-enabled" || name == "confd-cfg-blocking-enabled")
        return true;
    return false;
}

NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::ConfdCfgCommand()
    :
    command{YType::str, "command"}
{

    yang_name = "confd-cfg-command"; yang_parent_name = "blocking"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/blocking/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confd-cfg-command" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Blocking::ConfdCfgCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::Blocking::NetworkElementCommand::NetworkElementCommand()
    :
    command{YType::str, "command"}
{

    yang_name = "network-element-command"; yang_parent_name = "blocking"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/blocking/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-element-command" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Blocking::NetworkElementCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::Blocking::NetworkElementCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Blocking::NetworkElementCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Blocking::NetworkElementCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::ConfFullSyncCli::ConfFullSyncCli()
    :
    command{YType::str, "command"}
{

    yang_name = "conf-full-sync-cli"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::ConfFullSyncCli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ConfFullSyncCli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-full-sync-cli" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ConfFullSyncCli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::ConfFullSyncCli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ConfFullSyncCli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ConfFullSyncCli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

NetconfYang::CiscoIa::ConfParserMsgIgnore::ConfParserMsgIgnore()
    :
    message{YType::str, "message"}
{

    yang_name = "conf-parser-msg-ignore"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string NetconfYang::CiscoIa::ConfParserMsgIgnore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ConfParserMsgIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-parser-msg-ignore" <<"[message='" <<message <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ConfParserMsgIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::ConfParserMsgIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ConfParserMsgIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ConfParserMsgIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

NetconfYang::CiscoIa::FullSyncCli::FullSyncCli()
    :
    command{YType::str, "command"}
{

    yang_name = "full-sync-cli"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string NetconfYang::CiscoIa::FullSyncCli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::FullSyncCli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "full-sync-cli" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::FullSyncCli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::FullSyncCli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::FullSyncCli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::FullSyncCli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
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

    yang_name = "logging"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciaauthd_log_level.yfilter)
	|| ydk::is_set(confd_log_level.yfilter)
	|| ydk::is_set(nes_log_level.yfilter)
	|| ydk::is_set(odm_log_level.yfilter)
	|| ydk::is_set(onep_log_level.yfilter)
	|| ydk::is_set(sync_log_level.yfilter);
}

std::string NetconfYang::CiscoIa::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciaauthd_log_level.is_set || is_set(ciaauthd_log_level.yfilter)) leaf_name_data.push_back(ciaauthd_log_level.get_name_leafdata());
    if (confd_log_level.is_set || is_set(confd_log_level.yfilter)) leaf_name_data.push_back(confd_log_level.get_name_leafdata());
    if (nes_log_level.is_set || is_set(nes_log_level.yfilter)) leaf_name_data.push_back(nes_log_level.get_name_leafdata());
    if (odm_log_level.is_set || is_set(odm_log_level.yfilter)) leaf_name_data.push_back(odm_log_level.get_name_leafdata());
    if (onep_log_level.is_set || is_set(onep_log_level.yfilter)) leaf_name_data.push_back(onep_log_level.get_name_leafdata());
    if (sync_log_level.is_set || is_set(sync_log_level.yfilter)) leaf_name_data.push_back(sync_log_level.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciaauthd-log-level")
    {
        ciaauthd_log_level = value;
        ciaauthd_log_level.value_namespace = name_space;
        ciaauthd_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confd-log-level")
    {
        confd_log_level = value;
        confd_log_level.value_namespace = name_space;
        confd_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nes-log-level")
    {
        nes_log_level = value;
        nes_log_level.value_namespace = name_space;
        nes_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odm-log-level")
    {
        odm_log_level = value;
        odm_log_level.value_namespace = name_space;
        odm_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onep-log-level")
    {
        onep_log_level = value;
        onep_log_level.value_namespace = name_space;
        onep_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-log-level")
    {
        sync_log_level = value;
        sync_log_level.value_namespace = name_space;
        sync_log_level.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciaauthd-log-level")
    {
        ciaauthd_log_level.yfilter = yfilter;
    }
    if(value_path == "confd-log-level")
    {
        confd_log_level.yfilter = yfilter;
    }
    if(value_path == "nes-log-level")
    {
        nes_log_level.yfilter = yfilter;
    }
    if(value_path == "odm-log-level")
    {
        odm_log_level.yfilter = yfilter;
    }
    if(value_path == "onep-log-level")
    {
        onep_log_level.yfilter = yfilter;
    }
    if(value_path == "sync-log-level")
    {
        sync_log_level.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciaauthd-log-level" || name == "confd-log-level" || name == "nes-log-level" || name == "odm-log-level" || name == "onep-log-level" || name == "sync-log-level")
        return true;
    return false;
}

NetconfYang::CiscoIa::ParserMsgIgnore::ParserMsgIgnore()
    :
    message{YType::str, "message"}
{

    yang_name = "parser-msg-ignore"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string NetconfYang::CiscoIa::ParserMsgIgnore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::ParserMsgIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser-msg-ignore" <<"[message='" <<message <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::ParserMsgIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::ParserMsgIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::ParserMsgIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::ParserMsgIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message")
        return true;
    return false;
}

NetconfYang::CiscoIa::PreserveNedPath::PreserveNedPath()
    :
    xpath{YType::str, "xpath"}
{

    yang_name = "preserve-ned-path"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(xpath.yfilter);
}

std::string NetconfYang::CiscoIa::PreserveNedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::PreserveNedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preserve-ned-path" <<"[xpath='" <<xpath <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::PreserveNedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xpath.is_set || is_set(xpath.yfilter)) leaf_name_data.push_back(xpath.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::PreserveNedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xpath")
    {
        xpath = value;
        xpath.value_namespace = name_space;
        xpath.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::PreserveNedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xpath")
    {
        xpath.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::PreserveNedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xpath")
        return true;
    return false;
}

NetconfYang::CiscoIa::SnmpTrapControl::SnmpTrapControl()
    :
    global_forwarding{YType::boolean, "global-forwarding"}
{

    yang_name = "snmp-trap-control"; yang_parent_name = "cisco-ia"; is_top_level_class = false; has_list_ancestor = false;
}

NetconfYang::CiscoIa::SnmpTrapControl::~SnmpTrapControl()
{
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_data() const
{
    for (std::size_t index=0; index<trap_list.size(); index++)
    {
        if(trap_list[index]->has_data())
            return true;
    }
    return global_forwarding.is_set;
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_operation() const
{
    for (std::size_t index=0; index<trap_list.size(); index++)
    {
        if(trap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global_forwarding.yfilter);
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::SnmpTrapControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_forwarding.is_set || is_set(global_forwarding.yfilter)) leaf_name_data.push_back(global_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfYang::CiscoIa::SnmpTrapControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-list")
    {
        for(auto const & c : trap_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoIa::SnmpTrapControl::TrapList>();
        c->parent = this;
        trap_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoIa::SnmpTrapControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfYang::CiscoIa::SnmpTrapControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-forwarding")
    {
        global_forwarding = value;
        global_forwarding.value_namespace = name_space;
        global_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::SnmpTrapControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-forwarding")
    {
        global_forwarding.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::SnmpTrapControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-list" || name == "global-forwarding")
        return true;
    return false;
}

NetconfYang::CiscoIa::SnmpTrapControl::TrapList::TrapList()
    :
    trap_oid{YType::str, "trap-oid"},
    description{YType::str, "description"},
    forward{YType::boolean, "forward"}
{

    yang_name = "trap-list"; yang_parent_name = "snmp-trap-control"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(forward.yfilter);
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-ia:cisco-ia/snmp-trap-control/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-list" <<"[trap-oid='" <<trap_oid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoIa::SnmpTrapControl::TrapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (forward.is_set || is_set(forward.yfilter)) leaf_name_data.push_back(forward.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoIa::SnmpTrapControl::TrapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward")
    {
        forward = value;
        forward.value_namespace = name_space;
        forward.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoIa::SnmpTrapControl::TrapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "forward")
    {
        forward.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoIa::SnmpTrapControl::TrapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-oid" || name == "description" || name == "forward")
        return true;
    return false;
}

NetconfYang::CiscoOdm::CiscoOdm()
    :
    on_demand_default_time{YType::uint32, "on-demand-default-time"},
    on_demand_enable{YType::boolean, "on-demand-enable"},
    polling_enable{YType::boolean, "polling-enable"}
{

    yang_name = "cisco-odm"; yang_parent_name = "netconf-yang"; is_top_level_class = false; has_list_ancestor = false;
}

NetconfYang::CiscoOdm::~CiscoOdm()
{
}

bool NetconfYang::CiscoOdm::has_data() const
{
    for (std::size_t index=0; index<actions.size(); index++)
    {
        if(actions[index]->has_data())
            return true;
    }
    return on_demand_default_time.is_set
	|| on_demand_enable.is_set
	|| polling_enable.is_set;
}

bool NetconfYang::CiscoOdm::has_operation() const
{
    for (std::size_t index=0; index<actions.size(); index++)
    {
        if(actions[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(on_demand_default_time.yfilter)
	|| ydk::is_set(on_demand_enable.yfilter)
	|| ydk::is_set(polling_enable.yfilter);
}

std::string NetconfYang::CiscoOdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoOdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-odm:cisco-odm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoOdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_demand_default_time.is_set || is_set(on_demand_default_time.yfilter)) leaf_name_data.push_back(on_demand_default_time.get_name_leafdata());
    if (on_demand_enable.is_set || is_set(on_demand_enable.yfilter)) leaf_name_data.push_back(on_demand_enable.get_name_leafdata());
    if (polling_enable.is_set || is_set(polling_enable.yfilter)) leaf_name_data.push_back(polling_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfYang::CiscoOdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actions")
    {
        for(auto const & c : actions)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfYang::CiscoOdm::Actions>();
        c->parent = this;
        actions.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfYang::CiscoOdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : actions)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfYang::CiscoOdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-demand-default-time")
    {
        on_demand_default_time = value;
        on_demand_default_time.value_namespace = name_space;
        on_demand_default_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-demand-enable")
    {
        on_demand_enable = value;
        on_demand_enable.value_namespace = name_space;
        on_demand_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polling-enable")
    {
        polling_enable = value;
        polling_enable.value_namespace = name_space;
        polling_enable.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoOdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-demand-default-time")
    {
        on_demand_default_time.yfilter = yfilter;
    }
    if(value_path == "on-demand-enable")
    {
        on_demand_enable.yfilter = yfilter;
    }
    if(value_path == "polling-enable")
    {
        polling_enable.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoOdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actions" || name == "on-demand-default-time" || name == "on-demand-enable" || name == "polling-enable")
        return true;
    return false;
}

NetconfYang::CiscoOdm::Actions::Actions()
    :
    action_name{YType::identityref, "action-name"},
    cdb_xpath{YType::str, "cdb-xpath"},
    mode{YType::enumeration, "mode"},
    polling_interval{YType::uint32, "polling-interval"}
{

    yang_name = "actions"; yang_parent_name = "cisco-odm"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(action_name.yfilter)
	|| ydk::is_set(cdb_xpath.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(polling_interval.yfilter);
}

std::string NetconfYang::CiscoOdm::Actions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-self-mgmt:netconf-yang/cisco-odm:cisco-odm/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::CiscoOdm::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions" <<"[action-name='" <<action_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::CiscoOdm::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_name.is_set || is_set(action_name.yfilter)) leaf_name_data.push_back(action_name.get_name_leafdata());
    if (cdb_xpath.is_set || is_set(cdb_xpath.yfilter)) leaf_name_data.push_back(cdb_xpath.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (polling_interval.is_set || is_set(polling_interval.yfilter)) leaf_name_data.push_back(polling_interval.get_name_leafdata());

    return leaf_name_data;

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

void NetconfYang::CiscoOdm::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-name")
    {
        action_name = value;
        action_name.value_namespace = name_space;
        action_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdb-xpath")
    {
        cdb_xpath = value;
        cdb_xpath.value_namespace = name_space;
        cdb_xpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polling-interval")
    {
        polling_interval = value;
        polling_interval.value_namespace = name_space;
        polling_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::CiscoOdm::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-name")
    {
        action_name.yfilter = yfilter;
    }
    if(value_path == "cdb-xpath")
    {
        cdb_xpath.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "polling-interval")
    {
        polling_interval.yfilter = yfilter;
    }
}

bool NetconfYang::CiscoOdm::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-name" || name == "cdb-xpath" || name == "mode" || name == "polling-interval")
        return true;
    return false;
}

const Enum::YLeaf NetconfYang::CiscoOdm::Actions::Mode::poll {0, "poll"};
const Enum::YLeaf NetconfYang::CiscoOdm::Actions::Mode::on_demand {1, "on-demand"};
const Enum::YLeaf NetconfYang::CiscoOdm::Actions::Mode::none {2, "none"};


}
}

