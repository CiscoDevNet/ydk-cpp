#ifndef _IETF_KEY_CHAIN_
#define _IETF_KEY_CHAIN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_key_chain {

class KeyChains : public Entity
{
    public:
        KeyChains();
        ~KeyChains();

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

        YLeaf name; //type: string
        class AcceptTolerance; //type: KeyChains::AcceptTolerance
        class Key; //type: KeyChains::Key

        std::shared_ptr<ietf_key_chain::KeyChains::AcceptTolerance> accept_tolerance;
        std::vector<std::shared_ptr<ietf_key_chain::KeyChains::Key> > key;
        
}; // KeyChains


class KeyChains::AcceptTolerance : public Entity
{
    public:
        AcceptTolerance();
        ~AcceptTolerance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duration; //type: uint32

}; // KeyChains::AcceptTolerance


class KeyChains::Key : public Entity
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

        YLeaf key_id; //type: uint64
        class KeyString; //type: KeyChains::Key::KeyString
        class Lifetime; //type: KeyChains::Key::Lifetime
        class CryptoAlgorithm; //type: KeyChains::Key::CryptoAlgorithm

        std::shared_ptr<ietf_key_chain::KeyChains::Key::CryptoAlgorithm> crypto_algorithm;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::KeyString> key_string;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime> lifetime;
        
}; // KeyChains::Key


class KeyChains::Key::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keystring; //type: string
        YLeaf hexadecimal_string; //type: string

}; // KeyChains::Key::KeyString


class KeyChains::Key::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SendAcceptLifetime; //type: KeyChains::Key::Lifetime::SendAcceptLifetime
        class SendLifetime; //type: KeyChains::Key::Lifetime::SendLifetime
        class AcceptLifetime; //type: KeyChains::Key::Lifetime::AcceptLifetime

        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime::AcceptLifetime> accept_lifetime;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime::SendAcceptLifetime> send_accept_lifetime;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime::SendLifetime> send_lifetime;
        
}; // KeyChains::Key::Lifetime


class KeyChains::Key::Lifetime::SendAcceptLifetime : public Entity
{
    public:
        SendAcceptLifetime();
        ~SendAcceptLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf start_date_time; //type: string
        YLeaf no_end_time; //type: empty
        YLeaf duration; //type: uint32
        YLeaf end_date_time; //type: string

}; // KeyChains::Key::Lifetime::SendAcceptLifetime


class KeyChains::Key::Lifetime::SendLifetime : public Entity
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

        YLeaf always; //type: empty
        YLeaf start_date_time; //type: string
        YLeaf no_end_time; //type: empty
        YLeaf duration; //type: uint32
        YLeaf end_date_time; //type: string

}; // KeyChains::Key::Lifetime::SendLifetime


class KeyChains::Key::Lifetime::AcceptLifetime : public Entity
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

        YLeaf always; //type: empty
        YLeaf start_date_time; //type: string
        YLeaf no_end_time; //type: empty
        YLeaf duration; //type: uint32
        YLeaf end_date_time; //type: string

}; // KeyChains::Key::Lifetime::AcceptLifetime


class KeyChains::Key::CryptoAlgorithm : public Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hmac_sha1_12; //type: empty
        YLeaf hmac_sha1_20; //type: empty
        YLeaf md5; //type: empty
        YLeaf sha_1; //type: empty
        YLeaf hmac_sha_1; //type: empty
        YLeaf hmac_sha_256; //type: empty
        YLeaf hmac_sha_384; //type: empty
        YLeaf hmac_sha_512; //type: empty

}; // KeyChains::Key::CryptoAlgorithm


}
}

#endif /* _IETF_KEY_CHAIN_ */

