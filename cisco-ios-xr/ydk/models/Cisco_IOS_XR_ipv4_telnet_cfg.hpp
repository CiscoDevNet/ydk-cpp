#ifndef _CISCO_IOS_XR_IPV4_TELNET_CFG_
#define _CISCO_IOS_XR_IPV4_TELNET_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_telnet_cfg {

class Ipv6Telnet : public Entity
{
    public:
        Ipv6Telnet();
        ~Ipv6Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Client : public Entity
    {
        public:
            Client();
            ~Client();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf source_interface; //type: string



    }; // Ipv6Telnet::Client


        std::unique_ptr<Cisco_IOS_XR_ipv4_telnet_cfg::Ipv6Telnet::Client> client;


}; // Ipv6Telnet

class Ipv4Telnet : public Entity
{
    public:
        Ipv4Telnet();
        ~Ipv4Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Client : public Entity
    {
        public:
            Client();
            ~Client();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf source_interface; //type: string



    }; // Ipv4Telnet::Client


        std::unique_ptr<Cisco_IOS_XR_ipv4_telnet_cfg::Ipv4Telnet::Client> client;


}; // Ipv4Telnet



}
}

#endif /* _CISCO_IOS_XR_IPV4_TELNET_CFG_ */

