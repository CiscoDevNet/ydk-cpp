#ifndef _CISCO_IOS_XR_IPV4_TELNET_MGMT_CFG_
#define _CISCO_IOS_XR_IPV4_TELNET_MGMT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_telnet_mgmt_cfg {

class Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

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

        class Vrfs; //type: Telnet::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_telnet_mgmt_cfg::Telnet::Vrfs> vrfs;
        
}; // Telnet


class Telnet::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Telnet::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_telnet_mgmt_cfg::Telnet::Vrfs::Vrf> > vrf;
        
}; // Telnet::Vrfs


class Telnet::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Ipv4; //type: Telnet::Vrfs::Vrf::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ipv4_telnet_mgmt_cfg::Telnet::Vrfs::Vrf::Ipv4> ipv4;
        
}; // Telnet::Vrfs::Vrf


class Telnet::Vrfs::Vrf::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: uint32

}; // Telnet::Vrfs::Vrf::Ipv4


}
}

#endif /* _CISCO_IOS_XR_IPV4_TELNET_MGMT_CFG_ */

