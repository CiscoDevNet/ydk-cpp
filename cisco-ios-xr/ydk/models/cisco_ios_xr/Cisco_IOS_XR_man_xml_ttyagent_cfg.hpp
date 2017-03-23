#ifndef _CISCO_IOS_XR_MAN_XML_TTYAGENT_CFG_
#define _CISCO_IOS_XR_MAN_XML_TTYAGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_man_xml_ttyagent_cfg {

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

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent> agent;


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



        class Default_; //type: XrXml::Agent::Default_
        class Tty; //type: XrXml::Agent::Tty
        class Ssl; //type: XrXml::Agent::Ssl

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_> default_;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl> ssl;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Tty> tty;


}; // XrXml::Agent


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


        YLeaf ipv6_enable; //type: boolean
        YLeaf ipv4_disable; //type: boolean
        YLeaf iteration_size; //type: uint32
        YLeaf enable; //type: empty
        YLeaf streaming_size; //type: uint32

        class Session; //type: XrXml::Agent::Default_::Session
        class Throttle; //type: XrXml::Agent::Default_::Throttle
        class Vrfs; //type: XrXml::Agent::Default_::Vrfs

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Session> session;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Throttle> throttle;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Vrfs> vrfs;


}; // XrXml::Agent::Default_


class XrXml::Agent::Default_::Session : public Entity
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


        YLeaf timeout; //type: uint32



}; // XrXml::Agent::Default_::Session


class XrXml::Agent::Default_::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_rate; //type: uint32
        YLeaf memory; //type: uint32



}; // XrXml::Agent::Default_::Throttle


class XrXml::Agent::Default_::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: XrXml::Agent::Default_::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Vrfs::Vrf> > vrf;


}; // XrXml::Agent::Default_::Vrfs


class XrXml::Agent::Default_::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf ipv6_access_list; //type: string
        YLeaf ipv4_access_list; //type: string
        YLeaf access_list; //type: string
        YLeaf shutdown; //type: empty



}; // XrXml::Agent::Default_::Vrfs::Vrf


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


        YLeaf iteration_size; //type: uint32
        YLeaf enable; //type: empty
        YLeaf streaming_size; //type: uint32

        class Session; //type: XrXml::Agent::Tty::Session
        class Throttle; //type: XrXml::Agent::Tty::Throttle

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Tty::Session> session;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Tty::Throttle> throttle;


}; // XrXml::Agent::Tty


class XrXml::Agent::Tty::Session : public Entity
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


        YLeaf timeout; //type: uint32



}; // XrXml::Agent::Tty::Session


class XrXml::Agent::Tty::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_rate; //type: uint32
        YLeaf memory; //type: uint32



}; // XrXml::Agent::Tty::Throttle


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


        YLeaf iteration_size; //type: uint32
        YLeaf enable; //type: empty
        YLeaf streaming_size; //type: uint32

        class Session; //type: XrXml::Agent::Ssl::Session
        class Throttle; //type: XrXml::Agent::Ssl::Throttle
        class Vrfs; //type: XrXml::Agent::Ssl::Vrfs

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Session> session;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Throttle> throttle;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Vrfs> vrfs;


}; // XrXml::Agent::Ssl


class XrXml::Agent::Ssl::Session : public Entity
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


        YLeaf timeout; //type: uint32



}; // XrXml::Agent::Ssl::Session


class XrXml::Agent::Ssl::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_rate; //type: uint32
        YLeaf memory; //type: uint32



}; // XrXml::Agent::Ssl::Throttle


class XrXml::Agent::Ssl::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: XrXml::Agent::Ssl::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Vrfs::Vrf> > vrf;


}; // XrXml::Agent::Ssl::Vrfs


class XrXml::Agent::Ssl::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf ipv6_access_list; //type: string
        YLeaf ipv4_access_list; //type: string
        YLeaf access_list; //type: string
        YLeaf shutdown; //type: empty



}; // XrXml::Agent::Ssl::Vrfs::Vrf

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

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent> agent;


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

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent::Tty> tty;


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


        YLeaf enable; //type: empty

        class Throttle; //type: Netconf::Agent::Tty::Throttle
        class Session; //type: Netconf::Agent::Tty::Session

        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent::Tty::Session> session;
        std::shared_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent::Tty::Throttle> throttle;


}; // Netconf::Agent::Tty


class Netconf::Agent::Tty::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf memory; //type: uint32
        YLeaf offload_memory; //type: uint32
        YLeaf process_rate; //type: uint32



}; // Netconf::Agent::Tty::Throttle


class Netconf::Agent::Tty::Session : public Entity
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


        YLeaf timeout; //type: uint32



}; // Netconf::Agent::Tty::Session


}
}

#endif /* _CISCO_IOS_XR_MAN_XML_TTYAGENT_CFG_ */

