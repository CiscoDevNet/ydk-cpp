#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_cfg {

class Keychains : public ydk::Entity
{
    public:
        Keychains();
        ~Keychains();

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

        class Keychain; //type: Keychains::Keychain

        ydk::YList keychain;
        
}; // Keychains


class Keychains::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

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

        ydk::YLeaf chain_name; //type: string
        class AcceptTolerance; //type: Keychains::Keychain::AcceptTolerance
        class MacsecKeychain; //type: Keychains::Keychain::MacsecKeychain
        class Keys; //type: Keychains::Keychain::Keys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::AcceptTolerance> accept_tolerance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::MacsecKeychain> macsec_keychain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keys> keys;
        
}; // Keychains::Keychain


class Keychains::Keychain::AcceptTolerance : public ydk::Entity
{
    public:
        AcceptTolerance();
        ~AcceptTolerance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf infinite; //type: boolean

}; // Keychains::Keychain::AcceptTolerance


class Keychains::Keychain::MacsecKeychain : public ydk::Entity
{
    public:
        MacsecKeychain();
        ~MacsecKeychain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecKeys; //type: Keychains::Keychain::MacsecKeychain::MacsecKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::MacsecKeychain::MacsecKeys> macsec_keys;
        
}; // Keychains::Keychain::MacsecKeychain


class Keychains::Keychain::MacsecKeychain::MacsecKeys : public ydk::Entity
{
    public:
        MacsecKeys();
        ~MacsecKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecKey; //type: Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey

        ydk::YList macsec_key;
        
}; // Keychains::Keychain::MacsecKeychain::MacsecKeys


class Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey : public ydk::Entity
{
    public:
        MacsecKey();
        ~MacsecKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: string
        class MacsecLifetime; //type: Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecLifetime
        class MacsecKeyString; //type: Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecKeyString

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecLifetime> macsec_lifetime; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecKeyString> macsec_key_string; // presence node
        
}; // Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey


class Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecLifetime : public ydk::Entity
{
    public:
        MacsecLifetime();
        ~MacsecLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hour; //type: uint32
        ydk::YLeaf start_minutes; //type: uint32
        ydk::YLeaf start_seconds; //type: uint32
        ydk::YLeaf start_date; //type: uint32
        ydk::YLeaf start_month; //type: KeyChainMonth
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf infinite_flag; //type: boolean
        ydk::YLeaf end_hour; //type: uint32
        ydk::YLeaf end_minutes; //type: uint32
        ydk::YLeaf end_seconds; //type: uint32
        ydk::YLeaf end_date; //type: uint32
        ydk::YLeaf end_month; //type: KeyChainMonth
        ydk::YLeaf end_year; //type: uint32

}; // Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecLifetime


class Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecKeyString : public ydk::Entity
{
    public:
        MacsecKeyString();
        ~MacsecKeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string; //type: string
        ydk::YLeaf cryptographic_algorithm; //type: MacsecCryptoAlg
        ydk::YLeaf encryption_type; //type: MacsecEncryption

}; // Keychains::Keychain::MacsecKeychain::MacsecKeys::MacsecKey::MacsecKeyString


class Keychains::Keychain::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Keychains::Keychain::Keys::Key

        ydk::YList key;
        
}; // Keychains::Keychain::Keys


class Keychains::Keychain::Keys::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: string
        ydk::YLeaf key_string; //type: string
        ydk::YLeaf cryptographic_algorithm; //type: CryptoAlg
        class AcceptLifetime; //type: Keychains::Keychain::Keys::Key::AcceptLifetime
        class SendLifetime; //type: Keychains::Keychain::Keys::Key::SendLifetime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keys::Key::AcceptLifetime> accept_lifetime; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keys::Key::SendLifetime> send_lifetime; // presence node
        
}; // Keychains::Keychain::Keys::Key


