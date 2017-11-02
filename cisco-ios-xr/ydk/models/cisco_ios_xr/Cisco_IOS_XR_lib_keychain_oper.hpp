#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_oper {

class Keychain : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Keies; //type: Keychain::Keies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies> keies;
        
}; // Keychain


class Keychain::Keies : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Key; //type: Keychain::Keies::Key

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key> > key;
        
}; // Keychain::Keies


class Keychain::Keies::Key : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf key_name; //type: string
        ydk::YLeaf accept_tolerance; //type: string
        class Key_; //type: Keychain::Keies::Key::Key_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_> key;
        
}; // Keychain::Keies::Key


class Keychain::Keies::Key::Key_ : public ydk::Entity
{
    public:
        Key_();
        ~Key_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyId; //type: Keychain::Keies::Key::Key_::KeyId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId> > key_id;
        
}; // Keychain::Keies::Key::Key_


class Keychain::Keies::Key::Key_::KeyId : public ydk::Entity
{
    public:
        KeyId();
        ~KeyId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_string; //type: string
        ydk::YLeaf type; //type: Enc
        ydk::YLeaf key_id; //type: uint64
        ydk::YLeaf cryptographic_algorithm; //type: CrytoAlgo
        class Macsec; //type: Keychain::Keies::Key::Key_::KeyId::Macsec
        class SendLifetime; //type: Keychain::Keies::Key::Key_::KeyId::SendLifetime
        class AcceptLifetime; //type: Keychain::Keies::Key::Key_::KeyId::AcceptLifetime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::Macsec> macsec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::SendLifetime> send_lifetime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::AcceptLifetime> accept_lifetime;
        
}; // Keychain::Keies::Key::Key_::KeyId


class Keychain::Keies::Key::Key_::KeyId::Macsec : public ydk::Entity
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

        ydk::YLeaf is_macsec_key; //type: boolean

}; // Keychain::Keies::Key::Key_::KeyId::Macsec


class Keychain::Keies::Key::Key_::KeyId::SendLifetime : public ydk::Entity
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

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf is_always_valid; //type: boolean
        ydk::YLeaf is_valid_now; //type: boolean

}; // Keychain::Keies::Key::Key_::KeyId::SendLifetime


class Keychain::Keies::Key::Key_::KeyId::AcceptLifetime : public ydk::Entity
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

        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf duration; //type: string
        ydk::YLeaf is_always_valid; //type: boolean
        ydk::YLeaf is_valid_now; //type: boolean

}; // Keychain::Keies::Key::Key_::KeyId::AcceptLifetime

class CrytoAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf hmac_sha1_12;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf hmac_md5;
        static const ydk::Enum::YLeaf hmac_sha1_20;
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;

};

class Enc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf password_type7;
        static const ydk::Enum::YLeaf password_type6;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_ */

