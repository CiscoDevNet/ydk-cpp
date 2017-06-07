#ifndef _CISCO_IOS_XR_MAN_NETCONF_CFG_
#define _CISCO_IOS_XR_MAN_NETCONF_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_man_netconf_cfg {

class NetconfYang : public Entity
{
    public:
        NetconfYang();
        ~NetconfYang();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Agent; //type: NetconfYang::Agent

        std::shared_ptr<Cisco_IOS_XR_man_netconf_cfg::NetconfYang::Agent> agent;
        
}; // NetconfYang


class NetconfYang::Agent : public Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate_limit; //type: uint32
        class Ssh; //type: NetconfYang::Agent::Ssh
        class Session; //type: NetconfYang::Agent::Session

        std::shared_ptr<Cisco_IOS_XR_man_netconf_cfg::NetconfYang::Agent::Session> session;
        std::shared_ptr<Cisco_IOS_XR_man_netconf_cfg::NetconfYang::Agent::Ssh> ssh;
        
}; // NetconfYang::Agent


class NetconfYang::Agent::Ssh : public Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // NetconfYang::Agent::Ssh


class NetconfYang::Agent::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf absolute_timeout; //type: uint32
        YLeaf idle_timeout; //type: uint32

}; // NetconfYang::Agent::Session


}
}

#endif /* _CISCO_IOS_XR_MAN_NETCONF_CFG_ */

