#ifndef _CISCO_IOS_XR_TTY_SERVER_OPER_
#define _CISCO_IOS_XR_TTY_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_tty_server_oper {

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



        class ConsoleNodes; //type: Tty::ConsoleNodes
        class VtyLines; //type: Tty::VtyLines
        class AuxiliaryNodes; //type: Tty::AuxiliaryNodes

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes> auxiliary_nodes;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes> console_nodes;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines> vty_lines;


}; // Tty


class Tty::ConsoleNodes : public Entity
{
    public:
        ConsoleNodes();
        ~ConsoleNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConsoleNode; //type: Tty::ConsoleNodes::ConsoleNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode> > console_node;


}; // Tty::ConsoleNodes


class Tty::ConsoleNodes::ConsoleNode : public Entity
{
    public:
        ConsoleNode();
        ~ConsoleNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string

        class ConsoleLine; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine> console_line;


}; // Tty::ConsoleNodes::ConsoleNode


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine : public Entity
{
    public:
        ConsoleLine();
        ~ConsoleLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConsoleStatistics; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics
        class State; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State
        class Configuration; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics> console_statistics;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State> state;


}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics : public Entity
{
    public:
        ConsoleStatistics();
        ~ConsoleStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rs232; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232
        class GeneralStatistics; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics
        class Exec; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec
        class Aaa; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec> exec;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics> general_statistics;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232> rs232;


}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232 : public Entity
{
    public:
        Rs232();
        ~Rs232();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_bits; //type: uint32
        YLeaf exec_disabled; //type: boolean
        YLeaf hardware_flow_control_status; //type: uint32
        YLeaf parity_status; //type: uint32
        YLeaf baud_rate; //type: uint32
        YLeaf stop_bits; //type: uint32
        YLeaf overrun_error_count; //type: uint32
        YLeaf framing_error_count; //type: uint32
        YLeaf parity_error_count; //type: uint32



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics : public Entity
{
    public:
        GeneralStatistics();
        ~GeneralStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminal_length; //type: uint32
        YLeaf terminal_width; //type: uint32
        YLeaf async_interface; //type: boolean
        YLeaf flow_control_start_character; //type: int8
        YLeaf flow_control_stop_character; //type: int8
        YLeaf domain_lookup_enabled; //type: boolean
        YLeaf motd_banner_enabled; //type: boolean
        YLeaf private_flag; //type: boolean
        YLeaf terminal_type; //type: string
        YLeaf absolute_timeout; //type: uint32
        YLeaf idle_time; //type: uint32



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec : public Entity
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


        YLeaf time_stamp_enabled; //type: boolean



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa : public Entity
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


        YLeaf user_name; //type: string



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Template_; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_
        class General; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General> general;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_> template_;


}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General : public Entity
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


        YLeaf operation_; //type: SessionOperationEnum
        YLeaf general_state; //type: LineStateEnum



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectionConfiguration; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration> connection_configuration;


}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration : public Entity
{
    public:
        ConnectionConfiguration();
        ~ConnectionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf acl_out; //type: string
        YLeaf acl_in; //type: string

        class TransportInput; //type: Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;


}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration


class Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput : public Entity
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



}; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput


class Tty::VtyLines : public Entity
{
    public:
        VtyLines();
        ~VtyLines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VtyLine; //type: Tty::VtyLines::VtyLine

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine> > vty_line;


}; // Tty::VtyLines


class Tty::VtyLines::VtyLine : public Entity
{
    public:
        VtyLine();
        ~VtyLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf line_number; //type: int32

        class VtyStatistics; //type: Tty::VtyLines::VtyLine::VtyStatistics
        class State; //type: Tty::VtyLines::VtyLine::State
        class Configuration; //type: Tty::VtyLines::VtyLine::Configuration
        class Sessions; //type: Tty::VtyLines::VtyLine::Sessions

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State> state;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics> vty_statistics;


}; // Tty::VtyLines::VtyLine


class Tty::VtyLines::VtyLine::VtyStatistics : public Entity
{
    public:
        VtyStatistics();
        ~VtyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Connection; //type: Tty::VtyLines::VtyLine::VtyStatistics::Connection
        class GeneralStatistics; //type: Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics
        class Exec; //type: Tty::VtyLines::VtyLine::VtyStatistics::Exec
        class Aaa; //type: Tty::VtyLines::VtyLine::VtyStatistics::Aaa

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Exec> exec;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics> general_statistics;


}; // Tty::VtyLines::VtyLine::VtyStatistics


class Tty::VtyLines::VtyLine::VtyStatistics::Connection : public Entity
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


        YLeaf incoming_host_address; //type: string
        YLeaf host_address_family; //type: uint32
        YLeaf service; //type: uint32



}; // Tty::VtyLines::VtyLine::VtyStatistics::Connection


class Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics : public Entity
{
    public:
        GeneralStatistics();
        ~GeneralStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminal_length; //type: uint32
        YLeaf terminal_width; //type: uint32
        YLeaf async_interface; //type: boolean
        YLeaf flow_control_start_character; //type: int8
        YLeaf flow_control_stop_character; //type: int8
        YLeaf domain_lookup_enabled; //type: boolean
        YLeaf motd_banner_enabled; //type: boolean
        YLeaf private_flag; //type: boolean
        YLeaf terminal_type; //type: string
        YLeaf absolute_timeout; //type: uint32
        YLeaf idle_time; //type: uint32



}; // Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics


