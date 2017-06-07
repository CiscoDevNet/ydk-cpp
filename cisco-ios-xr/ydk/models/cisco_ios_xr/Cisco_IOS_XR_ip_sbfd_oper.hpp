#ifndef _CISCO_IOS_XR_IP_SBFD_OPER_
#define _CISCO_IOS_XR_IP_SBFD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_sbfd_oper {

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

        class TargetIdentifier; //type: Sbfd::TargetIdentifier

        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier> target_identifier;
        
}; // Sbfd


class Sbfd::TargetIdentifier : public Entity
{
    public:
        TargetIdentifier();
        ~TargetIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteVrfs; //type: Sbfd::TargetIdentifier::RemoteVrfs
        class LocalVrfs; //type: Sbfd::TargetIdentifier::LocalVrfs

        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs> local_vrfs;
        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs> remote_vrfs;
        
}; // Sbfd::TargetIdentifier


class Sbfd::TargetIdentifier::RemoteVrfs : public Entity
{
    public:
        RemoteVrfs();
        ~RemoteVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteVrf; //type: Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf> > remote_vrf;
        
}; // Sbfd::TargetIdentifier::RemoteVrfs


class Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf : public Entity
{
    public:
        RemoteVrf();
        ~RemoteVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class RemoteDiscriminator; //type: Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator> > remote_discriminator;
        
}; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf


class Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator : public Entity
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

        YLeaf vrf_name; //type: string
        YLeaf remote_discriminator; //type: int32
        YLeaf address; //type: string
        YLeaf tid_type; //type: SbfdAddressFamilyEnum
        YLeaf discr; //type: uint32
        YLeaf vrf_name_xr; //type: string
        YLeaf status; //type: string
        YLeaf discr_src; //type: string
        class IpAddress; //type: Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress

        std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress> ip_address;
        
}; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator


class Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress


class Sbfd::TargetIdentifier::LocalVrfs : public Entity
{
    public:
        LocalVrfs();
        ~LocalVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LocalVrf; //type: Sbfd::TargetIdentifier::LocalVrfs::LocalVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs::LocalVrf> > local_vrf;
        
}; // Sbfd::TargetIdentifier::LocalVrfs


class Sbfd::TargetIdentifier::LocalVrfs::LocalVrf : public Entity
{
    public:
        LocalVrf();
        ~LocalVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class LocalDiscriminator; //type: Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator> > local_discriminator;
        
}; // Sbfd::TargetIdentifier::LocalVrfs::LocalVrf


class Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator : public Entity
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

        YLeaf local_discriminator; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf discr; //type: uint32
        YLeaf vrf_name_xr; //type: string
        YLeaf flags; //type: string
        YLeaf status; //type: string
        YLeaf discr_src; //type: string

}; // Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator

class SbfdAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class BfdAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_af_id_none;
        static const Enum::YLeaf bfd_af_id_ipv4;
        static const Enum::YLeaf bfd_af_id_ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_SBFD_OPER_ */

