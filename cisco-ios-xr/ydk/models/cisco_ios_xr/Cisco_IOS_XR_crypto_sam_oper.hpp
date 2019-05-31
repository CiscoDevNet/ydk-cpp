#ifndef _CISCO_IOS_XR_CRYPTO_SAM_OPER_
#define _CISCO_IOS_XR_CRYPTO_SAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_sam_oper {

class Sam : public ydk::Entity
{
    public:
        Sam();
        ~Sam();

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

        class SystemInformation; //type: Sam::SystemInformation
        class LogContents; //type: Sam::LogContents
        class Devices; //type: Sam::Devices
        class Packages; //type: Sam::Packages
        class CertificateRevocations; //type: Sam::CertificateRevocations
        class CertificateRevocationListSummary; //type: Sam::CertificateRevocationListSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::SystemInformation> system_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents> log_contents;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices> devices;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Packages> packages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations> certificate_revocations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocationListSummary> certificate_revocation_list_summary;
        
}; // Sam


class Sam::SystemInformation : public ydk::Entity
{
    public:
        SystemInformation();
        ~SystemInformation();

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

        ydk::YLeaf is_running; //type: boolean
        ydk::YLeaf prompt_interval; //type: uint32
        ydk::YLeaf is_default_response; //type: boolean

}; // Sam::SystemInformation


class Sam::LogContents : public ydk::Entity
{
    public:
        LogContents();
        ~LogContents();

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

        class LogContent; //type: Sam::LogContents::LogContent

        ydk::YList log_content;
        
}; // Sam::LogContents


class Sam::LogContents::LogContent : public ydk::Entity
{
    public:
        LogContent();
        ~LogContent();

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

        ydk::YLeaf number_of_lines; //type: uint32
        ydk::YLeaf total_entries; //type: uint32
        ydk::YLeaf entries_shown; //type: uint32
        class Logs; //type: Sam::LogContents::LogContent::Logs

        ydk::YList logs;
        
}; // Sam::LogContents::LogContent


class Sam::LogContents::LogContent::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: string
        ydk::YLeaf code; //type: LogCode
        ydk::YLeaf target_device; //type: string
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf error; //type: LogError
        ydk::YLeaf issuer; //type: CertificateIssuer
        ydk::YLeaf serial_no; //type: string
        ydk::YLeaf sam_table_index; //type: uint32
        ydk::YLeaf update_time; //type: string
        ydk::YLeaf source_device; //type: string
        ydk::YLeaf table; //type: LogTables

}; // Sam::LogContents::LogContent::Logs


class Sam::Devices : public ydk::Entity
{
    public:
        Devices();
        ~Devices();

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

        class Device; //type: Sam::Devices::Device

        ydk::YList device;
        
}; // Sam::Devices


class Sam::Devices::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

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

        ydk::YLeaf device_name; //type: string
        class Certificate; //type: Sam::Devices::Device::Certificate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate> certificate;
        
}; // Sam::Devices::Device


class Sam::Devices::Device::Certificate : public ydk::Entity
{
    public:
        Certificate();
        ~Certificate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Brief; //type: Sam::Devices::Device::Certificate::Brief
        class CertificateIndexes; //type: Sam::Devices::Device::Certificate::CertificateIndexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes> certificate_indexes;
        
}; // Sam::Devices::Device::Certificate


class Sam::Devices::Device::Certificate::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf certificate_index; //type: uint16
        class CertificateFlags; //type: Sam::Devices::Device::Certificate::Brief::CertificateFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::Brief::CertificateFlags> certificate_flags;
        
}; // Sam::Devices::Device::Certificate::Brief


class Sam::Devices::Device::Certificate::Brief::CertificateFlags : public ydk::Entity
{
    public:
        CertificateFlags();
        ~CertificateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_trusted; //type: boolean
        ydk::YLeaf is_revoked; //type: boolean
        ydk::YLeaf is_expired; //type: boolean
        ydk::YLeaf is_validated; //type: boolean

}; // Sam::Devices::Device::Certificate::Brief::CertificateFlags


class Sam::Devices::Device::Certificate::CertificateIndexes : public ydk::Entity
{
    public:
        CertificateIndexes();
        ~CertificateIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CertificateIndex; //type: Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex

        ydk::YList certificate_index;
        
}; // Sam::Devices::Device::Certificate::CertificateIndexes


class Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex : public ydk::Entity
{
    public:
        CertificateIndex();
        ~CertificateIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        class Detail; //type: Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail> detail;
        
}; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex


class Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf certificate_index; //type: uint16
        class CertificateFlags; //type: Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags> certificate_flags;
        
}; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail


class Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags : public ydk::Entity
{
    public:
        CertificateFlags();
        ~CertificateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_trusted; //type: boolean
        ydk::YLeaf is_revoked; //type: boolean
        ydk::YLeaf is_expired; //type: boolean
        ydk::YLeaf is_validated; //type: boolean

}; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags


