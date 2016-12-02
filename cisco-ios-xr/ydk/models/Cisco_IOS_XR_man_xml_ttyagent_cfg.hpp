#ifndef _CISCO_IOS_XR_MAN_XML_TTYAGENT_CFG_
#define _CISCO_IOS_XR_MAN_XML_TTYAGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
                Value ipv6_enable; //type: boolean
                Value ipv4_disable; //type: boolean
                Value iteration_size; //type: uint32
                Value enable; //type: empty
                Value streaming_size; //type: uint32


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
                    Value timeout; //type: uint32




            }; // XrXml::Agent::Default_::Session


            class Throttle : public Entity
            {
                public:
                    Throttle();
                    ~Throttle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value process_rate; //type: uint32
                    Value memory; //type: uint32




            }; // XrXml::Agent::Default_::Throttle


            class Vrfs : public Entity
            {
                public:
                    Vrfs();
                    ~Vrfs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vrf_name; //type: string
                        Value ipv6_access_list; //type: string
                        Value ipv4_access_list; //type: string
                        Value access_list; //type: string
                        Value shutdown; //type: empty




                }; // XrXml::Agent::Default_::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Vrfs::Vrf> > vrf;


            }; // XrXml::Agent::Default_::Vrfs


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Session> session;
                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Throttle> throttle;
                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_::Vrfs> vrfs;


        }; // XrXml::Agent::Default_


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
                Value iteration_size; //type: uint32
                Value enable; //type: empty
                Value streaming_size; //type: uint32


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
                    Value timeout; //type: uint32




            }; // XrXml::Agent::Tty::Session


            class Throttle : public Entity
            {
                public:
                    Throttle();
                    ~Throttle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value process_rate; //type: uint32
                    Value memory; //type: uint32




            }; // XrXml::Agent::Tty::Throttle


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Tty::Session> session;
                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Tty::Throttle> throttle;


        }; // XrXml::Agent::Tty


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
                Value iteration_size; //type: uint32
                Value enable; //type: empty
                Value streaming_size; //type: uint32


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
                    Value timeout; //type: uint32




            }; // XrXml::Agent::Ssl::Session


            class Throttle : public Entity
            {
                public:
                    Throttle();
                    ~Throttle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value process_rate; //type: uint32
                    Value memory; //type: uint32




            }; // XrXml::Agent::Ssl::Throttle


            class Vrfs : public Entity
            {
                public:
                    Vrfs();
                    ~Vrfs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vrf_name; //type: string
                        Value ipv6_access_list; //type: string
                        Value ipv4_access_list; //type: string
                        Value access_list; //type: string
                        Value shutdown; //type: empty




                }; // XrXml::Agent::Ssl::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Vrfs::Vrf> > vrf;


            }; // XrXml::Agent::Ssl::Vrfs


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Session> session;
                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Throttle> throttle;
                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl::Vrfs> vrfs;


        }; // XrXml::Agent::Ssl


            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Default_> default_;
            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Ssl> ssl;
            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent::Tty> tty;


    }; // XrXml::Agent


        std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml::Agent> agent;


}; // XrXml

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
                Value enable; //type: empty


            class Throttle : public Entity
            {
                public:
                    Throttle();
                    ~Throttle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value memory; //type: uint32
                    Value offload_memory; //type: uint32
                    Value process_rate; //type: uint32




            }; // Netconf::Agent::Tty::Throttle


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
                    Value timeout; //type: uint32




            }; // Netconf::Agent::Tty::Session


                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent::Tty::Session> session;
                std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent::Tty::Throttle> throttle;


        }; // Netconf::Agent::Tty


            std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent::Tty> tty;


    }; // Netconf::Agent


        std::unique_ptr<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf::Agent> agent;


}; // Netconf



}
}

#endif /* _CISCO_IOS_XR_MAN_XML_TTYAGENT_CFG_ */

