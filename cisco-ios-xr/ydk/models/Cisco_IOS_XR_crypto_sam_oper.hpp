#ifndef _CISCO_IOS_XR_CRYPTO_SAM_OPER_
#define _CISCO_IOS_XR_CRYPTO_SAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_oper {

class Sam : public Entity
{
    public:
        Sam();
        ~Sam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class SystemInformation : public Entity
    {
        public:
            SystemInformation();
            ~SystemInformation();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value is_running; //type: boolean
            Value prompt_interval; //type: uint32
            Value is_default_response; //type: boolean




    }; // Sam::SystemInformation


    class LogContents : public Entity
    {
        public:
            LogContents();
            ~LogContents();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LogContent : public Entity
        {
            public:
                LogContent();
                ~LogContent();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value number_of_lines; //type: int32
                Value total_entries; //type: uint32
                Value entries_shown; //type: uint32


            class Logs : public Entity
            {
                public:
                    Logs();
                    ~Logs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value time; //type: string
                    Value code; //type: LogCodeEnum
                    Value target_device; //type: string
                    Value index_; //type: uint32
                    Value error; //type: LogErrorEnum
                    Value issuer; //type: CertificateIssuerEnum
                    Value serial_no; //type: string
                    Value sam_table_index; //type: uint32
                    Value update_time; //type: string
                    Value source_device; //type: string
                    Value table; //type: LogTablesEnum


                    class LogCodeEnum;
                    class LogErrorEnum;
                    class CertificateIssuerEnum;
                    class LogTablesEnum;


            }; // Sam::LogContents::LogContent::Logs


                std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents::LogContent::Logs> > logs;


        }; // Sam::LogContents::LogContent


            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents::LogContent> > log_content;


    }; // Sam::LogContents


    class Devices : public Entity
    {
        public:
            Devices();
            ~Devices();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Device : public Entity
        {
            public:
                Device();
                ~Device();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value device_name; //type: string


            class Certificate : public Entity
            {
                public:
                    Certificate();
                    ~Certificate();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Brief : public Entity
                {
                    public:
                        Brief();
                        ~Brief();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value location; //type: string
                        Value certificate_index; //type: uint16


                    class CertificateFlags : public Entity
                    {
                        public:
                            CertificateFlags();
                            ~CertificateFlags();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_trusted; //type: boolean
                            Value is_revoked; //type: boolean
                            Value is_expired; //type: boolean
                            Value is_validated; //type: boolean




                    }; // Sam::Devices::Device::Certificate::Brief::CertificateFlags


                        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::Brief::CertificateFlags> certificate_flags;


                }; // Sam::Devices::Device::Certificate::Brief


                class CertificateIndexes : public Entity
                {
                    public:
                        CertificateIndexes();
                        ~CertificateIndexes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CertificateIndex : public Entity
                    {
                        public:
                            CertificateIndex();
                            ~CertificateIndex();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_; //type: int32


                        class Detail : public Entity
                        {
                            public:
                                Detail();
                                ~Detail();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value location; //type: string
                                Value certificate_index; //type: uint16


                            class CertificateFlags : public Entity
                            {
                                public:
                                    CertificateFlags();
                                    ~CertificateFlags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_trusted; //type: boolean
                                    Value is_revoked; //type: boolean
                                    Value is_expired; //type: boolean
                                    Value is_validated; //type: boolean




                            }; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags


                                std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags> certificate_flags;


                        }; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail


                            std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail> detail;


                    }; // Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex


                        std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex> > certificate_index;


                }; // Sam::Devices::Device::Certificate::CertificateIndexes


                    std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::Brief> brief;
                    std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate::CertificateIndexes> certificate_indexes;


            }; // Sam::Devices::Device::Certificate


                std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device::Certificate> certificate;


        }; // Sam::Devices::Device


            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices::Device> > device;


    }; // Sam::Devices


