#ifndef _CISCO_SELF_MGMT_
#define _CISCO_SELF_MGMT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace cisco_self_mgmt {

class NetconfYang : public ydk::Entity
{
    public:
        NetconfYang();
        ~NetconfYang();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CiscoIa; //type: NetconfYang::CiscoIa

        std::shared_ptr<cisco_ios_xe::cisco_self_mgmt::NetconfYang::CiscoIa> cisco_ia;
        
}; // NetconfYang


class NetconfYang::CiscoIa : public ydk::Entity
{
    public:
        CiscoIa();
        ~CiscoIa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf auto_sync; //type: CiaSyncType
        ydk::YLeaf init_sync; //type: CiaSyncType
        ydk::YLeaf intelligent_sync; //type: boolean
        ydk::YLeaf message_diag_level; //type: int16
        ydk::YLeaf max_diag_messages_saved; //type: int16
        ydk::YLeaf post_sync_acl_process; //type: boolean
        ydk::YLeaf config_change_delay; //type: int16
        ydk::YLeaf process_missing_prc; //type: boolean
        ydk::YLeaf missing_prc_method; //type: ParserMsgProcessingMethod
        ydk::YLeaf snmp_community_string; //type: string
        ydk::YLeaf preserve_paths_enabled; //type: boolean
        ydk::YLeaf nes_ttynum; //type: int16
        ydk::YLeaf restored; //type: boolean
        class SnmpTrapControl; //type: NetconfYang::CiscoIa::SnmpTrapControl
        class PreserveNedPath; //type: NetconfYang::CiscoIa::PreserveNedPath
        class ParserMsgIgnore; //type: NetconfYang::CiscoIa::ParserMsgIgnore
        class ConfParserMsgIgnore; //type: NetconfYang::CiscoIa::ConfParserMsgIgnore
        class ParserMsgError; //type: NetconfYang::CiscoIa::ParserMsgError
        class ConfParserMsgError; //type: NetconfYang::CiscoIa::ConfParserMsgError
        class FullSyncCli; //type: NetconfYang::CiscoIa::FullSyncCli
        class ConfFullSyncCli; //type: NetconfYang::CiscoIa::ConfFullSyncCli
        class Logging; //type: NetconfYang::CiscoIa::Logging
        class Blocking; //type: NetconfYang::CiscoIa::Blocking
        class PivotCommands; //type: NetconfYang::CiscoIa::PivotCommands

        std::shared_ptr<cisco_ios_xe::cisco_self_mgmt::NetconfYang::CiscoIa::SnmpTrapControl> snmp_trap_control;
        ydk::YList preserve_ned_path;
        ydk::YList parser_msg_ignore;
        ydk::YList conf_parser_msg_ignore;
        ydk::YList parser_msg_error;
        ydk::YList conf_parser_msg_error;
        ydk::YList full_sync_cli;
        ydk::YList conf_full_sync_cli;
        std::shared_ptr<cisco_ios_xe::cisco_self_mgmt::NetconfYang::CiscoIa::Logging> logging;
        std::shared_ptr<cisco_ios_xe::cisco_self_mgmt::NetconfYang::CiscoIa::Blocking> blocking;
        std::shared_ptr<cisco_ios_xe::cisco_self_mgmt::NetconfYang::CiscoIa::PivotCommands> pivot_commands;
        
}; // NetconfYang::CiscoIa


class NetconfYang::CiscoIa::SnmpTrapControl : public ydk::Entity
{
    public:
        SnmpTrapControl();
        ~SnmpTrapControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf global_forwarding; //type: boolean
        class TrapList; //type: NetconfYang::CiscoIa::SnmpTrapControl::TrapList

        ydk::YList trap_list;
        
}; // NetconfYang::CiscoIa::SnmpTrapControl


class NetconfYang::CiscoIa::SnmpTrapControl::TrapList : public ydk::Entity
{
    public:
        TrapList();
        ~TrapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trap_oid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf forward; //type: boolean

}; // NetconfYang::CiscoIa::SnmpTrapControl::TrapList


class NetconfYang::CiscoIa::PreserveNedPath : public ydk::Entity
{
    public:
        PreserveNedPath();
        ~PreserveNedPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xpath; //type: string

}; // NetconfYang::CiscoIa::PreserveNedPath