class Tty::VtyLines::VtyLine::VtyStatistics::Exec : public Entity
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


        YLeaf time_stamp_enabled; //type: boolean



}; // Tty::VtyLines::VtyLine::VtyStatistics::Exec


class Tty::VtyLines::VtyLine::VtyStatistics::Aaa : public Entity
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


        YLeaf user_name; //type: string



}; // Tty::VtyLines::VtyLine::VtyStatistics::Aaa


class Tty::VtyLines::VtyLine::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Template_; //type: Tty::VtyLines::VtyLine::State::Template_
        class General; //type: Tty::VtyLines::VtyLine::State::General

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State::General> general;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State::Template_> template_;


}; // Tty::VtyLines::VtyLine::State


class Tty::VtyLines::VtyLine::State::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // Tty::VtyLines::VtyLine::State::Template_


class Tty::VtyLines::VtyLine::State::General : public Entity
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


        YLeaf operation_; //type: SessionOperationEnum
        YLeaf general_state; //type: LineStateEnum



}; // Tty::VtyLines::VtyLine::State::General


class Tty::VtyLines::VtyLine::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectionConfiguration; //type: Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration> connection_configuration;


}; // Tty::VtyLines::VtyLine::Configuration


class Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration : public Entity
{
    public:
        ConnectionConfiguration();
        ~ConnectionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf acl_out; //type: string
        YLeaf acl_in; //type: string

        class TransportInput; //type: Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;


}; // Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration


class Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput : public Entity
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



}; // Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput


class Tty::VtyLines::VtyLine::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OutgoingConnection; //type: Tty::VtyLines::VtyLine::Sessions::OutgoingConnection

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions::OutgoingConnection> > outgoing_connection;


}; // Tty::VtyLines::VtyLine::Sessions


class Tty::VtyLines::VtyLine::Sessions::OutgoingConnection : public Entity
{
    public:
        OutgoingConnection();
        ~OutgoingConnection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connection_id; //type: uint8
        YLeaf host_name; //type: string
        YLeaf transport_protocol; //type: TransportServiceEnum
        YLeaf is_last_active_session; //type: boolean
        YLeaf idle_time; //type: uint32

        class HostAddress; //type: Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress> host_address;


}; // Tty::VtyLines::VtyLine::Sessions::OutgoingConnection


class Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress : public Entity
{
    public:
        HostAddress();
        ~HostAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: HostAfIdBaseIdentity
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress


class Tty::AuxiliaryNodes : public Entity
{
    public:
        AuxiliaryNodes();
        ~AuxiliaryNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AuxiliaryNode; //type: Tty::AuxiliaryNodes::AuxiliaryNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode> > auxiliary_node;


}; // Tty::AuxiliaryNodes


class Tty::AuxiliaryNodes::AuxiliaryNode : public Entity
{
    public:
        AuxiliaryNode();
        ~AuxiliaryNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string

        class AuxiliaryLine; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine> auxiliary_line;


}; // Tty::AuxiliaryNodes::AuxiliaryNode


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine : public Entity
{
    public:
        AuxiliaryLine();
        ~AuxiliaryLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AuxiliaryStatistics; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics
        class State; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State
        class Configuration; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics> auxiliary_statistics;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State> state;


}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics : public Entity
{
    public:
        AuxiliaryStatistics();
        ~AuxiliaryStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rs232; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232
        class GeneralStatistics; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics
        class Exec; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec
        class Aaa; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec> exec;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics> general_statistics;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232> rs232;


}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232 : public Entity
{
    public:
        Rs232();
        ~Rs232();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_bits; //type: uint32
        YLeaf exec_disabled; //type: boolean
        YLeaf hardware_flow_control_status; //type: uint32
        YLeaf parity_status; //type: uint32
        YLeaf baud_rate; //type: uint32
        YLeaf stop_bits; //type: uint32
        YLeaf overrun_error_count; //type: uint32
        YLeaf framing_error_count; //type: uint32
        YLeaf parity_error_count; //type: uint32



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics : public Entity
{
    public:
        GeneralStatistics();
        ~GeneralStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminal_length; //type: uint32
        YLeaf terminal_width; //type: uint32
        YLeaf async_interface; //type: boolean
        YLeaf flow_control_start_character; //type: int8
        YLeaf flow_control_stop_character; //type: int8
        YLeaf domain_lookup_enabled; //type: boolean
        YLeaf motd_banner_enabled; //type: boolean
        YLeaf private_flag; //type: boolean
        YLeaf terminal_type; //type: string
        YLeaf absolute_timeout; //type: uint32
        YLeaf idle_time; //type: uint32



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec : public Entity
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


        YLeaf time_stamp_enabled; //type: boolean



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa : public Entity
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


        YLeaf user_name; //type: string



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Template_; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_
        class General; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General> general;
        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_> template_;


}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General : public Entity
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


        YLeaf operation_; //type: SessionOperationEnum
        YLeaf general_state; //type: LineStateEnum



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectionConfiguration; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration> connection_configuration;


}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration : public Entity
{
    public:
        ConnectionConfiguration();
        ~ConnectionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf acl_out; //type: string
        YLeaf acl_in; //type: string

        class TransportInput; //type: Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput

        std::shared_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;


}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration


class Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput : public Entity
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



}; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput

class LineStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf registered;
        static const Enum::YLeaf in_use;

};

class SessionOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf setup;
        static const Enum::YLeaf shell;
        static const Enum::YLeaf transitioning;
        static const Enum::YLeaf packet;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_SERVER_OPER_ */

