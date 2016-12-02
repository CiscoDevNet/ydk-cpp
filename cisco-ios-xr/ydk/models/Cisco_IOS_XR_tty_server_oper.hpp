#ifndef _CISCO_IOS_XR_TTY_SERVER_OPER_
#define _CISCO_IOS_XR_TTY_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_tty_management_datatypes.hpp"
#include "Cisco_IOS_XR_tty_management_oper.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class ConsoleNodes : public Entity
    {
        public:
            ConsoleNodes();
            ~ConsoleNodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ConsoleNode : public Entity
        {
            public:
                ConsoleNode();
                ~ConsoleNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value id; //type: string


            class ConsoleLine : public Entity
            {
                public:
                    ConsoleLine();
                    ~ConsoleLine();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ConsoleStatistics : public Entity
                {
                    public:
                        ConsoleStatistics();
                        ~ConsoleStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rs232 : public Entity
                    {
                        public:
                            Rs232();
                            ~Rs232();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value data_bits; //type: uint32
                            Value exec_disabled; //type: boolean
                            Value hardware_flow_control_status; //type: uint32
                            Value parity_status; //type: uint32
                            Value baud_rate; //type: uint32
                            Value stop_bits; //type: uint32
                            Value overrun_error_count; //type: uint32
                            Value framing_error_count; //type: uint32
                            Value parity_error_count; //type: uint32




                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232


                    class GeneralStatistics : public Entity
                    {
                        public:
                            GeneralStatistics();
                            ~GeneralStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value terminal_length; //type: uint32
                            Value terminal_width; //type: uint32
                            Value async_interface; //type: boolean
                            Value flow_control_start_character; //type: int8
                            Value flow_control_stop_character; //type: int8
                            Value domain_lookup_enabled; //type: boolean
                            Value motd_banner_enabled; //type: boolean
                            Value private_flag; //type: boolean
                            Value terminal_type; //type: string
                            Value absolute_timeout; //type: uint32
                            Value idle_time; //type: uint32




                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics


                    class Exec : public Entity
                    {
                        public:
                            Exec();
                            ~Exec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value time_stamp_enabled; //type: boolean




                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec


                    class Aaa : public Entity
                    {
                        public:
                            Aaa();
                            ~Aaa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value user_name; //type: string




                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa> aaa;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec> exec;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics> general_statistics;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232> rs232;


                }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Template_ : public Entity
                    {
                        public:
                            Template_();
                            ~Template_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string




                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_


                    class General : public Entity
                    {
                        public:
                            General();
                            ~General();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operation_; //type: SessionOperationEnum
                            Value general_state; //type: LineStateEnum


                            class LineStateEnum;
                            class SessionOperationEnum;


                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General> general;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_> template_;


                }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State


                class Configuration : public Entity
                {
                    public:
                        Configuration();
                        ~Configuration();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ConnectionConfiguration : public Entity
                    {
                        public:
                            ConnectionConfiguration();
                            ~ConnectionConfiguration();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value acl_out; //type: string
                            Value acl_in; //type: string


                        class TransportInput : public Entity
                        {
                            public:
                                TransportInput();
                                ~TransportInput();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value select; //type: TtyTransportProtocolSelectEnum
                                Value protocol1; //type: TtyTransportProtocolEnum
                                Value protocol2; //type: TtyTransportProtocolEnum
                                Value none; //type: int32


                                class TtyTransportProtocolEnum;
                                class TtyTransportProtocolEnum;
                                class TtyTransportProtocolSelectEnum;


                        }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput


                            std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;


                    }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration> connection_configuration;


                }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration


                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration> configuration;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics> console_statistics;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State> state;


            }; // Tty::ConsoleNodes::ConsoleNode::ConsoleLine


                std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode::ConsoleLine> console_line;


        }; // Tty::ConsoleNodes::ConsoleNode


            std::vector<std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes::ConsoleNode> > console_node;


    }; // Tty::ConsoleNodes


    class VtyLines : public Entity
    {
        public:
            VtyLines();
            ~VtyLines();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class VtyLine : public Entity
        {
            public:
                VtyLine();
                ~VtyLine();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value line_number; //type: int32


            class VtyStatistics : public Entity
            {
                public:
                    VtyStatistics();
                    ~VtyStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Connection : public Entity
                {
                    public:
                        Connection();
                        ~Connection();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value incoming_host_address; //type: string
                        Value host_address_family; //type: uint32
                        Value service; //type: uint32




                }; // Tty::VtyLines::VtyLine::VtyStatistics::Connection


                class GeneralStatistics : public Entity
                {
                    public:
                        GeneralStatistics();
                        ~GeneralStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value terminal_length; //type: uint32
                        Value terminal_width; //type: uint32
                        Value async_interface; //type: boolean
                        Value flow_control_start_character; //type: int8
                        Value flow_control_stop_character; //type: int8
                        Value domain_lookup_enabled; //type: boolean
                        Value motd_banner_enabled; //type: boolean
                        Value private_flag; //type: boolean
                        Value terminal_type; //type: string
                        Value absolute_timeout; //type: uint32
                        Value idle_time; //type: uint32




                }; // Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics


                class Exec : public Entity
                {
                    public:
                        Exec();
                        ~Exec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value time_stamp_enabled; //type: boolean




                }; // Tty::VtyLines::VtyLine::VtyStatistics::Exec


                class Aaa : public Entity
                {
                    public:
                        Aaa();
                        ~Aaa();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value user_name; //type: string




                }; // Tty::VtyLines::VtyLine::VtyStatistics::Aaa


                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Aaa> aaa;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Connection> connection;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::Exec> exec;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics> general_statistics;


            }; // Tty::VtyLines::VtyLine::VtyStatistics


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string




                }; // Tty::VtyLines::VtyLine::State::Template_


                class General : public Entity
                {
                    public:
                        General();
                        ~General();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value operation_; //type: SessionOperationEnum
                        Value general_state; //type: LineStateEnum


                        class LineStateEnum;
                        class SessionOperationEnum;


                }; // Tty::VtyLines::VtyLine::State::General


                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State::General> general;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State::Template_> template_;


            }; // Tty::VtyLines::VtyLine::State


            class Configuration : public Entity
            {
                public:
                    Configuration();
                    ~Configuration();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ConnectionConfiguration : public Entity
                {
                    public:
                        ConnectionConfiguration();
                        ~ConnectionConfiguration();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value acl_out; //type: string
                        Value acl_in; //type: string


                    class TransportInput : public Entity
                    {
                        public:
                            TransportInput();
                            ~TransportInput();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value select; //type: TtyTransportProtocolSelectEnum
                            Value protocol1; //type: TtyTransportProtocolEnum
                            Value protocol2; //type: TtyTransportProtocolEnum
                            Value none; //type: int32


                            class TtyTransportProtocolEnum;
                            class TtyTransportProtocolEnum;
                            class TtyTransportProtocolSelectEnum;


                    }; // Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;


                }; // Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration


                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration> connection_configuration;


            }; // Tty::VtyLines::VtyLine::Configuration


            class Sessions : public Entity
            {
                public:
                    Sessions();
                    ~Sessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OutgoingConnection : public Entity
                {
                    public:
                        OutgoingConnection();
                        ~OutgoingConnection();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value connection_id; //type: uint8
                        Value host_name; //type: string
                        Value transport_protocol; //type: TransportServiceEnum
                        Value is_last_active_session; //type: boolean
                        Value idle_time; //type: uint32


                    class HostAddress : public Entity
                    {
                        public:
                            HostAddress();
                            ~HostAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: HostAfIdBaseIdentity
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string




                    }; // Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress> host_address;
                        class TransportServiceEnum;


                }; // Tty::VtyLines::VtyLine::Sessions::OutgoingConnection


                    std::vector<std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions::OutgoingConnection> > outgoing_connection;


            }; // Tty::VtyLines::VtyLine::Sessions


                std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Configuration> configuration;
                std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::Sessions> sessions;
                std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::State> state;
                std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine::VtyStatistics> vty_statistics;


        }; // Tty::VtyLines::VtyLine


            std::vector<std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines::VtyLine> > vty_line;


    }; // Tty::VtyLines


    class AuxiliaryNodes : public Entity
    {
        public:
            AuxiliaryNodes();
            ~AuxiliaryNodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class AuxiliaryNode : public Entity
        {
            public:
                AuxiliaryNode();
                ~AuxiliaryNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value id; //type: string


            class AuxiliaryLine : public Entity
            {
                public:
                    AuxiliaryLine();
                    ~AuxiliaryLine();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AuxiliaryStatistics : public Entity
                {
                    public:
                        AuxiliaryStatistics();
                        ~AuxiliaryStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rs232 : public Entity
                    {
                        public:
                            Rs232();
                            ~Rs232();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value data_bits; //type: uint32
                            Value exec_disabled; //type: boolean
                            Value hardware_flow_control_status; //type: uint32
                            Value parity_status; //type: uint32
                            Value baud_rate; //type: uint32
                            Value stop_bits; //type: uint32
                            Value overrun_error_count; //type: uint32
                            Value framing_error_count; //type: uint32
                            Value parity_error_count; //type: uint32




                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232


                    class GeneralStatistics : public Entity
                    {
                        public:
                            GeneralStatistics();
                            ~GeneralStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value terminal_length; //type: uint32
                            Value terminal_width; //type: uint32
                            Value async_interface; //type: boolean
                            Value flow_control_start_character; //type: int8
                            Value flow_control_stop_character; //type: int8
                            Value domain_lookup_enabled; //type: boolean
                            Value motd_banner_enabled; //type: boolean
                            Value private_flag; //type: boolean
                            Value terminal_type; //type: string
                            Value absolute_timeout; //type: uint32
                            Value idle_time; //type: uint32




                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics


                    class Exec : public Entity
                    {
                        public:
                            Exec();
                            ~Exec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value time_stamp_enabled; //type: boolean




                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec


                    class Aaa : public Entity
                    {
                        public:
                            Aaa();
                            ~Aaa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value user_name; //type: string




                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa> aaa;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec> exec;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics> general_statistics;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232> rs232;


                }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Template_ : public Entity
                    {
                        public:
                            Template_();
                            ~Template_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string




                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_


                    class General : public Entity
                    {
                        public:
                            General();
                            ~General();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operation_; //type: SessionOperationEnum
                            Value general_state; //type: LineStateEnum


                            class LineStateEnum;
                            class SessionOperationEnum;


                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General> general;
                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_> template_;


                }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State


                class Configuration : public Entity
                {
                    public:
                        Configuration();
                        ~Configuration();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ConnectionConfiguration : public Entity
                    {
                        public:
                            ConnectionConfiguration();
                            ~ConnectionConfiguration();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value acl_out; //type: string
                            Value acl_in; //type: string


                        class TransportInput : public Entity
                        {
                            public:
                                TransportInput();
                                ~TransportInput();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value select; //type: TtyTransportProtocolSelectEnum
                                Value protocol1; //type: TtyTransportProtocolEnum
                                Value protocol2; //type: TtyTransportProtocolEnum
                                Value none; //type: int32


                                class TtyTransportProtocolEnum;
                                class TtyTransportProtocolEnum;
                                class TtyTransportProtocolSelectEnum;


                        }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput


                            std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput> transport_input;


                    }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration


                        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration> connection_configuration;


                }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration


                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics> auxiliary_statistics;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration> configuration;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State> state;


            }; // Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine


                std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine> auxiliary_line;


        }; // Tty::AuxiliaryNodes::AuxiliaryNode


            std::vector<std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes::AuxiliaryNode> > auxiliary_node;


    }; // Tty::AuxiliaryNodes


        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::AuxiliaryNodes> auxiliary_nodes;
        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::ConsoleNodes> console_nodes;
        std::unique_ptr<Cisco_IOS_XR_tty_server_oper::Tty::VtyLines> vty_lines;


}; // Tty


class LineStateEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value registered;
        static const Enum::Value in_use;

};

class SessionOperationEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value setup;
        static const Enum::Value shell;
        static const Enum::Value transitioning;
        static const Enum::Value packet;

};


}
}

#endif /* _CISCO_IOS_XR_TTY_SERVER_OPER_ */

