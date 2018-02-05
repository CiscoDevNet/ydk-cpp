#ifndef _CISCO_IOS_XR_TTY_SERVER_OPER_
#define _CISCO_IOS_XR_TTY_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_server_oper {

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

        class ConsoleNodes; //type: Tty::ConsoleNodes
        class VtyLines; //type: Tty::VtyLines
        class AuxiliaryNodes; //type: Tty::AuxiliaryNodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes> console_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines> vty_lines;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes> auxiliary_nodes;
        
}; // Tty


class Tty::ConsoleNodes : public ydk::Entity
{
    public:
        ConsoleNodes();
        ~ConsoleNodes();

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

        class ConsoleNode; //type: Tty::ConsoleNodes::ConsoleNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode> > console_node;
        
}; // Tty::ConsoleNodes


class Tty::ConsoleNodes::ConsoleNode : public ydk::Entity
{
    public:
        ConsoleNode();
        ~ConsoleNode();

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

        ydk::YLeaf id; //type: string
        class ConsoleLine; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine> console_line;
        
}; // Tty::ConsoleNodes::ConsoleNode


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine : public ydk::Entity
{
    public:
        ConsoleLine();
        ~ConsoleLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConsoleStatistics; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics
        class State; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State
        class Configuration; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics> console_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration> configuration;
        
}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics : public ydk::Entity
{
    public:
        ConsoleStatistics();
        ~ConsoleStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rs232; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232
        class GeneralStatistics; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics
        class Exec; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec
        class Aaa; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232> rs232;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics> general_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec> exec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa> aaa;
        
}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232 : public ydk::Entity
{
    public:
        Rs232();
        ~Rs232();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_bits; //type: uint32
        ydk::YLeaf exec_disabled; //type: boolean
        ydk::YLeaf hardware_flow_control_status; //type: uint32
        ydk::YLeaf parity_status; //type: uint32
        ydk::YLeaf baud_rate; //type: uint32
        ydk::YLeaf stop_bits; //type: uint32
        ydk::YLeaf overrun_error_count; //type: uint32
        ydk::YLeaf framing_error_count; //type: uint32
        ydk::YLeaf parity_error_count; //type: uint32

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics : public ydk::Entity
{
    public:
        GeneralStatistics();
        ~GeneralStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminal_length; //type: uint32
        ydk::YLeaf terminal_width; //type: uint32
        ydk::YLeaf async_interface; //type: boolean
        ydk::YLeaf flow_control_start_character; //type: int8
        ydk::YLeaf flow_control_stop_character; //type: int8
        ydk::YLeaf domain_lookup_enabled; //type: boolean
        ydk::YLeaf motd_banner_enabled; //type: boolean
        ydk::YLeaf private_flag; //type: boolean
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf absolute_timeout; //type: uint32
        ydk::YLeaf idle_time; //type: uint32

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec : public ydk::Entity
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

        ydk::YLeaf time_stamp_enabled; //type: boolean

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa : public ydk::Entity
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

        ydk::YLeaf user_name; //type: string

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template
        class General; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General> general;
        
}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General : public ydk::Entity
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

        ydk::YLeaf operation_; //type: SessionOperation
        ydk::YLeaf general_state; //type: LineState

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectionConfiguration; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration> connection_configuration;
        
}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration : public ydk::Entity
{
    public:
        ConnectionConfiguration();
        ~ConnectionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_out; //type: string
        ydk::YLeaf acl_in; //type: string
        class TransportInput; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;
        
}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput : public ydk::Entity
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
        ydk::YLeaf none; //type: int32

}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput


class Tty::VtyLines : public ydk::Entity
{
    public:
        VtyLines();
        ~VtyLines();

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

        class VtyLine; //type: Tty::VtyLines::VtyLine

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine> > vty_line;
        
}; // Tty::VtyLines


class Tty::VtyLines::VtyLine : public ydk::Entity
{
    public:
        VtyLine();
        ~VtyLine();

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

