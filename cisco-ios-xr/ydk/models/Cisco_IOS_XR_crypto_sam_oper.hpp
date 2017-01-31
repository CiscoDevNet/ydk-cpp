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


            YLeaf is_running; //type: boolean
            YLeaf prompt_interval; //type: uint32
            YLeaf is_default_response; //type: boolean



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


                YLeaf number_of_lines; //type: int32
                YLeaf total_entries; //type: uint32
                YLeaf entries_shown; //type: uint32

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


                YLeaf device_name; //type: string

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


                        YLeaf location; //type: string
                        YLeaf certificate_index; //type: uint16

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


                            YLeaf is_trusted; //type: boolean
                            YLeaf is_revoked; //type: boolean
                            YLeaf is_expired; //type: boolean
                            YLeaf is_validated; //type: boolean



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


                            YLeaf index_; //type: int32

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


                                YLeaf location; //type: string
                                YLeaf certificate_index; //type: uint16

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


                                    YLeaf is_trusted; //type: boolean
                                    YLeaf is_revoked; //type: boolean
                                    YLeaf is_expired; //type: boolean
                                    YLeaf is_validated; //type: boolean



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


                YLeaf package_name; //type: string
                YLeaf location; //type: string
                YLeaf certificate_index; //type: uint16

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


                    YLeaf is_trusted; //type: boolean
                    YLeaf is_revoked; //type: boolean
                    YLeaf is_expired; //type: boolean
                    YLeaf is_validated; //type: boolean



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


                YLeaf crl_index; //type: int32

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


                    YLeaf crl_index; //type: uint16
                    YLeaf updates; //type: string

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


                        YLeaf common_name; //type: string
                        YLeaf organization; //type: string
                        YLeaf country; //type: string



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


            YLeaf crl_index; //type: uint16
            YLeaf updates; //type: string

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


                YLeaf common_name; //type: string
                YLeaf organization; //type: string
                YLeaf country; //type: string



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

