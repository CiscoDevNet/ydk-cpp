#ifndef _CISCO_IOS_XR_IPV6_SMIAP_CFG_
#define _CISCO_IOS_XR_IPV6_SMIAP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_smiap_cfg {

class Ipv6Virtual : public Entity
{
    public:
        Ipv6Virtual();
        ~Ipv6Virtual();

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

        YLeaf use_as_source_address; //type: empty
        class Vrfs; //type: Ipv6Virtual::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv6_smiap_cfg::Ipv6Virtual::Vrfs> vrfs;
        
}; // Ipv6Virtual


class Ipv6Virtual::Vrfs : public Entity
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

        class Vrf; //type: Ipv6Virtual::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_smiap_cfg::Ipv6Virtual::Vrfs::Vrf> > vrf;
        
}; // Ipv6Virtual::Vrfs


class Ipv6Virtual::Vrfs::Vrf : public Entity
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
        class Address; //type: Ipv6Virtual::Vrfs::Vrf::Address

        std::shared_ptr<Cisco_IOS_XR_ipv6_smiap_cfg::Ipv6Virtual::Vrfs::Vrf::Address> address; // presence node
        
}; // Ipv6Virtual::Vrfs::Vrf


class Ipv6Virtual::Vrfs::Vrf::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8

}; // Ipv6Virtual::Vrfs::Vrf::Address


}
}

#endif /* _CISCO_IOS_XR_IPV6_SMIAP_CFG_ */

