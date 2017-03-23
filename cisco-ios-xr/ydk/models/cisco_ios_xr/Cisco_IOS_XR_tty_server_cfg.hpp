#ifndef _CISCO_IOS_XR_TTY_SERVER_CFG_
#define _CISCO_IOS_XR_TTY_SERVER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_tty_server_cfg {

class Tty : public Entity
{
    public:
        Tty();
        ~Tty();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class TtyLines; //type: Tty::TtyLines

        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines> tty_lines;


}; // Tty


class Tty::TtyLines : public Entity
{
    public:
        TtyLines();
        ~TtyLines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TtyLine; //type: Tty::TtyLines::TtyLine

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine> > tty_line;


}; // Tty::TtyLines


class Tty::TtyLines::TtyLine : public Entity
{
    public:
        TtyLine();
        ~TtyLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class General; //type: Tty::TtyLines::TtyLine::General
        class Telnet; //type: Tty::TtyLines::TtyLine::Telnet
        class Aaa; //type: Tty::TtyLines::TtyLine::Aaa
        class Exec; //type: Tty::TtyLines::TtyLine::Exec
        class Connection; //type: Tty::TtyLines::TtyLine::Connection
        class ExecMode; //type: Tty::TtyLines::TtyLine::ExecMode

        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Exec> exec;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::ExecMode> exec_mode;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::General> general;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Telnet> telnet;


}; // Tty::TtyLines::TtyLine


class Tty::TtyLines::TtyLine::General : public Entity
{
    public:
        General();
        ~General();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf length; //type: uint32
        YLeaf absolute_timeout; //type: uint32
        YLeaf width; //type: uint32



}; // Tty::TtyLines::TtyLine::General


class Tty::TtyLines::TtyLine::Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transparent; //type: empty



}; // Tty::TtyLines::TtyLine::Telnet


class Tty::TtyLines::TtyLine::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf login_timeout; //type: uint32
        YLeaf secret; //type: string
        YLeaf password; //type: string

        class UserGroups; //type: Tty::TtyLines::TtyLine::Aaa::UserGroups
        class Authorization; //type: Tty::TtyLines::TtyLine::Aaa::Authorization
        class Authentication; //type: Tty::TtyLines::TtyLine::Aaa::Authentication
        class Accounting; //type: Tty::TtyLines::TtyLine::Aaa::Accounting

        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::UserGroups> user_groups;


}; // Tty::TtyLines::TtyLine::Aaa


class Tty::TtyLines::TtyLine::Aaa::UserGroups : public Entity
{
    public:
        UserGroups();
        ~UserGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UserGroup; //type: Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup> > user_group;


}; // Tty::TtyLines::TtyLine::Aaa::UserGroups


class Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup : public Entity
{
    public:
        UserGroup();
        ~UserGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf category; //type: string



}; // Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup


class Tty::TtyLines::TtyLine::Aaa::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf exec; //type: string
        YLeaf event_manager; //type: string
        YLeaf commands; //type: string



}; // Tty::TtyLines::TtyLine::Aaa::Authorization


class Tty::TtyLines::TtyLine::Aaa::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf login; //type: string



}; // Tty::TtyLines::TtyLine::Aaa::Authentication


class Tty::TtyLines::TtyLine::Aaa::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf exec; //type: string
        YLeaf commands; //type: string



}; // Tty::TtyLines::TtyLine::Aaa::Accounting


class Tty::TtyLines::TtyLine::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_stamp; //type: boolean

        class Timeout; //type: Tty::TtyLines::TtyLine::Exec::Timeout

        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Exec::Timeout> timeout; // presence node


}; // Tty::TtyLines::TtyLine::Exec


class Tty::TtyLines::TtyLine::Exec::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint32



}; // Tty::TtyLines::TtyLine::Exec::Timeout


class Tty::TtyLines::TtyLine::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disconnect_character; //type: one of string, uint8
        YLeaf acl_in; //type: string
        YLeaf acl_out; //type: string
        YLeaf cli_white_space_completion; //type: empty
        YLeaf session_limit; //type: uint32
        YLeaf escape_character; //type: one of string, uint8
        YLeaf transport_preferred; //type: TtyTransportProtocolEnum

        class TransportInput; //type: Tty::TtyLines::TtyLine::Connection::TransportInput
        class TransportOutput; //type: Tty::TtyLines::TtyLine::Connection::TransportOutput
        class SessionTimeout; //type: Tty::TtyLines::TtyLine::Connection::SessionTimeout

        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::SessionTimeout> session_timeout; // presence node
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportInput> transport_input;
        std::shared_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportOutput> transport_output; // presence node


}; // Tty::TtyLines::TtyLine::Connection


class Tty::TtyLines::TtyLine::Connection::TransportInput : public Entity
{
    public:
        TransportInput();
        ~TransportInput();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf select; //type: TtyTransportProtocolSelectEnum
        YLeaf protocol1; //type: TtyTransportProtocolEnum
        YLeaf protocol2; //type: TtyTransportProtocolEnum
        YLeaf none; //type: int32



}; // Tty::TtyLines::TtyLine::Connection::TransportInput


class Tty::TtyLines::TtyLine::Connection::TransportOutput : public Entity
{
    public:
        TransportOutput();
        ~TransportOutput();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf select; //type: TtyTransportProtocolSelectEnum
        YLeaf protocol1; //type: TtyTransportProtocolEnum
        YLeaf protocol2; //type: TtyTransportProtocolEnum
        YLeaf none; //type: int32



}; // Tty::TtyLines::TtyLine::Connection::TransportOutput


class Tty::TtyLines::TtyLine::Connection::SessionTimeout : public Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeout; //type: uint32
        YLeaf direction; //type: TtySessionTimeoutDirectionEnum



}; // Tty::TtyLines::TtyLine::Connection::SessionTimeout


class Tty::TtyLines::TtyLine::ExecMode : public Entity
{
    public:
        ExecMode();
        ~ExecMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pager; //type: TtyPagerEnum



}; // Tty::TtyLines::TtyLine::ExecMode


}
}

#endif /* _CISCO_IOS_XR_TTY_SERVER_CFG_ */

