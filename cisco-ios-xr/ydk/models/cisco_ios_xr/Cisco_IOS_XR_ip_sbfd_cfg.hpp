#ifndef _CISCO_IOS_XR_IP_SBFD_CFG_
#define _CISCO_IOS_XR_IP_SBFD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_sbfd_cfg {

class Sbfd : public Entity
{
    public:
        Sbfd();
        ~Sbfd();

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

        class RemoteTarget; //type: Sbfd::RemoteTarget
        class LocalDiscriminator; //type: Sbfd::LocalDiscriminator

        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator> local_discriminator;
        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget> remote_target;
        
}; // Sbfd


class Sbfd::RemoteTarget : public Entity
{
    public:
        RemoteTarget();
        ~RemoteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Addresses; //type: Sbfd::RemoteTarget::Ipv4Addresses
        class Ipv6Addresses; //type: Sbfd::RemoteTarget::Ipv6Addresses

        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv4Addresses> ipv4_addresses;
        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv6Addresses> ipv6_addresses;
        
}; // Sbfd::RemoteTarget


class Sbfd::RemoteTarget::Ipv4Addresses : public Entity
{
    public:
        Ipv4Addresses();
        ~Ipv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Address; //type: Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address> > ipv4_address;
        
}; // Sbfd::RemoteTarget::Ipv4Addresses


class Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class RemoteDiscriminator; //type: Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator> > remote_discriminator;
        
}; // Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address


class Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator : public Entity
{
    public:
        RemoteDiscriminator();
        ~RemoteDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_discriminator; //type: uint32

}; // Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator


class Sbfd::RemoteTarget::Ipv6Addresses : public Entity
{
    public:
        Ipv6Addresses();
        ~Ipv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Address; //type: Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address> > ipv6_address;
        
}; // Sbfd::RemoteTarget::Ipv6Addresses


class Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address : public Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class RemoteDiscriminator; //type: Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator> > remote_discriminator;
        
}; // Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address


class Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator : public Entity
{
    public:
        RemoteDiscriminator();
        ~RemoteDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_discriminator; //type: uint32

}; // Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator


class Sbfd::LocalDiscriminator : public Entity
{
    public:
        LocalDiscriminator();
        ~LocalDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IntfDiscriminators; //type: Sbfd::LocalDiscriminator::IntfDiscriminators
        class DynamicDiscriminators; //type: Sbfd::LocalDiscriminator::DynamicDiscriminators
        class Ipv4Discriminators; //type: Sbfd::LocalDiscriminator::Ipv4Discriminators
        class Val32Discriminators; //type: Sbfd::LocalDiscriminator::Val32Discriminators

        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::DynamicDiscriminators> dynamic_discriminators;
        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::IntfDiscriminators> intf_discriminators;
        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Ipv4Discriminators> ipv4_discriminators;
        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Val32Discriminators> val32_discriminators;
        
}; // Sbfd::LocalDiscriminator


class Sbfd::LocalDiscriminator::IntfDiscriminators : public Entity
{
    public:
        IntfDiscriminators();
        ~IntfDiscriminators();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IntfDiscriminator; //type: Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator> > intf_discriminator;
        
}; // Sbfd::LocalDiscriminator::IntfDiscriminators


class Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator : public Entity
{
    public:
        IntfDiscriminator();
        ~IntfDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator


class Sbfd::LocalDiscriminator::DynamicDiscriminators : public Entity
{
    public:
        DynamicDiscriminators();
        ~DynamicDiscriminators();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DynamicDiscriminator; //type: Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator> > dynamic_discriminator;
        
}; // Sbfd::LocalDiscriminator::DynamicDiscriminators


class Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator : public Entity
{
    public:
        DynamicDiscriminator();
        ~DynamicDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discriminator; //type: uint32

}; // Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator


class Sbfd::LocalDiscriminator::Ipv4Discriminators : public Entity
{
    public:
        Ipv4Discriminators();
        ~Ipv4Discriminators();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Discriminator; //type: Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator> > ipv4_discriminator;
        
}; // Sbfd::LocalDiscriminator::Ipv4Discriminators


class Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator : public Entity
{
    public:
        Ipv4Discriminator();
        ~Ipv4Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator


class Sbfd::LocalDiscriminator::Val32Discriminators : public Entity
{
    public:
        Val32Discriminators();
        ~Val32Discriminators();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Val32Discriminator; //type: Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator> > val32_discriminator;
        
}; // Sbfd::LocalDiscriminator::Val32Discriminators


class Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator : public Entity
{
    public:
        Val32Discriminator();
        ~Val32Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discriminator; //type: uint32

}; // Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator


}
}

#endif /* _CISCO_IOS_XR_IP_SBFD_CFG_ */

