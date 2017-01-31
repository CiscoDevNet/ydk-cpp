#ifndef _CISCO_IOS_XR_TTY_SERVER_CFG_
#define _CISCO_IOS_XR_TTY_SERVER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


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


                YLeaf name; //type: string

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


                    YLeaf length; //type: uint32
                    YLeaf absolute_timeout; //type: uint32
                    YLeaf width; //type: uint32



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


                    YLeaf transparent; //type: empty



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


                    YLeaf login_timeout; //type: uint32
                    YLeaf secret; //type: string
                    YLeaf password; //type: string

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


                            YLeaf name; //type: string
                            YLeaf category; //type: string



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


                        YLeaf exec; //type: string
                        YLeaf event_manager; //type: string
                        YLeaf commands; //type: string



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


                        YLeaf login; //type: string



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


                        YLeaf exec; //type: string
                        YLeaf commands; //type: string



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


                    YLeaf time_stamp; //type: boolean

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


                        YLeaf minutes; //type: uint32
                        YLeaf seconds; //type: uint32



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


                    YLeaf disconnect_character; //type: one of string, uint8
                    YLeaf acl_in; //type: string
                    YLeaf acl_out; //type: string
                    YLeaf cli_white_space_completion; //type: empty
                    YLeaf session_limit; //type: uint32
                    YLeaf escape_character; //type: one of string, uint8
                    YLeaf transport_preferred; //type: TtyTransportProtocolEnum

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


                        YLeaf select; //type: TtyTransportProtocolSelectEnum
                        YLeaf protocol1; //type: TtyTransportProtocolEnum
                        YLeaf protocol2; //type: TtyTransportProtocolEnum
                        YLeaf none; //type: int32



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


                        YLeaf select; //type: TtyTransportProtocolSelectEnum
                        YLeaf protocol1; //type: TtyTransportProtocolEnum
                        YLeaf protocol2; //type: TtyTransportProtocolEnum
                        YLeaf none; //type: int32



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


                        YLeaf timeout; //type: uint32
                        YLeaf direction; //type: TtySessionTimeoutDirectionEnum



                }; // Tty::TtyLines::TtyLine::Connection::SessionTimeout


                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::SessionTimeout> session_timeout; // presence node
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportInput> transport_input;
                    std::unique_ptr<Cisco_IOS_XR_tty_server_cfg::Tty::TtyLines::TtyLine::Connection::TransportOutput> transport_output; // presence node


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


                    YLeaf pager; //type: TtyPagerEnum



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

