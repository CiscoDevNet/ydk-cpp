#ifndef _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_
#define _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Agent; //type: Netconf::Agent

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent> agent;


}; // Netconf


class Netconf::Agent : public Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tty; //type: Netconf::Agent::Tty

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty> tty;


}; // Netconf::Agent


class Netconf::Agent::Tty : public Entity
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



        class Sessions; //type: Netconf::Agent::Tty::Sessions

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty::Sessions> sessions;


}; // Netconf::Agent::Tty


class Netconf::Agent::Tty::Sessions : public Entity
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



        class Session; //type: Netconf::Agent::Tty::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty::Sessions::Session> > session;


}; // Netconf::Agent::Tty::Sessions


class Netconf::Agent::Tty::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: int32
        YLeaf username; //type: string
        YLeaf state; //type: XrXmlSessionStateEnum
        YLeaf client_address; //type: string
        YLeaf client_port; //type: uint32
        YLeaf config_session_id; //type: string
        YLeaf admin_config_session_id; //type: string
        YLeaf alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
        YLeaf vrf_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf elapsed_time; //type: uint32
        YLeaf last_state_change; //type: uint32



}; // Netconf::Agent::Tty::Sessions::Session

class XrXml : public Entity
{
    public:
        XrXml();
        ~XrXml();

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



        class Agent; //type: XrXml::Agent

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent> agent;


}; // XrXml


class XrXml::Agent : public Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tty; //type: XrXml::Agent::Tty
        class Default_; //type: XrXml::Agent::Default_
        class Ssl; //type: XrXml::Agent::Ssl

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default_> default_;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl> ssl;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty> tty;


}; // XrXml::Agent


class XrXml::Agent::Tty : public Entity
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



        class Sessions; //type: XrXml::Agent::Tty::Sessions

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty::Sessions> sessions;


}; // XrXml::Agent::Tty


class XrXml::Agent::Tty::Sessions : public Entity
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



        class Session; //type: XrXml::Agent::Tty::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty::Sessions::Session> > session;


}; // XrXml::Agent::Tty::Sessions


class XrXml::Agent::Tty::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: int32
        YLeaf username; //type: string
        YLeaf state; //type: XrXmlSessionStateEnum
        YLeaf client_address; //type: string
        YLeaf client_port; //type: uint32
        YLeaf config_session_id; //type: string
        YLeaf admin_config_session_id; //type: string
        YLeaf alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
        YLeaf vrf_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf elapsed_time; //type: uint32
        YLeaf last_state_change; //type: uint32



}; // XrXml::Agent::Tty::Sessions::Session


class XrXml::Agent::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sessions; //type: XrXml::Agent::Default_::Sessions

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default_::Sessions> sessions;


}; // XrXml::Agent::Default_


class XrXml::Agent::Default_::Sessions : public Entity
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



        class Session; //type: XrXml::Agent::Default_::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default_::Sessions::Session> > session;


}; // XrXml::Agent::Default_::Sessions


class XrXml::Agent::Default_::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: int32
        YLeaf username; //type: string
        YLeaf state; //type: XrXmlSessionStateEnum
        YLeaf client_address; //type: string
        YLeaf client_port; //type: uint32
        YLeaf config_session_id; //type: string
        YLeaf admin_config_session_id; //type: string
        YLeaf alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
        YLeaf vrf_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf elapsed_time; //type: uint32
        YLeaf last_state_change; //type: uint32



}; // XrXml::Agent::Default_::Sessions::Session


class XrXml::Agent::Ssl : public Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sessions; //type: XrXml::Agent::Ssl::Sessions

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl::Sessions> sessions;


}; // XrXml::Agent::Ssl


class XrXml::Agent::Ssl::Sessions : public Entity
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



        class Session; //type: XrXml::Agent::Ssl::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl::Sessions::Session> > session;


}; // XrXml::Agent::Ssl::Sessions


class XrXml::Agent::Ssl::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: int32
        YLeaf username; //type: string
        YLeaf state; //type: XrXmlSessionStateEnum
        YLeaf client_address; //type: string
        YLeaf client_port; //type: uint32
        YLeaf config_session_id; //type: string
        YLeaf admin_config_session_id; //type: string
        YLeaf alarm_notification; //type: XrXmlSessionAlarmRegisterEnum
        YLeaf vrf_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf elapsed_time; //type: uint32
        YLeaf last_state_change; //type: uint32



}; // XrXml::Agent::Ssl::Sessions::Session

class XrXmlSessionAlarmRegisterEnum : public Enum
{
    public:
        static const Enum::YLeaf registered;
        static const Enum::YLeaf not_registered;

};

class XrXmlSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf busy;

};


}
}

#endif /* _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_ */

