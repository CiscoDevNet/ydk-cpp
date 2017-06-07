#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_mka_cfg {

class Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

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

        class Policy; //type: Macsec::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_cfg::Macsec::Policy> > policy;
        
}; // Macsec


class Macsec::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay_protection; //type: boolean
        YLeaf security_policy; //type: MacsecMkaSecurityPolicyEnum
        YLeaf key_server_priority; //type: uint32
        YLeaf conf_offset; //type: MacsecMkaConfOffsetEnum
        YLeaf sak_rekey_interval; //type: uint32
        YLeaf policy_exception; //type: MacsecMkaPolicyExceptionEnum
        YLeaf window_size; //type: uint32
        YLeaf cipher_suite; //type: MacsecMkaCipherSuiteEnum
        YLeaf include_icv_indicator; //type: boolean
        YLeaf vlan_tags_in_clear; //type: uint32

}; // Macsec::Policy

class MacsecMkaConfOffsetEnum : public Enum
{
    public:
        static const Enum::YLeaf conf_off_set_0;
        static const Enum::YLeaf conf_off_set_30;
        static const Enum::YLeaf conf_off_set_50;

};

class MacsecMkaSecurityPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf should_secure;
        static const Enum::YLeaf must_secure;

};

class MacsecMkaPolicyExceptionEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp_in_clear;

};

class MacsecMkaCipherSuiteEnum : public Enum
{
    public:
        static const Enum::YLeaf gcm_aes_128;
        static const Enum::YLeaf gcm_aes_256;
        static const Enum::YLeaf gcm_aes_xpn_128;
        static const Enum::YLeaf gcm_aes_xpn_256;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_CFG_ */