class Sam::Packages : public ydk::Entity
{
    public:
        Packages();
        ~Packages();

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

        class Package; //type: Sam::Packages::Package

        ydk::YList package;
        
}; // Sam::Packages


class Sam::Packages::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

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

        ydk::YLeaf package_name; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf certificate_index; //type: uint16
        class CertificateFlags; //type: Sam::Packages::Package::CertificateFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::Packages::Package::CertificateFlags> certificate_flags;
        
}; // Sam::Packages::Package


class Sam::Packages::Package::CertificateFlags : public ydk::Entity
{
    public:
        CertificateFlags();
        ~CertificateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_trusted; //type: boolean
        ydk::YLeaf is_revoked; //type: boolean
        ydk::YLeaf is_expired; //type: boolean
        ydk::YLeaf is_validated; //type: boolean

}; // Sam::Packages::Package::CertificateFlags


class Sam::CertificateRevocations : public ydk::Entity
{
    public:
        CertificateRevocations();
        ~CertificateRevocations();

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

        class CertificateRevocation; //type: Sam::CertificateRevocations::CertificateRevocation

        ydk::YList certificate_revocation;
        
}; // Sam::CertificateRevocations


class Sam::CertificateRevocations::CertificateRevocation : public ydk::Entity
{
    public:
        CertificateRevocation();
        ~CertificateRevocation();

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

        ydk::YLeaf crl_index; //type: uint32
        class CertificateRevocationListDetail; //type: Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail> certificate_revocation_list_detail;
        
}; // Sam::CertificateRevocations::CertificateRevocation


class Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail : public ydk::Entity
{
    public:
        CertificateRevocationListDetail();
        ~CertificateRevocationListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crl_index; //type: uint16
        ydk::YLeaf updates; //type: string
        class Issuer; //type: Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer> issuer;
        
}; // Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail


class Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer : public ydk::Entity
{
    public:
        Issuer();
        ~Issuer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_name; //type: string
        ydk::YLeaf organization; //type: string
        ydk::YLeaf country; //type: string

}; // Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer


class Sam::CertificateRevocationListSummary : public ydk::Entity
{
    public:
        CertificateRevocationListSummary();
        ~CertificateRevocationListSummary();

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

        ydk::YLeaf crl_index; //type: uint16
        ydk::YLeaf updates; //type: string
        class Issuer; //type: Sam::CertificateRevocationListSummary::Issuer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocationListSummary::Issuer> issuer;
        
}; // Sam::CertificateRevocationListSummary


class Sam::CertificateRevocationListSummary::Issuer : public ydk::Entity
{
    public:
        Issuer();
        ~Issuer();

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

        ydk::YLeaf common_name; //type: string
        ydk::YLeaf organization; //type: string
        ydk::YLeaf country; //type: string

}; // Sam::CertificateRevocationListSummary::Issuer

class LogTables : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unkown;
        static const ydk::Enum::YLeaf memory_digest_table;
        static const ydk::Enum::YLeaf system_database_digest;
        static const ydk::Enum::YLeaf sam_tables;

};

class CertificateIssuer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf code_signing_server_certificate_authority;

};

class LogError : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf log_message_error;
        static const ydk::Enum::YLeaf get_issuer_name_failed;

};

class LogCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf sam_server_restared_router_reboot;
        static const ydk::Enum::YLeaf sam_server_restared;
        static const ydk::Enum::YLeaf added_certificate_in_table;
        static const ydk::Enum::YLeaf copied_certificate_in_table;
        static const ydk::Enum::YLeaf certificate_flag_changed;
        static const ydk::Enum::YLeaf validated_certificate;
        static const ydk::Enum::YLeaf certificate_expired_detected;
        static const ydk::Enum::YLeaf certificate_revoked_detected;
        static const ydk::Enum::YLeaf ca_certificate_expired_detected;
        static const ydk::Enum::YLeaf ca_certificate_revoked_detected;
        static const ydk::Enum::YLeaf deleted_certificate_from_table;
        static const ydk::Enum::YLeaf crl_added_updated_in_table;
        static const ydk::Enum::YLeaf checked_memory_digest;
        static const ydk::Enum::YLeaf nvram_digest_mismatch_detected;
        static const ydk::Enum::YLeaf insecure_backup_file_detected;
        static const ydk::Enum::YLeaf error_restore_operation;
        static const ydk::Enum::YLeaf backup_file_on_nvram_deleted;
        static const ydk::Enum::YLeaf sam_log_file_recovered_from_system_database;
        static const ydk::Enum::YLeaf validated_elf;
        static const ydk::Enum::YLeaf namespace_deleted_recovered_by_sam;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SAM_OPER_ */

