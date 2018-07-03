#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_mka_cfg {

class Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

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

        class Policy; //type: Macsec::Policy

        ydk::YList policy;
        
}; // Macsec


class Macsec::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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
        ydk::YLeaf delay_protection; //type: boolean
        ydk::YLeaf security_policy; //type: MacsecMkaSecurityPolicy
        ydk::YLeaf key_server_priority; //type: uint32
        ydk::YLeaf conf_offset; //type: MacsecMkaConfOffset
        ydk::YLeaf sak_rekey_interval; //type: uint32
        ydk::YLeaf policy_exception; //type: MacsecMkaPolicyException
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf cipher_suite; //type: MacsecMkaCipherSuite
        ydk::YLeaf include_icv_indicator; //type: boolean
        ydk::YLeaf vlan_tags_in_clear; //type: uint32

}; // Macsec::Policy

class MacsecMkaConfOffset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf conf_off_set_0;
        static const ydk::Enum::YLeaf conf_off_set_30;
        static const ydk::Enum::YLeaf conf_off_set_50;

};

class MacsecMkaSecurityPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf should_secure;
        static const ydk::Enum::YLeaf must_secure;

};

class MacsecMkaPolicyException : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp_in_clear;

};

class MacsecMkaCipherSuite : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gcm_aes_128;
        static const ydk::Enum::YLeaf gcm_aes_256;
        static const ydk::Enum::YLeaf gcm_aes_xpn_128;
        static const ydk::Enum::YLeaf gcm_aes_xpn_256;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_ */