class Keychains::Keychain::Keys::Key::AcceptLifetime : public ydk::Entity
{
    public:
        AcceptLifetime();
        ~AcceptLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hour; //type: uint32
        ydk::YLeaf start_minutes; //type: uint32
        ydk::YLeaf start_seconds; //type: uint32
        ydk::YLeaf start_date; //type: uint32
        ydk::YLeaf start_month; //type: KeyChainMonth
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf infinite_flag; //type: boolean
        ydk::YLeaf end_hour; //type: uint32
        ydk::YLeaf end_minutes; //type: uint32
        ydk::YLeaf end_seconds; //type: uint32
        ydk::YLeaf end_date; //type: uint32
        ydk::YLeaf end_month; //type: KeyChainMonth
        ydk::YLeaf end_year; //type: uint32

}; // Keychains::Keychain::Keys::Key::AcceptLifetime


class Keychains::Keychain::Keys::Key::SendLifetime : public ydk::Entity
{
    public:
        SendLifetime();
        ~SendLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hour; //type: uint32
        ydk::YLeaf start_minutes; //type: uint32
        ydk::YLeaf start_seconds; //type: uint32
        ydk::YLeaf start_date; //type: uint32
        ydk::YLeaf start_month; //type: KeyChainMonth
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf infinite_flag; //type: boolean
        ydk::YLeaf end_hour; //type: uint32
        ydk::YLeaf end_minutes; //type: uint32
        ydk::YLeaf end_seconds; //type: uint32
        ydk::YLeaf end_date; //type: uint32
        ydk::YLeaf end_month; //type: KeyChainMonth
        ydk::YLeaf end_year; //type: uint32

}; // Keychains::Keychain::Keys::Key::SendLifetime

class MacsecEncryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type7;
        static const ydk::Enum::YLeaf type6;

        static int get_enum_value(const std::string & name) {
            if (name == "type7") return 0;
            if (name == "type6") return 2;
            return -1;
        }
};

class CryptoAlg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alg_aes_128_cmac_96;
        static const ydk::Enum::YLeaf alg_hmac_sha1_12;
        static const ydk::Enum::YLeaf alg_md5_16;
        static const ydk::Enum::YLeaf alg_sha1_20;
        static const ydk::Enum::YLeaf alg_hmac_md5_16;
        static const ydk::Enum::YLeaf alg_hmac_sha1_20;
        static const ydk::Enum::YLeaf alg_hmac_sha1_96;
        static const ydk::Enum::YLeaf alg_hmac_sha_256;

        static int get_enum_value(const std::string & name) {
            if (name == "alg-aes-128-cmac-96") return 1;
            if (name == "alg-hmac-sha1-12") return 2;
            if (name == "alg-md5-16") return 3;
            if (name == "alg-sha1-20") return 4;
            if (name == "alg-hmac-md5-16") return 5;
            if (name == "alg-hmac-sha1-20") return 6;
            if (name == "alg-hmac-sha1-96") return 9;
            if (name == "alg-hmac-sha-256") return 10;
            return -1;
        }
};

class KeyChainMonth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf jan;
        static const ydk::Enum::YLeaf feb;
        static const ydk::Enum::YLeaf mar;
        static const ydk::Enum::YLeaf apr;
        static const ydk::Enum::YLeaf may;
        static const ydk::Enum::YLeaf jun;
        static const ydk::Enum::YLeaf jul;
        static const ydk::Enum::YLeaf aug;
        static const ydk::Enum::YLeaf sep;
        static const ydk::Enum::YLeaf oct;
        static const ydk::Enum::YLeaf nov;
        static const ydk::Enum::YLeaf dec;

        static int get_enum_value(const std::string & name) {
            if (name == "jan") return 0;
            if (name == "feb") return 1;
            if (name == "mar") return 2;
            if (name == "apr") return 3;
            if (name == "may") return 4;
            if (name == "jun") return 5;
            if (name == "jul") return 6;
            if (name == "aug") return 7;
            if (name == "sep") return 8;
            if (name == "oct") return 9;
            if (name == "nov") return 10;
            if (name == "dec") return 11;
            return -1;
        }
};

class MacsecCryptoAlg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;

        static int get_enum_value(const std::string & name) {
            if (name == "aes-128-cmac") return 7;
            if (name == "aes-256-cmac") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_ */

