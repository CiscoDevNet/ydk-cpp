#ifndef _CISCO_SELF_MGMT_
#define _CISCO_SELF_MGMT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace cisco_self_mgmt {

class NetconfYang : public Entity
{
    public:
        NetconfYang();
        ~NetconfYang();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class CiscoIa; //type: NetconfYang::CiscoIa
        class CiscoOdm; //type: NetconfYang::CiscoOdm

        std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa> cisco_ia_;
        std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoOdm> cisco_odm_;
        
}; // NetconfYang


class NetconfYang::CiscoIa : public Entity
{
    public:
        CiscoIa();
        ~CiscoIa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_sync; //type: CiaSyncTypeEnum
        YLeaf init_sync; //type: CiaSyncTypeEnum
        YLeaf intelligent_sync; //type: boolean
        YLeaf message_diag_level; //type: int16
        YLeaf max_diag_messages_saved; //type: int16
        YLeaf post_sync_acl_process; //type: boolean
        YLeaf config_change_delay; //type: int16
        YLeaf process_missing_prc; //type: boolean
        YLeaf snmp_community_string; //type: string
        YLeaf preserve_paths_enabled; //type: boolean
        YLeaf nes_ttynum; //type: int16
        YLeaf restored; //type: boolean
        class SnmpTrapControl; //type: NetconfYang::CiscoIa::SnmpTrapControl
        class PreserveNedPath; //type: NetconfYang::CiscoIa::PreserveNedPath
        class ParserMsgIgnore; //type: NetconfYang::CiscoIa::ParserMsgIgnore
        class ConfParserMsgIgnore; //type: NetconfYang::CiscoIa::ConfParserMsgIgnore
        class FullSyncCli; //type: NetconfYang::CiscoIa::FullSyncCli
        class ConfFullSyncCli; //type: NetconfYang::CiscoIa::ConfFullSyncCli
        class Logging; //type: NetconfYang::CiscoIa::Logging
        class Blocking; //type: NetconfYang::CiscoIa::Blocking

        std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::Blocking> blocking_;
        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::ConfFullSyncCli> > conf_full_sync_cli_;
        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::ConfParserMsgIgnore> > conf_parser_msg_ignore_;
        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::FullSyncCli> > full_sync_cli_;
        std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::Logging> logging_;
        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::ParserMsgIgnore> > parser_msg_ignore_;
        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::PreserveNedPath> > preserve_ned_path_;
        std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::SnmpTrapControl> snmp_trap_control_;
        
}; // NetconfYang::CiscoIa


class NetconfYang::CiscoIa::SnmpTrapControl : public Entity
{
    public:
        SnmpTrapControl();
        ~SnmpTrapControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf global_forwarding; //type: boolean
        class TrapList; //type: NetconfYang::CiscoIa::SnmpTrapControl::TrapList

        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::SnmpTrapControl::TrapList> > trap_list_;
        
}; // NetconfYang::CiscoIa::SnmpTrapControl


class NetconfYang::CiscoIa::SnmpTrapControl::TrapList : public Entity
{
    public:
        TrapList();
        ~TrapList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trap_oid; //type: string
        YLeaf description; //type: string
        YLeaf forward; //type: boolean

}; // NetconfYang::CiscoIa::SnmpTrapControl::TrapList


class NetconfYang::CiscoIa::PreserveNedPath : public Entity
{
    public:
        PreserveNedPath();
        ~PreserveNedPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xpath; //type: string

}; // NetconfYang::CiscoIa::PreserveNedPath


class NetconfYang::CiscoIa::ParserMsgIgnore : public Entity
{
    public:
        ParserMsgIgnore();
        ~ParserMsgIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf message; //type: string

}; // NetconfYang::CiscoIa::ParserMsgIgnore


class NetconfYang::CiscoIa::ConfParserMsgIgnore : public Entity
{
    public:
        ConfParserMsgIgnore();
        ~ConfParserMsgIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf message; //type: string

}; // NetconfYang::CiscoIa::ConfParserMsgIgnore


class NetconfYang::CiscoIa::FullSyncCli : public Entity
{
    public:
        FullSyncCli();
        ~FullSyncCli();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string

}; // NetconfYang::CiscoIa::FullSyncCli


class NetconfYang::CiscoIa::ConfFullSyncCli : public Entity
{
    public:
        ConfFullSyncCli();
        ~ConfFullSyncCli();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string

}; // NetconfYang::CiscoIa::ConfFullSyncCli


class NetconfYang::CiscoIa::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf confd_log_level; //type: SyslogSeverityEnum
        YLeaf ciaauthd_log_level; //type: CiaLogLevelEnum
        YLeaf nes_log_level; //type: CiaLogLevelEnum
        YLeaf onep_log_level; //type: OnepLogLevelEnum
        YLeaf odm_log_level; //type: CiaLogLevelEnum
        YLeaf sync_log_level; //type: CiaLogLevelEnum

}; // NetconfYang::CiscoIa::Logging


class NetconfYang::CiscoIa::Blocking : public Entity
{
    public:
        Blocking();
        ~Blocking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cli_blocking_enabled; //type: boolean
        YLeaf confd_cfg_blocking_enabled; //type: boolean
        class NetworkElementCommand; //type: NetconfYang::CiscoIa::Blocking::NetworkElementCommand
        class ConfdCfgCommand; //type: NetconfYang::CiscoIa::Blocking::ConfdCfgCommand

        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::Blocking::ConfdCfgCommand> > confd_cfg_command_;
        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoIa::Blocking::NetworkElementCommand> > network_element_command_;
        
}; // NetconfYang::CiscoIa::Blocking


class NetconfYang::CiscoIa::Blocking::NetworkElementCommand : public Entity
{
    public:
        NetworkElementCommand();
        ~NetworkElementCommand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string

}; // NetconfYang::CiscoIa::Blocking::NetworkElementCommand


class NetconfYang::CiscoIa::Blocking::ConfdCfgCommand : public Entity
{
    public:
        ConfdCfgCommand();
        ~ConfdCfgCommand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string

}; // NetconfYang::CiscoIa::Blocking::ConfdCfgCommand


class NetconfYang::CiscoOdm : public Entity
{
    public:
        CiscoOdm();
        ~CiscoOdm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf polling_enable; //type: boolean
        YLeaf on_demand_default_time; //type: uint32
        YLeaf on_demand_enable; //type: boolean
        class Actions; //type: NetconfYang::CiscoOdm::Actions

        std::vector<std::shared_ptr<cisco_self_mgmt::NetconfYang::CiscoOdm::Actions> > actions_;
        
}; // NetconfYang::CiscoOdm


class NetconfYang::CiscoOdm::Actions : public Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_name; //type: ParsernameIdentity
        YLeaf polling_interval; //type: uint32
        YLeaf mode; //type: ModeEnum
        YLeaf cdb_xpath; //type: string
        class ModeEnum;

}; // NetconfYang::CiscoOdm::Actions

class NetconfYang::CiscoOdm::Actions::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf poll;
        static const Enum::YLeaf on_demand;
        static const Enum::YLeaf none;

};


}
}

#endif /* _CISCO_SELF_MGMT_ */