        ydk::YLeaf line_number; //type: int32
        class VtyStatistics; //type: Tty::VtyLines::VtyLine::VtyStatistics
        class State; //type: Tty::VtyLines::VtyLine::State
        class Configuration; //type: Tty::VtyLines::VtyLine::Configuration
        class Sessions; //type: Tty::VtyLines::VtyLine::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics> vty_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration> configuration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions> sessions;
        
}; // Tty::VtyLines::VtyLine


class Tty::VtyLines::VtyLine::VtyStatistics : public ydk::Entity
{
    public:
        VtyStatistics();
        ~VtyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Connection; //type: Tty::VtyLines::VtyLine::VtyStatistics::Connection
        class GeneralStatistics; //type: Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics
        class Exec; //type: Tty::VtyLines::VtyLine::VtyStatistics::Exec
        class Aaa; //type: Tty::VtyLines::VtyLine::VtyStatistics::Aaa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Connection> connection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics> general_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Exec> exec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Aaa> aaa;
        
}; // Tty::VtyLines::VtyLine::VtyStatistics


class Tty::VtyLines::VtyLine::VtyStatistics::Connection : public ydk::Entity
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

        ydk::YLeaf incoming_host_address; //type: string
        ydk::YLeaf host_address_family; //type: uint32
        ydk::YLeaf service; //type: uint32

}; // Tty::VtyLines::VtyLine::VtyStatistics::Connection


class Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics : public ydk::Entity
{
    public:
        GeneralStatistics();
        ~GeneralStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminal_length; //type: uint32
        ydk::YLeaf terminal_width; //type: uint32
        ydk::YLeaf async_interface; //type: boolean
        ydk::YLeaf flow_control_start_character; //type: int8
        ydk::YLeaf flow_control_stop_character; //type: int8
        ydk::YLeaf domain_lookup_enabled; //type: boolean
        ydk::YLeaf motd_banner_enabled; //type: boolean
        ydk::YLeaf private_flag; //type: boolean
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf absolute_timeout; //type: uint32
        ydk::YLeaf idle_time; //type: uint32

}; // Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics


class Tty::VtyLines::VtyLine::VtyStatistics::Exec : public ydk::Entity
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

        ydk::YLeaf time_stamp_enabled; //type: boolean

}; // Tty::VtyLines::VtyLine::VtyStatistics::Exec


class Tty::VtyLines::VtyLine::VtyStatistics::Aaa : public ydk::Entity
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

        ydk::YLeaf user_name; //type: string

}; // Tty::VtyLines::VtyLine::VtyStatistics::Aaa


class Tty::VtyLines::VtyLine::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template; //type: Tty::VtyLines::VtyLine::State::Template
        class General; //type: Tty::VtyLines::VtyLine::State::General

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State::Template> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State::General> general;
        
}; // Tty::VtyLines::VtyLine::State


class Tty::VtyLines::VtyLine::State::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // Tty::VtyLines::VtyLine::State::Template


class Tty::VtyLines::VtyLine::State::General : public ydk::Entity
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

        ydk::YLeaf operation_; //type: SessionOperation
        ydk::YLeaf general_state; //type: LineState

}; // Tty::VtyLines::VtyLine::State::General


class Tty::VtyLines::VtyLine::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectionConfiguration; //type: Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration> connection_configuration;
        
}; // Tty::VtyLines::VtyLine::Configuration


class Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration : public ydk::Entity
{
    public:
        ConnectionConfiguration();
        ~ConnectionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_out; //type: string
        ydk::YLeaf acl_in; //type: string
        class TransportInput; //type: Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;
        
}; // Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration


class Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput : public ydk::Entity
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
        ydk::YLeaf none; //type: int32

}; // Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput


class Tty::VtyLines::VtyLine::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OutgoingConnection; //type: Tty::VtyLines::VtyLine::Sessions::OutgoingConnection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions::OutgoingConnection> > outgoing_connection;
        
}; // Tty::VtyLines::VtyLine::Sessions


