#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_MACSEC_CFG_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_MACSEC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_macsec_cfg {

class MacSecKeychains : public ydk::Entity
{
    public:
        MacSecKeychains();
        ~MacSecKeychains();

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

        class MacSecKeychain; //type: MacSecKeychains::MacSecKeychain

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain> > mac_sec_keychain;
        
}; // MacSecKeychains


class MacSecKeychains::MacSecKeychain : public ydk::Entity
{
    public:
        MacSecKeychain();
        ~MacSecKeychain();

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
        class Keies; //type: MacSecKeychains::MacSecKeychain::Keies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies> keies;
        
}; // MacSecKeychains::MacSecKeychain


class MacSecKeychains::MacSecKeychain::Keies : public ydk::Entity
{
    public:
        Keies();
        ~Keies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: MacSecKeychains::MacSecKeychain::Keies::Key

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies::Key> > key;
        
}; // MacSecKeychains::MacSecKeychain::Keies


class MacSecKeychains::MacSecKeychain::Keies::Key : public ydk::Entity
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
        class Lifetime; //type: MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime
        class KeyString; //type: MacSecKeychains::MacSecKeychain::Keies::Key::KeyString

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies::Key::KeyString> key_string; // presence node
        
}; // MacSecKeychains::MacSecKeychain::Keies::Key


class MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

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
        ydk::YLeaf start_month; //type: MacSecKeyChainMonth
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf infinite_flag; //type: boolean
        ydk::YLeaf end_hour; //type: uint32
        ydk::YLeaf end_minutes; //type: uint32
        ydk::YLeaf end_seconds; //type: uint32
        ydk::YLeaf end_date; //type: uint32
        ydk::YLeaf end_month; //type: MacSecKeyChainMonth
        ydk::YLeaf end_year; //type: uint32

}; // MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime


class MacSecKeychains::MacSecKeychain::Keies::Key::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

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
        ydk::YLeaf cryptographic_algorithm; //type: MacSecCryptoAlg
        ydk::YLeaf encryption_type; //type: MacSecEncryption

}; // MacSecKeychains::MacSecKeychain::Keies::Key::KeyString

class MacSecKeyChainMonth : public ydk::Enum
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

};

class MacSecCryptoAlg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;

};

class MacSecEncryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type7;
        static const ydk::Enum::YLeaf type6;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_MACSEC_CFG_ */

