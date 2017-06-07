#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_oper {

class Keychain : public Entity
{
    public:
        Keychain();
        ~Keychain();

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

        class Keies; //type: Keychain::Keies

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies> keies;
        
}; // Keychain


class Keychain::Keies : public Entity
{
    public:
        Keies();
        ~Keies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Key; //type: Keychain::Keies::Key

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key> > key;
        
}; // Keychain::Keies


class Keychain::Keies::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_name; //type: string
        YLeaf accept_tolerance; //type: int32
        class Key_; //type: Keychain::Keies::Key::Key_

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_> key;
        
}; // Keychain::Keies::Key


class Keychain::Keies::Key::Key_ : public Entity
{
    public:
        Key_();
        ~Key_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyId; //type: Keychain::Keies::Key::Key_::KeyId

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId> > key_id;
        
}; // Keychain::Keies::Key::Key_


class Keychain::Keies::Key::Key_::KeyId : public Entity
{
    public:
        KeyId();
        ~KeyId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_string; //type: string
        YLeaf key_id; //type: uint64
        YLeaf cryptographic_algorithm; //type: CrytoAlgoEnum
        class SendLifetime; //type: Keychain::Keies::Key::Key_::KeyId::SendLifetime
        class AcceptLifetime; //type: Keychain::Keies::Key::Key_::KeyId::AcceptLifetime

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::AcceptLifetime> accept_lifetime;
        std::shared_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::SendLifetime> send_lifetime;
        
}; // Keychain::Keies::Key::Key_::KeyId


class Keychain::Keies::Key::Key_::KeyId::SendLifetime : public Entity
{
    public:
        SendLifetime();
        ~SendLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: string
        YLeaf end; //type: string
        YLeaf duration; //type: int32
        YLeaf is_always_valid; //type: boolean
        YLeaf is_valid_now; //type: boolean

}; // Keychain::Keies::Key::Key_::KeyId::SendLifetime


class Keychain::Keies::Key::Key_::KeyId::AcceptLifetime : public Entity
{
    public:
        AcceptLifetime();
        ~AcceptLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: string
        YLeaf end; //type: string
        YLeaf duration; //type: int32
        YLeaf is_always_valid; //type: boolean
        YLeaf is_valid_now; //type: boolean

}; // Keychain::Keies::Key::Key_::KeyId::AcceptLifetime

class CrytoAlgoEnum : public Enum
{
    public:
        static const Enum::YLeaf not_configured;
        static const Enum::YLeaf hmac_sha1_12;
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf hmac_md5;
        static const Enum::YLeaf hmac_sha1_20;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_ */

