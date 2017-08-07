#ifndef _IETF_KEY_CHAIN_
#define _IETF_KEY_CHAIN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace ietf_key_chain {

class KeyChains : public ydk::Entity
{
    public:
        KeyChains();
        ~KeyChains();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        ydk::YLeaf name; //type: string
        class AcceptTolerance; //type: KeyChains::AcceptTolerance
        class Key; //type: KeyChains::Key

        std::shared_ptr<ietf_key_chain::KeyChains::AcceptTolerance> accept_tolerance;
        std::vector<std::shared_ptr<ietf_key_chain::KeyChains::Key> > key;
        
}; // KeyChains


class KeyChains::AcceptTolerance : public ydk::Entity
{
    public:
        AcceptTolerance();
        ~AcceptTolerance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duration; //type: uint32

}; // KeyChains::AcceptTolerance


class KeyChains::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint64
        class KeyString; //type: KeyChains::Key::KeyString
        class Lifetime; //type: KeyChains::Key::Lifetime
        class CryptoAlgorithm; //type: KeyChains::Key::CryptoAlgorithm

        std::shared_ptr<ietf_key_chain::KeyChains::Key::CryptoAlgorithm> crypto_algorithm;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::KeyString> key_string;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime> lifetime;
        
}; // KeyChains::Key


class KeyChains::Key::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keystring; //type: string
        ydk::YLeaf hexadecimal_string; //type: string

}; // KeyChains::Key::KeyString


class KeyChains::Key::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SendAcceptLifetime; //type: KeyChains::Key::Lifetime::SendAcceptLifetime
        class SendLifetime; //type: KeyChains::Key::Lifetime::SendLifetime
        class AcceptLifetime; //type: KeyChains::Key::Lifetime::AcceptLifetime

        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime::AcceptLifetime> accept_lifetime;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime::SendAcceptLifetime> send_accept_lifetime;
        std::shared_ptr<ietf_key_chain::KeyChains::Key::Lifetime::SendLifetime> send_lifetime;
        
}; // KeyChains::Key::Lifetime


class KeyChains::Key::Lifetime::SendAcceptLifetime : public ydk::Entity
{
    public:
        SendAcceptLifetime();
        ~SendAcceptLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty
        ydk::YLeaf start_date_time; //type: string
        ydk::YLeaf no_end_time; //type: empty
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf end_date_time; //type: string

}; // KeyChains::Key::Lifetime::SendAcceptLifetime


class KeyChains::Key::Lifetime::SendLifetime : public ydk::Entity
{
    public:
        SendLifetime();
        ~SendLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty
        ydk::YLeaf start_date_time; //type: string
        ydk::YLeaf no_end_time; //type: empty
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf end_date_time; //type: string

}; // KeyChains::Key::Lifetime::SendLifetime


class KeyChains::Key::Lifetime::AcceptLifetime : public ydk::Entity
{
    public:
        AcceptLifetime();
        ~AcceptLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty
        ydk::YLeaf start_date_time; //type: string
        ydk::YLeaf no_end_time; //type: empty
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf end_date_time; //type: string

}; // KeyChains::Key::Lifetime::AcceptLifetime


class KeyChains::Key::CryptoAlgorithm : public ydk::Entity
{
    public:
        CryptoAlgorithm();
        ~CryptoAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha1_12; //type: empty
        ydk::YLeaf hmac_sha1_20; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha_1; //type: empty
        ydk::YLeaf hmac_sha_1; //type: empty
        ydk::YLeaf hmac_sha_256; //type: empty
        ydk::YLeaf hmac_sha_384; //type: empty
        ydk::YLeaf hmac_sha_512; //type: empty

}; // KeyChains::Key::CryptoAlgorithm


}
}

#endif /* _IETF_KEY_CHAIN_ */

