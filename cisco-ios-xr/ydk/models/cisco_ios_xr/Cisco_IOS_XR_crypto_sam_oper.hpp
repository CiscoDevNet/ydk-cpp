#ifndef _CISCO_IOS_XR_CRYPTO_SAM_OPER_
#define _CISCO_IOS_XR_CRYPTO_SAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_oper {

class Sam : public Entity
{
    public:
        Sam();
        ~Sam();

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

        class SystemInformation; //type: Sam::SystemInformation
        class LogContents; //type: Sam::LogContents
        class Devices; //type: Sam::Devices
        class Packages; //type: Sam::Packages
        class CertificateRevocations; //type: Sam::CertificateRevocations
        class CertificateRevocationListSummary; //type: Sam::CertificateRevocationListSummary

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocationListSummary> certificate_revocation_list_summary;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations> certificate_revocations;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices> devices;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents> log_contents;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Packages> packages;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::SystemInformation> system_information;
        
}; // Sam


class Sam::SystemInformation : public Entity
{
    public:
        SystemInformation();
        ~SystemInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_running; //type: boolean
        YLeaf prompt_interval; //type: uint32
        YLeaf is_default_response; //type: boolean

}; // Sam::SystemInformation


class Sam::LogContents : public Entity
{
    public:
        LogContents();
        ~LogContents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogContent; //type: Sam::LogContents::LogContent

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents::LogContent> > log_content;
        
}; // Sam::LogContents


class Sam::LogContents::LogContent : public Entity
{
    public:
        LogContent();
        ~LogContent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_lines; //type: int32
        YLeaf total_entries; //type: uint32
        YLeaf entries_shown; //type: uint32
        class Logs; //type: Sam::LogContents::LogContent::Logs

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents::LogContent::Logs> > logs;
        
}; // Sam::LogContents::LogContent


class Sam::LogContents::LogContent::Logs : public Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: string
        YLeaf code; //type: LogCodeEnum
        YLeaf target_device; //type: string
        YLeaf index_; //type: uint32
        YLeaf error; //type: LogErrorEnum
        YLeaf issuer; //type: CertificateIssuerEnum
        YLeaf serial_no; //type: string
        YLeaf sam_table_index; //type: uint32
        YLeaf update_time; //type: string
        YLeaf source_device; //type: string
        YLeaf table; //type: LogTablesEnum

}; // Sam::LogContents::LogContent::Logs


class Sam::Devices : public Entity
{
    public:
        Devices();
        ~Devices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Device; //type: Sam::Devices::Device

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device> > device;
        
}; // Sam::Devices


class Sam::Devices::Device : public Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_name; //type: string
        class Certificate; //type: Sam::Devices::Device::Certificate

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate> certificate;
        
}; // Sam::Devices::Device


class Sam::Devices::Device::Certificate : public Entity
{
    public:
        Certificate();
        ~Certificate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Brief; //type: Sam::Devices::Device::Certificate::Brief
        class CertificateIndexes; //type: Sam::Devices::Device::Certificate::CertificateIndexes

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes> certificate_indexes;
        
}; // Sam::Devices::Device::Certificate


class Sam::Devices::Device::Certificate::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf certificate_index; //type: uint16
        class CertificateFlags; //type: Sam::Devices::Device::Certificate::Brief::CertificateFlags

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::Brief::CertificateFlags> certificate_flags;
        
}; // Sam::Devices::Device::Certificate::Brief


class Sam::Devices::Device::Certificate::Brief::CertificateFlags : public Entity
{
    public:
        CertificateFlags();
        ~CertificateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_trusted; //type: boolean
        YLeaf is_revoked; //type: boolean
        YLeaf is_expired; //type: boolean
        YLeaf is_validated; //type: boolean

}; // Sam::Devices::Device::Certificate::Brief::CertificateFlags


class Sam::Devices::Device::Certificate::CertificateIndexes : public Entity
{
    public:
        CertificateIndexes();
        ~CertificateIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CertificateIndex; //type: Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex> > certificate_index;
        
}; // Sam::Devices::Device::Certificate::CertificateIndexes


class Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex : public Entity
{
    public:
        CertificateIndex();
        ~CertificateIndex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: int32
        class Detail; //type: Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail> detail;
        
}; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex


class Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf certificate_index; //type: uint16
        class CertificateFlags; //type: Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags> certificate_flags;
        
}; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail


class Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags : public Entity
{
    public:
        CertificateFlags();
        ~CertificateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_trusted; //type: boolean
        YLeaf is_revoked; //type: boolean
        YLeaf is_expired; //type: boolean
        YLeaf is_validated; //type: boolean

}; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags


class Sam::Packages : public Entity
{
    public:
        Packages();
        ~Packages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Package; //type: Sam::Packages::Package

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Packages::Package> > package;
        
}; // Sam::Packages


class Sam::Packages::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf package_name; //type: string
        YLeaf location; //type: string
        YLeaf certificate_index; //type: uint16
        class CertificateFlags; //type: Sam::Packages::Package::CertificateFlags

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Packages::Package::CertificateFlags> certificate_flags;
        
}; // Sam::Packages::Package


class Sam::Packages::Package::CertificateFlags : public Entity
{
    public:
        CertificateFlags();
        ~CertificateFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_trusted; //type: boolean
        YLeaf is_revoked; //type: boolean
        YLeaf is_expired; //type: boolean
        YLeaf is_validated; //type: boolean

}; // Sam::Packages::Package::CertificateFlags


class Sam::CertificateRevocations : public Entity
{
    public:
        CertificateRevocations();
        ~CertificateRevocations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CertificateRevocation; //type: Sam::CertificateRevocations::CertificateRevocation

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation> > certificate_revocation;
        
}; // Sam::CertificateRevocations


class Sam::CertificateRevocations::CertificateRevocation : public Entity
{
    public:
        CertificateRevocation();
        ~CertificateRevocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crl_index; //type: int32
        class CertificateRevocationListDetail; //type: Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail> certificate_revocation_list_detail;
        
}; // Sam::CertificateRevocations::CertificateRevocation


class Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail : public Entity
{
    public:
        CertificateRevocationListDetail();
        ~CertificateRevocationListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crl_index; //type: uint16
        YLeaf updates; //type: string
        class Issuer; //type: Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer> issuer;
        
}; // Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail


class Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer : public Entity
{
    public:
        Issuer();
        ~Issuer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_name; //type: string
        YLeaf organization; //type: string
        YLeaf country; //type: string

}; // Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer


class Sam::CertificateRevocationListSummary : public Entity
{
    public:
        CertificateRevocationListSummary();
        ~CertificateRevocationListSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf crl_index; //type: uint16
        YLeaf updates; //type: string
        class Issuer; //type: Sam::CertificateRevocationListSummary::Issuer

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocationListSummary::Issuer> issuer;
        
}; // Sam::CertificateRevocationListSummary


class Sam::CertificateRevocationListSummary::Issuer : public Entity
{
    public:
        Issuer();
        ~Issuer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_name; //type: string
        YLeaf organization; //type: string
        YLeaf country; //type: string

}; // Sam::CertificateRevocationListSummary::Issuer

class LogErrorEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf log_message_error;
        static const Enum::YLeaf get_issuer_name_failed;

};

class LogCodeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf sam_server_restared_router_reboot;
        static const Enum::YLeaf sam_server_restared;
        static const Enum::YLeaf added_certificate_in_table;
        static const Enum::YLeaf copied_certificate_in_table;
        static const Enum::YLeaf certificate_flag_changed;
        static const Enum::YLeaf validated_certificate;
        static const Enum::YLeaf certificate_expired_detected;
        static const Enum::YLeaf certificate_revoked_detected;
        static const Enum::YLeaf ca_certificate_expired_detected;
        static const Enum::YLeaf ca_certificate_revoked_detected;
        static const Enum::YLeaf deleted_certificate_from_table;
        static const Enum::YLeaf crl_added_updated_in_table;
        static const Enum::YLeaf checked_memory_digest;
        static const Enum::YLeaf nvram_digest_mismatch_detected;
        static const Enum::YLeaf insecure_backup_file_detected;
        static const Enum::YLeaf error_restore_operation;
        static const Enum::YLeaf backup_file_on_nvram_deleted;
        static const Enum::YLeaf sam_log_file_recovered_from_system_database;
        static const Enum::YLeaf validated_elf;
        static const Enum::YLeaf namespace_deleted_recovered_by_sam;

};

class CertificateIssuerEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf code_signing_server_certificate_authority;

};

class LogTablesEnum : public Enum
{
    public:
        static const Enum::YLeaf unkown;
        static const Enum::YLeaf memory_digest_table;
        static const Enum::YLeaf system_database_digest;
        static const Enum::YLeaf sam_tables;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SAM_OPER_ */

