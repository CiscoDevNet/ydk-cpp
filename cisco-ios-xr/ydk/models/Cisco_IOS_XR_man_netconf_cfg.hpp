#ifndef _CISCO_IOS_XR_MAN_NETCONF_CFG_
#define _CISCO_IOS_XR_MAN_NETCONF_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_netconf_cfg {

class NetconfYang : public Entity
{
    public:
        NetconfYang();
        ~NetconfYang();

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
            Value rate_limit; //type: uint32


        class Ssh : public Entity
        {
            public:
                Ssh();
                ~Ssh();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // NetconfYang::Agent::Ssh


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
                Value limit; //type: uint32
                Value absolute_timeout; //type: uint32
                Value idle_timeout; //type: uint32




        }; // NetconfYang::Agent::Session


            std::unique_ptr<Cisco_IOS_XR_man_netconf_cfg::NetconfYang::Agent::Session> session;
            std::unique_ptr<Cisco_IOS_XR_man_netconf_cfg::NetconfYang::Agent::Ssh> ssh;


    }; // NetconfYang::Agent


        std::unique_ptr<Cisco_IOS_XR_man_netconf_cfg::NetconfYang::Agent> agent;


}; // NetconfYang



}
}

#endif /* _CISCO_IOS_XR_MAN_NETCONF_CFG_ */

