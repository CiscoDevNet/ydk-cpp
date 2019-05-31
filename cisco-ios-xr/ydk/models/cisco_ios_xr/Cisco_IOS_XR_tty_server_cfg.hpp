#ifndef _CISCO_IOS_XR_TTY_SERVER_CFG_
#define _CISCO_IOS_XR_TTY_SERVER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_server_cfg {

class Tty : public ydk::Entity
{
    public:
        Tty();
        ~Tty();

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

        class TtyLines; //type: Tty::TtyLines

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines> tty_lines;
        
}; // Tty


class Tty::TtyLines : public ydk::Entity
{
    public:
        TtyLines();
        ~TtyLines();

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

        class TtyLine; //type: Tty::TtyLines::TtyLine

        ydk::YList tty_line;
        
}; // Tty::TtyLines


class Tty::TtyLines::TtyLine : public ydk::Entity
{
    public:
        TtyLine();
        ~TtyLine();

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

        ydk::YLeaf name; //type: string
        class General; //type: Tty::TtyLines::TtyLine::General
        class Telnet; //type: Tty::TtyLines::TtyLine::Telnet
        class Aaa; //type: Tty::TtyLines::TtyLine::Aaa
        class Exec; //type: Tty::TtyLines::TtyLine::Exec
        class Connection; //type: Tty::TtyLines::TtyLine::Connection
        class ExecMode; //type: Tty::TtyLines::TtyLine::ExecMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::General> general;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Telnet> telnet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa> aaa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Exec> exec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection> connection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::ExecMode> exec_mode;
        
}; // Tty::TtyLines::TtyLine


class Tty::TtyLines::TtyLine::General : public ydk::Entity
{
    public:
        General();
        ~General();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf length; //type: uint32
        ydk::YLeaf absolute_timeout; //type: uint32
        ydk::YLeaf width; //type: uint32

}; // Tty::TtyLines::TtyLine::General


class Tty::TtyLines::TtyLine::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transparent; //type: empty

}; // Tty::TtyLines::TtyLine::Telnet


class Tty::TtyLines::TtyLine::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login_timeout; //type: uint32
        ydk::YLeaf secret; //type: string
        ydk::YLeaf password; //type: string
        class UserGroups; //type: Tty::TtyLines::TtyLine::Aaa::UserGroups
        class Authorization; //type: Tty::TtyLines::TtyLine::Aaa::Authorization
        class Authentication; //type: Tty::TtyLines::TtyLine::Aaa::Authentication
        class Accounting; //type: Tty::TtyLines::TtyLine::Aaa::Accounting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::UserGroups> user_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Accounting> accounting;
        
}; // Tty::TtyLines::TtyLine::Aaa


class Tty::TtyLines::TtyLine::Aaa::UserGroups : public ydk::Entity
{
    public:
        UserGroups();
        ~UserGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserGroup; //type: Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup

        ydk::YList user_group;
        
}; // Tty::TtyLines::TtyLine::Aaa::UserGroups


class Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup : public ydk::Entity
{
    public:
        UserGroup();
        ~UserGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf category; //type: string

}; // Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup


class Tty::TtyLines::TtyLine::Aaa::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: string
        ydk::YLeaf event_manager; //type: string
        ydk::YLeaf commands; //type: string

}; // Tty::TtyLines::TtyLine::Aaa::Authorization


class Tty::TtyLines::TtyLine::Aaa::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: string

}; // Tty::TtyLines::TtyLine::Aaa::Authentication


class Tty::TtyLines::TtyLine::Aaa::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: string
        ydk::YLeaf commands; //type: string

}; // Tty::TtyLines::TtyLine::Aaa::Accounting


class Tty::TtyLines::TtyLine::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_stamp; //type: boolean
        class Timeout; //type: Tty::TtyLines::TtyLine::Exec::Timeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Exec::Timeout> timeout; // presence node
        
}; // Tty::TtyLines::TtyLine::Exec


class Tty::TtyLines::TtyLine::Exec::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32

}; // Tty::TtyLines::TtyLine::Exec::Timeout


class Tty::TtyLines::TtyLine::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disconnect_character; //type: one of uint8, string
        ydk::YLeaf acl_in; //type: string
        ydk::YLeaf acl_out; //type: string
        ydk::YLeaf cli_white_space_completion; //type: empty
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf escape_character; //type: one of uint8, string
        ydk::YLeaf transport_preferred; //type: TtyTransportProtocol
        class TransportInput; //type: Tty::TtyLines::TtyLine::Connection::TransportInput
        class TransportOutput; //type: Tty::TtyLines::TtyLine::Connection::TransportOutput
        class SessionTimeout; //type: Tty::TtyLines::TtyLine::Connection::SessionTimeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportInput> transport_input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportOutput> transport_output; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::SessionTimeout> session_timeout; // presence node
        
}; // Tty::TtyLines::TtyLine::Connection


class Tty::TtyLines::TtyLine::Connection::TransportInput : public ydk::Entity
{
    public:
        TransportInput();
        ~TransportInput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf select; //type: TtyTransportProtocolSelect
        ydk::YLeaf protocol1; //type: TtyTransportProtocol
        ydk::YLeaf protocol2; //type: TtyTransportProtocol
        ydk::YLeaf none; //type: uint32

}; // Tty::TtyLines::TtyLine::Connection::TransportInput


class Tty::TtyLines::TtyLine::Connection::TransportOutput : public ydk::Entity
{
    public:
        TransportOutput();
        ~TransportOutput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf select; //type: TtyTransportProtocolSelect
        ydk::YLeaf protocol1; //type: TtyTransportProtocol
        ydk::YLeaf protocol2; //type: TtyTransportProtocol
        ydk::YLeaf none; //type: uint32

}; // Tty::TtyLines::TtyLine::Connection::TransportOutput


class Tty::TtyLines::TtyLine::Connection::SessionTimeout : public ydk::Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf direction; //type: TtySessionTimeoutDirection

}; // Tty::TtyLines::TtyLine::Connection::SessionTimeout


class Tty::TtyLines::TtyLine::ExecMode : public ydk::Entity
{
    public:
        ExecMode();
        ~ExecMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pager; //type: TtyPager

}; // Tty::TtyLines::TtyLine::ExecMode


}
}

#endif /* _CISCO_IOS_XR_TTY_SERVER_CFG_ */

