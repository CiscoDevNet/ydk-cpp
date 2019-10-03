#ifndef _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_
#define _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_xml_ttyagent_oper {

class Netconf : public ydk::Entity
{
    public:
        Netconf();
        ~Netconf();

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

        class Agent; //type: Netconf::Agent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent> agent;
        
}; // Netconf


class Netconf::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

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

        class Tty; //type: Netconf::Agent::Tty

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty> tty;
        
}; // Netconf::Agent


class Netconf::Agent::Tty : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sessions; //type: Netconf::Agent::Tty::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf::Agent::Tty::Sessions> sessions;
        
}; // Netconf::Agent::Tty


class Netconf::Agent::Tty::Sessions : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Session; //type: Netconf::Agent::Tty::Sessions::Session

        ydk::YList session;
        
}; // Netconf::Agent::Tty::Sessions


class Netconf::Agent::Tty::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf state; //type: XrXmlSessionState
        ydk::YLeaf client_address; //type: string
        ydk::YLeaf client_port; //type: uint32
        ydk::YLeaf config_session_id; //type: string
        ydk::YLeaf admin_config_session_id; //type: string
        ydk::YLeaf alarm_notification; //type: XrXmlSessionAlarmRegister
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf last_state_change; //type: uint32

}; // Netconf::Agent::Tty::Sessions::Session

class XrXml : public ydk::Entity
{
    public:
        XrXml();
        ~XrXml();

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

        class Agent; //type: XrXml::Agent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent> agent;
        
}; // XrXml


class XrXml::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

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

        class Tty; //type: XrXml::Agent::Tty
        class Default; //type: XrXml::Agent::Default
        class Ssl; //type: XrXml::Agent::Ssl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty> tty;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default> default_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl> ssl;
        
}; // XrXml::Agent


class XrXml::Agent::Tty : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sessions; //type: XrXml::Agent::Tty::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Tty::Sessions> sessions;
        
}; // XrXml::Agent::Tty


class XrXml::Agent::Tty::Sessions : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Session; //type: XrXml::Agent::Tty::Sessions::Session

        ydk::YList session;
        
}; // XrXml::Agent::Tty::Sessions


class XrXml::Agent::Tty::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf state; //type: XrXmlSessionState
        ydk::YLeaf client_address; //type: string
        ydk::YLeaf client_port; //type: uint32
        ydk::YLeaf config_session_id; //type: string
        ydk::YLeaf admin_config_session_id; //type: string
        ydk::YLeaf alarm_notification; //type: XrXmlSessionAlarmRegister
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf last_state_change; //type: uint32

}; // XrXml::Agent::Tty::Sessions::Session


class XrXml::Agent::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class Sessions; //type: XrXml::Agent::Default::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Default::Sessions> sessions;
        
}; // XrXml::Agent::Default


class XrXml::Agent::Default::Sessions : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Session; //type: XrXml::Agent::Default::Sessions::Session

        ydk::YList session;
        
}; // XrXml::Agent::Default::Sessions


class XrXml::Agent::Default::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf state; //type: XrXmlSessionState
        ydk::YLeaf client_address; //type: string
        ydk::YLeaf client_port; //type: uint32
        ydk::YLeaf config_session_id; //type: string
        ydk::YLeaf admin_config_session_id; //type: string
        ydk::YLeaf alarm_notification; //type: XrXmlSessionAlarmRegister
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf last_state_change; //type: uint32

}; // XrXml::Agent::Default::Sessions::Session


class XrXml::Agent::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

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

        class Sessions; //type: XrXml::Agent::Ssl::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml::Agent::Ssl::Sessions> sessions;
        
}; // XrXml::Agent::Ssl


class XrXml::Agent::Ssl::Sessions : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Session; //type: XrXml::Agent::Ssl::Sessions::Session

        ydk::YList session;
        
}; // XrXml::Agent::Ssl::Sessions


class XrXml::Agent::Ssl::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf state; //type: XrXmlSessionState
        ydk::YLeaf client_address; //type: string
        ydk::YLeaf client_port; //type: uint32
        ydk::YLeaf config_session_id; //type: string
        ydk::YLeaf admin_config_session_id; //type: string
        ydk::YLeaf alarm_notification; //type: XrXmlSessionAlarmRegister
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf last_state_change; //type: uint32

}; // XrXml::Agent::Ssl::Sessions::Session

class XrXmlSessionAlarmRegister : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf registered;
        static const ydk::Enum::YLeaf not_registered;

        static int get_enum_value(const std::string & name) {
            if (name == "registered") return 1;
            if (name == "not-registered") return 2;
            return -1;
        }
};

class XrXmlSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf busy;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 1;
            if (name == "busy") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MAN_XML_TTYAGENT_OPER_ */

