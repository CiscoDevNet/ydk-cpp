#ifndef _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_
#define _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_xml_ttyagent_oper {

class Netconf : public Entity
{
    public:
        Netconf();
        ~Netconf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Agent : public Entity
    {
        public:
            Agent();
            ~Agent();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: int32
                        Value username; //type: string
                        Value state; //type: XrXmlSessionStateEnum
                        Value client_address; //type: string
                        Value client_port; //type: uint32
                        Value config_session_id; //type: string
                        Value admin_config_session_id; //type: string
                        Value alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
                        Value vrf_name; //type: string
                        Value start_time; //type: uint32
                        Value elapsed_time; //type: uint32
                        Value last_state_change; //type: uint32


                        class XrXmlSessionAlarmRegisterEnum;
                        class XrXmlSessionStateEnum;


                }; // Netconf::Agent::Tty::Sessions::Session


                    std::vector<std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty::Sessions::Session> > session;


            }; // Netconf::Agent::Tty::Sessions


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty::Sessions> sessions;


        }; // Netconf::Agent::Tty


            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty> tty;


    }; // Netconf::Agent


        std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent> agent;


}; // Netconf

class XrXml : public Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Agent : public Entity
    {
        public:
            Agent();
            ~Agent();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: int32
                        Value username; //type: string
                        Value state; //type: XrXmlSessionStateEnum
                        Value client_address; //type: string
                        Value client_port; //type: uint32
                        Value config_session_id; //type: string
                        Value admin_config_session_id; //type: string
                        Value alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
                        Value vrf_name; //type: string
                        Value start_time; //type: uint32
                        Value elapsed_time; //type: uint32
                        Value last_state_change; //type: uint32


                        class XrXmlSessionAlarmRegisterEnum;
                        class XrXmlSessionStateEnum;


                }; // XrXml::Agent::Tty::Sessions::Session


                    std::vector<std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty::Sessions::Session> > session;


            }; // XrXml::Agent::Tty::Sessions


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty::Sessions> sessions;


        }; // XrXml::Agent::Tty


        class Default_ : public Entity
        {
            public:
                Default_();
                ~Default_();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: int32
                        Value username; //type: string
                        Value state; //type: XrXmlSessionStateEnum
                        Value client_address; //type: string
                        Value client_port; //type: uint32
                        Value config_session_id; //type: string
                        Value admin_config_session_id; //type: string
                        Value alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
                        Value vrf_name; //type: string
                        Value start_time; //type: uint32
                        Value elapsed_time; //type: uint32
                        Value last_state_change; //type: uint32


                        class XrXmlSessionAlarmRegisterEnum;
                        class XrXmlSessionStateEnum;


                }; // XrXml::Agent::Default_::Sessions::Session


                    std::vector<std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default_::Sessions::Session> > session;


            }; // XrXml::Agent::Default_::Sessions


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default_::Sessions> sessions;


        }; // XrXml::Agent::Default_


        class Ssl : public Entity
        {
            public:
                Ssl();
                ~Ssl();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: int32
                        Value username; //type: string
                        Value state; //type: XrXmlSessionStateEnum
                        Value client_address; //type: string
                        Value client_port; //type: uint32
                        Value config_session_id; //type: string
                        Value admin_config_session_id; //type: string
                        Value alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
                        Value vrf_name; //type: string
                        Value start_time; //type: uint32
                        Value elapsed_time; //type: uint32
                        Value last_state_change; //type: uint32


                        class XrXmlSessionAlarmRegisterEnum;
                        class XrXmlSessionStateEnum;


                }; // XrXml::Agent::Ssl::Sessions::Session


                    std::vector<std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl::Sessions::Session> > session;


            }; // XrXml::Agent::Ssl::Sessions


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl::Sessions> sessions;


        }; // XrXml::Agent::Ssl


            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default_> default_;
            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl> ssl;
            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty> tty;


    }; // XrXml::Agent


        std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent> agent;


}; // XrXml


class XrXmlSessionAlarmRegisterEnum : public Enum
{
    public:
        static const Enum::Value registered;
        static const Enum::Value not_registered;

};

class XrXmlSessionStateEnum : public Enum
{
    public:
        static const Enum::Value idle;
        static const Enum::Value busy;

};


}
}

#endif /* _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_ */

