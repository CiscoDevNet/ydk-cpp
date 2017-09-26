#ifndef _CISCO_IOS_XR_IP_SBFD_CFG_
#define _CISCO_IOS_XR_IP_SBFD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_sbfd_cfg {

class Sbfd : public ydk::Entity
{
    public:
        Sbfd();
        ~Sbfd();

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

        class RemoteTarget; //type: Sbfd::RemoteTarget
        class LocalDiscriminator; //type: Sbfd::LocalDiscriminator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator> local_discriminator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget> remote_target;
        
}; // Sbfd


class Sbfd::LocalDiscriminator : public ydk::Entity
{
    public:
        LocalDiscriminator();
        ~LocalDiscriminator();

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

        class IntfDiscriminators; //type: Sbfd::LocalDiscriminator::IntfDiscriminators
        class DynamicDiscriminators; //type: Sbfd::LocalDiscriminator::DynamicDiscriminators
        class Ipv4Discriminators; //type: Sbfd::LocalDiscriminator::Ipv4Discriminators
        class Val32Discriminators; //type: Sbfd::LocalDiscriminator::Val32Discriminators

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::DynamicDiscriminators> dynamic_discriminators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::IntfDiscriminators> intf_discriminators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Ipv4Discriminators> ipv4_discriminators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Val32Discriminators> val32_discriminators;
        
}; // Sbfd::LocalDiscriminator


class Sbfd::LocalDiscriminator::DynamicDiscriminators : public ydk::Entity
{
    public:
        DynamicDiscriminators();
        ~DynamicDiscriminators();

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

        class DynamicDiscriminator; //type: Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator> > dynamic_discriminator;
        
}; // Sbfd::LocalDiscriminator::DynamicDiscriminators


class Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator : public ydk::Entity
{
    public:
        DynamicDiscriminator();
        ~DynamicDiscriminator();

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

        ydk::YLeaf discriminator; //type: uint32

}; // Sbfd::LocalDiscriminator::DynamicDiscriminators::DynamicDiscriminator


class Sbfd::LocalDiscriminator::IntfDiscriminators : public ydk::Entity
{
    public:
        IntfDiscriminators();
        ~IntfDiscriminators();

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

        class IntfDiscriminator; //type: Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator> > intf_discriminator;
        
}; // Sbfd::LocalDiscriminator::IntfDiscriminators


class Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator : public ydk::Entity
{
    public:
        IntfDiscriminator();
        ~IntfDiscriminator();

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

        ydk::YLeaf interface_name; //type: string

}; // Sbfd::LocalDiscriminator::IntfDiscriminators::IntfDiscriminator


class Sbfd::LocalDiscriminator::Ipv4Discriminators : public ydk::Entity
{
    public:
        Ipv4Discriminators();
        ~Ipv4Discriminators();

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

        class Ipv4Discriminator; //type: Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator> > ipv4_discriminator;
        
}; // Sbfd::LocalDiscriminator::Ipv4Discriminators


class Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator : public ydk::Entity
{
    public:
        Ipv4Discriminator();
        ~Ipv4Discriminator();

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

        ydk::YLeaf address; //type: string

}; // Sbfd::LocalDiscriminator::Ipv4Discriminators::Ipv4Discriminator


class Sbfd::LocalDiscriminator::Val32Discriminators : public ydk::Entity
{
    public:
        Val32Discriminators();
        ~Val32Discriminators();

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

        class Val32Discriminator; //type: Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator> > val32_discriminator;
        
}; // Sbfd::LocalDiscriminator::Val32Discriminators


class Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator : public ydk::Entity
{
    public:
        Val32Discriminator();
        ~Val32Discriminator();

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

        ydk::YLeaf discriminator; //type: uint32

}; // Sbfd::LocalDiscriminator::Val32Discriminators::Val32Discriminator


class Sbfd::RemoteTarget : public ydk::Entity
{
    public:
        RemoteTarget();
        ~RemoteTarget();

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

        class Ipv4Addresses; //type: Sbfd::RemoteTarget::Ipv4Addresses
        class Ipv6Addresses; //type: Sbfd::RemoteTarget::Ipv6Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv4Addresses> ipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv6Addresses> ipv6_addresses;
        
}; // Sbfd::RemoteTarget


class Sbfd::RemoteTarget::Ipv4Addresses : public ydk::Entity
{
    public:
        Ipv4Addresses();
        ~Ipv4Addresses();

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

        class Ipv4Address; //type: Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address> > ipv4_address;
        
}; // Sbfd::RemoteTarget::Ipv4Addresses


class Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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

        ydk::YLeaf address; //type: string
        class RemoteDiscriminator; //type: Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator> > remote_discriminator;
        
}; // Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address


class Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator : public ydk::Entity
{
    public:
        RemoteDiscriminator();
        ~RemoteDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_discriminator; //type: uint32

}; // Sbfd::RemoteTarget::Ipv4Addresses::Ipv4Address::RemoteDiscriminator


class Sbfd::RemoteTarget::Ipv6Addresses : public ydk::Entity
{
    public:
        Ipv6Addresses();
        ~Ipv6Addresses();

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

        class Ipv6Address; //type: Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address> > ipv6_address;
        
}; // Sbfd::RemoteTarget::Ipv6Addresses


class Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

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

        ydk::YLeaf address; //type: string
        class RemoteDiscriminator; //type: Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_cfg::Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator> > remote_discriminator;
        
}; // Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address


class Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator : public ydk::Entity
{
    public:
        RemoteDiscriminator();
        ~RemoteDiscriminator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_discriminator; //type: uint32

}; // Sbfd::RemoteTarget::Ipv6Addresses::Ipv6Address::RemoteDiscriminator


}
}

#endif /* _CISCO_IOS_XR_IP_SBFD_CFG_ */

