#ifndef _CISCO_IOS_XE_BOOT_INTEGRITY_OPER_
#define _CISCO_IOS_XE_BOOT_INTEGRITY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_boot_integrity_oper {

class BootIntegrityOperData : public ydk::Entity
{
    public:
        BootIntegrityOperData();
        ~BootIntegrityOperData();

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

        class BootIntegrity; //type: BootIntegrityOperData::BootIntegrity
        class SudiCertificate; //type: BootIntegrityOperData::SudiCertificate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_boot_integrity_oper::BootIntegrityOperData::BootIntegrity> boot_integrity; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_boot_integrity_oper::BootIntegrityOperData::SudiCertificate> sudi_certificate; // presence node
        
}; // BootIntegrityOperData


class BootIntegrityOperData::BootIntegrity : public ydk::Entity
{
    public:
        BootIntegrity();
        ~BootIntegrity();

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

        ydk::YLeaf platform; //type: string
        ydk::YLeaf boot_ver; //type: string
        ydk::YLeaf boot_loader_ver; //type: string
        ydk::YLeaf os_version; //type: string
        ydk::YLeaf boot_hash; //type: string
        ydk::YLeaf boot_loader_hash; //type: string
        ydk::YLeaf os_hash; //type: string
        ydk::YLeaf package_count; //type: uint8
        ydk::YLeaf signature; //type: string
        ydk::YLeaf sig_version; //type: uint32
        class PcrRegister; //type: BootIntegrityOperData::BootIntegrity::PcrRegister
        class PackageSignature; //type: BootIntegrityOperData::BootIntegrity::PackageSignature

        ydk::YList pcr_register;
        ydk::YList package_signature;
        
}; // BootIntegrityOperData::BootIntegrity


class BootIntegrityOperData::BootIntegrity::PcrRegister : public ydk::Entity
{
    public:
        PcrRegister();
        ~PcrRegister();

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

        ydk::YLeaf index_; //type: uint8
        ydk::YLeaf pcr_content; //type: string

}; // BootIntegrityOperData::BootIntegrity::PcrRegister


class BootIntegrityOperData::BootIntegrity::PackageSignature : public ydk::Entity
{
    public:
        PackageSignature();
        ~PackageSignature();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf hash; //type: string

}; // BootIntegrityOperData::BootIntegrity::PackageSignature


class BootIntegrityOperData::SudiCertificate : public ydk::Entity
{
    public:
        SudiCertificate();
        ~SudiCertificate();

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

        ydk::YLeaf crca_pem; //type: string
        ydk::YLeaf cmca_pem; //type: string
        ydk::YLeaf sudi_pem; //type: string
        ydk::YLeaf sudi_signature; //type: string

}; // BootIntegrityOperData::SudiCertificate


}
}

#endif /* _CISCO_IOS_XE_BOOT_INTEGRITY_OPER_ */