class NetconfYang::CiscoIa::ParserMsgIgnore : public ydk::Entity
{
    public:
        ParserMsgIgnore();
        ~ParserMsgIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf message; //type: string

}; // NetconfYang::CiscoIa::ParserMsgIgnore


class NetconfYang::CiscoIa::ConfParserMsgIgnore : public ydk::Entity
{
    public:
        ConfParserMsgIgnore();
        ~ConfParserMsgIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf message; //type: string

}; // NetconfYang::CiscoIa::ConfParserMsgIgnore


class NetconfYang::CiscoIa::ParserMsgError : public ydk::Entity
{
    public:
        ParserMsgError();
        ~ParserMsgError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf message; //type: string

}; // NetconfYang::CiscoIa::ParserMsgError


class NetconfYang::CiscoIa::ConfParserMsgError : public ydk::Entity
{
    public:
        ConfParserMsgError();
        ~ConfParserMsgError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf message; //type: string

}; // NetconfYang::CiscoIa::ConfParserMsgError


class NetconfYang::CiscoIa::FullSyncCli : public ydk::Entity
{
    public:
        FullSyncCli();
        ~FullSyncCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf command; //type: string

}; // NetconfYang::CiscoIa::FullSyncCli


class NetconfYang::CiscoIa::ConfFullSyncCli : public ydk::Entity
{
    public:
        ConfFullSyncCli();
        ~ConfFullSyncCli();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf command; //type: string

}; // NetconfYang::CiscoIa::ConfFullSyncCli


class NetconfYang::CiscoIa::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf confd_log_level; //type: SyslogSeverity
        ydk::YLeaf ciaauthd_log_level; //type: CiaLogLevel
        ydk::YLeaf nes_log_level; //type: CiaLogLevel
        ydk::YLeaf onep_log_level; //type: OnepLogLevel
        ydk::YLeaf odm_log_level; //type: CiaLogLevel
        ydk::YLeaf sync_log_level; //type: CiaLogLevel

}; // NetconfYang::CiscoIa::Logging


class NetconfYang::CiscoIa::Blocking : public ydk::Entity
{
    public:
        Blocking();
        ~Blocking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cli_blocking_enabled; //type: boolean
        ydk::YLeaf confd_cfg_blocking_enabled; //type: boolean
        class NetworkElementCommand; //type: NetconfYang::CiscoIa::Blocking::NetworkElementCommand
        class ConfdCfgCommand; //type: NetconfYang::CiscoIa::Blocking::ConfdCfgCommand

        ydk::YList network_element_command;
        ydk::YList confd_cfg_command;
        
}; // NetconfYang::CiscoIa::Blocking


class NetconfYang::CiscoIa::Blocking::NetworkElementCommand : public ydk::Entity
{
    public:
        NetworkElementCommand();
        ~NetworkElementCommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf command; //type: string

}; // NetconfYang::CiscoIa::Blocking::NetworkElementCommand


class NetconfYang::CiscoIa::Blocking::ConfdCfgCommand : public ydk::Entity
{
    public:
        ConfdCfgCommand();
        ~ConfdCfgCommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf command; //type: string

}; // NetconfYang::CiscoIa::Blocking::ConfdCfgCommand


class NetconfYang::CiscoIa::PivotCommands : public ydk::Entity
{
    public:
        PivotCommands();
        ~PivotCommands();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PivotCommand; //type: NetconfYang::CiscoIa::PivotCommands::PivotCommand

        ydk::YList pivot_command;
        
}; // NetconfYang::CiscoIa::PivotCommands


class NetconfYang::CiscoIa::PivotCommands::PivotCommand : public ydk::Entity
{
    public:
        PivotCommand();
        ~PivotCommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf command; //type: string
        class Retry; //type: NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry

        std::shared_ptr<cisco_ios_xe::cisco_self_mgmt::NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry> retry; // presence node
        
}; // NetconfYang::CiscoIa::PivotCommands::PivotCommand


class NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry : public ydk::Entity
{
    public:
        Retry();
        ~Retry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_retry_time; //type: uint16
        ydk::YLeaf max_retry_time; //type: uint16

}; // NetconfYang::CiscoIa::PivotCommands::PivotCommand::Retry


}
}

#endif /* _CISCO_SELF_MGMT_ */

