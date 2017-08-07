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

        class Keychain; //type: Keychains::Keychain

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain> > keychain;
        
}; // Keychains


class Keychains::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chain_name; //type: string
        class AcceptTolerance; //type: Keychains::Keychain::AcceptTolerance
        class Keies; //type: Keychains::Keychain::Keies

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::AcceptTolerance> accept_tolerance;
        std::shared_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies> keies;
        
}; // Keychains::Keychain


class Keychains::Keychain::AcceptTolerance : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf infinite; //type: boolean

}; // Keychains::Keychain::AcceptTolerance


class Keychains::Keychain::Keies : public ydk::Entity
{
    public:
        Keies();
        ~Keies();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Keychains::Keychain::Keies::Key

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies::Key> > key;
        
}; // Keychains::Keychain::Keies


class Keychains::Keychain::Keies::Key : public ydk::Entity
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

        ydk::YLeaf key_id; //type: string
        ydk::YLeaf key_string; //type: string
        ydk::YLeaf cryptographic_algorithm; //type: CryptoAlg
        class AcceptLifetime; //type: Keychains::Keychain::Keies::Key::AcceptLifetime
        class SendLifetime; //type: Keychains::Keychain::Keies::Key::SendLifetime

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies::Key::AcceptLifetime> accept_lifetime;
        std::shared_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies::Key::SendLifetime> send_lifetime;
        
}; // Keychains::Keychain::Keies::Key


class Keychains::Keychain::Keies::Key::AcceptLifetime : public ydk::Entity
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

}; // Keychains::Keychain::Keies::Key::AcceptLifetime


class Keychains::Keychain::Keies::Key::SendLifetime : public ydk::Entity
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

}; // Keychains::Keychain::Keies::Key::SendLifetime

class CryptoAlg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alg_hmac_sha1_12;
        static const ydk::Enum::YLeaf alg_md5_16;
        static const ydk::Enum::YLeaf alg_sha1_20;
        static const ydk::Enum::YLeaf alg_hmac_md5_16;
        static const ydk::Enum::YLeaf alg_hmac_sha1_20;

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

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_ */

