#ifndef _CISCO_IOS_XR_TTY_SERVER_CFG_
#define _CISCO_IOS_XR_TTY_SERVER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_tty_management_datatypes.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class TtyLines : public Entity
    {
        public:
            TtyLines();
            ~TtyLines();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class TtyLine : public Entity
        {
            public:
                TtyLine();
                ~TtyLine();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


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
                    Value length; //type: uint32
                    Value absolute_timeout; //type: uint32
                    Value width; //type: uint32




            }; // Tty::TtyLines::TtyLine::General


            class Telnet : public Entity
            {
                public:
                    Telnet();
                    ~Telnet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value transparent; //type: empty




            }; // Tty::TtyLines::TtyLine::Telnet


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
                    Value login_timeout; //type: uint32
                    Value secret; //type: string
                    Value password; //type: string


                class UserGroups : public Entity
                {
                    public:
                        UserGroups();
                        ~UserGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class UserGroup : public Entity
                    {
                        public:
                            UserGroup();
                            ~UserGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string
                            Value category; //type: string




                    }; // Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::UserGroups::UserGroup> > user_group;


                }; // Tty::TtyLines::TtyLine::Aaa::UserGroups


                class Authorization : public Entity
                {
                    public:
                        Authorization();
                        ~Authorization();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value exec; //type: string
                        Value event_manager; //type: string
                        Value commands; //type: string




                }; // Tty::TtyLines::TtyLine::Aaa::Authorization


                class Authentication : public Entity
                {
                    public:
                        Authentication();
                        ~Authentication();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value login; //type: string




                }; // Tty::TtyLines::TtyLine::Aaa::Authentication


                class Accounting : public Entity
                {
                    public:
                        Accounting();
                        ~Accounting();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value exec; //type: string
                        Value commands; //type: string




                }; // Tty::TtyLines::TtyLine::Aaa::Accounting


                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Accounting> accounting;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Authentication> authentication;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::Authorization> authorization;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa::UserGroups> user_groups;


            }; // Tty::TtyLines::TtyLine::Aaa


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
                    Value time_stamp; //type: boolean


                class Timeout : public Entity
                {
                    public:
                        Timeout();
                        ~Timeout();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value minutes; //type: uint32
                        Value seconds; //type: uint32




                }; // Tty::TtyLines::TtyLine::Exec::Timeout


                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Exec::Timeout> timeout; // presence node


            }; // Tty::TtyLines::TtyLine::Exec


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
                    Value disconnect_character; //type: one of string, uint8
                    Value acl_in; //type: string
                    Value acl_out; //type: string
                    Value cli_white_space_completion; //type: empty
                    Value session_limit; //type: uint32
                    Value escape_character; //type: one of string, uint8
                    Value transport_preferred; //type: TtyTransportProtocolEnum


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


                }; // Tty::TtyLines::TtyLine::Connection::TransportInput


                class TransportOutput : public Entity
                {
                    public:
                        TransportOutput();
                        ~TransportOutput();

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


                }; // Tty::TtyLines::TtyLine::Connection::TransportOutput


                class SessionTimeout : public Entity
                {
                    public:
                        SessionTimeout();
                        ~SessionTimeout();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value timeout; //type: uint32
                        Value direction; //type: TtySessionTimeoutDirectionEnum


                        class TtySessionTimeoutDirectionEnum;


                }; // Tty::TtyLines::TtyLine::Connection::SessionTimeout


                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::SessionTimeout> session_timeout; // presence node
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportInput> transport_input;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportOutput> transport_output; // presence node
                    class TtyTransportProtocolEnum;


            }; // Tty::TtyLines::TtyLine::Connection


            class ExecMode : public Entity
            {
                public:
                    ExecMode();
                    ~ExecMode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value pager; //type: TtyPagerEnum


                    class TtyPagerEnum;


            }; // Tty::TtyLines::TtyLine::ExecMode


                std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Aaa> aaa;
                std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection> connection;
                std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Exec> exec;
                std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::ExecMode> exec_mode;
                std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::General> general;
                std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Telnet> telnet;


        }; // Tty::TtyLines::TtyLine


            std::vector<std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine> > tty_line;


    }; // Tty::TtyLines


        std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines> tty_lines;


}; // Tty



}
}

#endif /* _CISCO_IOS_XR_TTY_SERVER_CFG_ */