    class Packages : public Entity
    {
        public:
            Packages();
            ~Packages();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Package : public Entity
        {
            public:
                Package();
                ~Package();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value package_name; //type: string
                Value location; //type: string
                Value certificate_index; //type: uint16


            class CertificateFlags : public Entity
            {
                public:
                    CertificateFlags();
                    ~CertificateFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_trusted; //type: boolean
                    Value is_revoked; //type: boolean
                    Value is_expired; //type: boolean
                    Value is_validated; //type: boolean




            }; // Sam::Packages::Package::CertificateFlags


                std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Packages::Package::CertificateFlags> certificate_flags;


        }; // Sam::Packages::Package


            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Packages::Package> > package;


    }; // Sam::Packages


    class CertificateRevocations : public Entity
    {
        public:
            CertificateRevocations();
            ~CertificateRevocations();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class CertificateRevocation : public Entity
        {
            public:
                CertificateRevocation();
                ~CertificateRevocation();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value crl_index; //type: int32


            class CertificateRevocationListDetail : public Entity
            {
                public:
                    CertificateRevocationListDetail();
                    ~CertificateRevocationListDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value crl_index; //type: uint16
                    Value updates; //type: string


                class Issuer : public Entity
                {
                    public:
                        Issuer();
                        ~Issuer();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value common_name; //type: string
                        Value organization; //type: string
                        Value country; //type: string




                }; // Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer


                    std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer> issuer;


            }; // Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail


                std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail> certificate_revocation_list_detail;


        }; // Sam::CertificateRevocations::CertificateRevocation


            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations::CertificateRevocation> > certificate_revocation;


    }; // Sam::CertificateRevocations


    class CertificateRevocationListSummary : public Entity
    {
        public:
            CertificateRevocationListSummary();
            ~CertificateRevocationListSummary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value crl_index; //type: uint16
            Value updates; //type: string


        class Issuer : public Entity
        {
            public:
                Issuer();
                ~Issuer();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value common_name; //type: string
                Value organization; //type: string
                Value country; //type: string




        }; // Sam::CertificateRevocationListSummary::Issuer


            std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocationListSummary::Issuer> issuer;


    }; // Sam::CertificateRevocationListSummary


        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocationListSummary> certificate_revocation_list_summary;
        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::CertificateRevocations> certificate_revocations;
        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Devices> devices;
        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::LogContents> log_contents;
        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::Packages> packages;
        std::unique_ptr<Cisco_IOS_XR_crypto_sam_oper::Sam::SystemInformation> system_information;


}; // Sam


class LogErrorEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value log_message_error;
        static const Enum::Value get_issuer_name_failed;

};

class LogCodeEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value sam_server_restared_router_reboot;
        static const Enum::Value sam_server_restared;
        static const Enum::Value added_certificate_in_table;
        static const Enum::Value copied_certificate_in_table;
        static const Enum::Value certificate_flag_changed;
        static const Enum::Value validated_certificate;
        static const Enum::Value certificate_expired_detected;
        static const Enum::Value certificate_revoked_detected;
        static const Enum::Value ca_certificate_expired_detected;
        static const Enum::Value ca_certificate_revoked_detected;
        static const Enum::Value deleted_certificate_from_table;
        static const Enum::Value crl_added_updated_in_table;
        static const Enum::Value checked_memory_digest;
        static const Enum::Value nvram_digest_mismatch_detected;
        static const Enum::Value insecure_backup_file_detected;
        static const Enum::Value error_restore_operation;
        static const Enum::Value backup_file_on_nvram_deleted;
        static const Enum::Value sam_log_file_recovered_from_system_database;
        static const Enum::Value validated_elf;
        static const Enum::Value namespace_deleted_recovered_by_sam;

};

class CertificateIssuerEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value code_signing_server_certificate_authority;

};

class LogTablesEnum : public Enum
{
    public:
        static const Enum::Value unkown;
        static const Enum::Value memory_digest_table;
        static const Enum::Value system_database_digest;
        static const Enum::Value sam_tables;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SAM_OPER_ */

