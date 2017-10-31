#ifndef _CISCO_IOS_XR_IP_SBFD_OPER_
#define _CISCO_IOS_XR_IP_SBFD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_sbfd_oper {

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

        class TargetIdentifier; //type: Sbfd::TargetIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier> target_identifier;
        
}; // Sbfd


class Sbfd::TargetIdentifier : public ydk::Entity
{
    public:
        TargetIdentifier();
        ~TargetIdentifier();

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

        class RemoteVrfs; //type: Sbfd::TargetIdentifier::RemoteVrfs
        class LocalVrfs; //type: Sbfd::TargetIdentifier::LocalVrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs> remote_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs> local_vrfs;
        
}; // Sbfd::TargetIdentifier


class Sbfd::TargetIdentifier::RemoteVrfs : public ydk::Entity
{
    public:
        RemoteVrfs();
        ~RemoteVrfs();

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

        class RemoteVrf; //type: Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf> > remote_vrf;
        
}; // Sbfd::TargetIdentifier::RemoteVrfs


class Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf : public ydk::Entity
{
    public:
        RemoteVrf();
        ~RemoteVrf();

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

        ydk::YLeaf vrf_name; //type: string
        class RemoteDiscriminator; //type: Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator> > remote_discriminator;
        
}; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf


class Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf remote_discriminator; //type: int32
        ydk::YLeaf address; //type: string
        ydk::YLeaf tid_type; //type: SbfdAddressFamily
        ydk::YLeaf discr; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf discr_src; //type: string
        class IpAddress; //type: Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress> ip_address;
        
}; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator


class Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress


class Sbfd::TargetIdentifier::LocalVrfs : public ydk::Entity
{
    public:
        LocalVrfs();
        ~LocalVrfs();

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

        class LocalVrf; //type: Sbfd::TargetIdentifier::LocalVrfs::LocalVrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs::LocalVrf> > local_vrf;
        
}; // Sbfd::TargetIdentifier::LocalVrfs


class Sbfd::TargetIdentifier::LocalVrfs::LocalVrf : public ydk::Entity
{
    public:
        LocalVrf();
        ~LocalVrf();

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

        ydk::YLeaf vrf_name; //type: string
        class LocalDiscriminator; //type: Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator> > local_discriminator;
        
}; // Sbfd::TargetIdentifier::LocalVrfs::LocalVrf


class Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator : public ydk::Entity
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

        ydk::YLeaf local_discriminator; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf discr; //type: uint32
        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf discr_src; //type: string

}; // Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator

class BfdAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_af_id_none;
        static const ydk::Enum::YLeaf bfd_af_id_ipv4;
        static const ydk::Enum::YLeaf bfd_af_id_ipv6;

};

class SbfdAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_SBFD_OPER_ */