class Tty::VtyLines::VtyLine::Sessions::OutgoingConnection : public ydk::Entity
{
    public:
        OutgoingConnection();
        ~OutgoingConnection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection_id; //type: uint8
        ydk::YLeaf host_name; //type: string
        ydk::YLeaf transport_protocol; //type: TransportService
        ydk::YLeaf is_last_active_session; //type: boolean
        ydk::YLeaf idle_time; //type: uint32
        class HostAddress; //type: Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress> host_address;
        
}; // Tty::VtyLines::VtyLine::Sessions::OutgoingConnection


class Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress : public ydk::Entity
{
    public:
        HostAddress();
        ~HostAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: HostAfIdBase
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress


class Tty::AuxiliaryNodes : public ydk::Entity
{
    public:
        AuxiliaryNodes();
        ~AuxiliaryNodes();

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

        class AuxiliaryNode; //type: Tty::AuxiliaryNodes::AuxiliaryNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode> > auxiliary_node;
        
}; // Tty::AuxiliaryNodes


class Tty::AuxiliaryNodes::AuxiliaryNode : public ydk::Entity
{
    public:
        AuxiliaryNode();
        ~AuxiliaryNode();

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

        ydk::YLeaf id; //type: string
        class AuxiliaryLine; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine> auxiliary_line;
        
}; // Tty::AuxiliaryNodes::AuxiliaryNode


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine : public ydk::Entity
{
    public:
        AuxiliaryLine();
        ~AuxiliaryLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuxiliaryStatistics; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics
        class State; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State
        class Configuration; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics> auxiliary_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration> configuration;
        
}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics : public ydk::Entity
{
    public:
        AuxiliaryStatistics();
        ~AuxiliaryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rs232; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232
        class GeneralStatistics; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics
        class Exec; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec
        class Aaa; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232> rs232;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics> general_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec> exec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa> aaa;
        
}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232 : public ydk::Entity
{
    public:
        Rs232();
        ~Rs232();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_bits; //type: uint32
        ydk::YLeaf exec_disabled; //type: boolean
        ydk::YLeaf hardware_flow_control_status; //type: uint32
        ydk::YLeaf parity_status; //type: uint32
        ydk::YLeaf baud_rate; //type: uint32
        ydk::YLeaf stop_bits; //type: uint32
        ydk::YLeaf overrun_error_count; //type: uint32
        ydk::YLeaf framing_error_count; //type: uint32
        ydk::YLeaf parity_error_count; //type: uint32

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics : public ydk::Entity
{
    public:
        GeneralStatistics();
        ~GeneralStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminal_length; //type: uint32
        ydk::YLeaf terminal_width; //type: uint32
        ydk::YLeaf async_interface; //type: boolean
        ydk::YLeaf flow_control_start_character; //type: int8
        ydk::YLeaf flow_control_stop_character; //type: int8
        ydk::YLeaf domain_lookup_enabled; //type: boolean
        ydk::YLeaf motd_banner_enabled; //type: boolean
        ydk::YLeaf private_flag; //type: boolean
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf absolute_timeout; //type: uint32
        ydk::YLeaf idle_time; //type: uint32

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec : public ydk::Entity
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

        ydk::YLeaf time_stamp_enabled; //type: boolean

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa : public ydk::Entity
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

        ydk::YLeaf user_name; //type: string

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Template; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template
        class General; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General> general;
        
}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General : public ydk::Entity
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

        ydk::YLeaf operation_; //type: SessionOperation
        ydk::YLeaf general_state; //type: LineState

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectionConfiguration; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration> connection_configuration;
        
}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration : public ydk::Entity
{
    public:
        ConnectionConfiguration();
        ~ConnectionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_out; //type: string
        ydk::YLeaf acl_in; //type: string
        class TransportInput; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;
        
}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput : public ydk::Entity
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
        ydk::YLeaf none; //type: int32

}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput

class LineState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf registered;
        static const ydk::Enum::YLeaf in_use;

};

class SessionOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf setup;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf transitioning;
        static const ydk::Enum::YLeaf packet;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_SERVER_OPER_ */

