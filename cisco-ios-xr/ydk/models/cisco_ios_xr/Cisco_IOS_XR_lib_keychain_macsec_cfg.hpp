#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_MACSEC_CFG_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_MACSEC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_macsec_cfg {

class MacSecKeychains : public Entity
{
    public:
        MacSecKeychains();
        ~MacSecKeychains();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class MacSecKeychain; //type: MacSecKeychains::MacSecKeychain

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain> > mac_sec_keychain;


}; // MacSecKeychains


class MacSecKeychains::MacSecKeychain : public Entity
{
    public:
        MacSecKeychain();
        ~MacSecKeychain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf chain_name; //type: string

        class Keies; //type: MacSecKeychains::MacSecKeychain::Keies

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies> keies;


}; // MacSecKeychains::MacSecKeychain


class MacSecKeychains::MacSecKeychain::Keies : public Entity
{
    public:
        Keies();
        ~Keies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Key; //type: MacSecKeychains::MacSecKeychain::Keies::Key

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies::Key> > key;


}; // MacSecKeychains::MacSecKeychain::Keies


class MacSecKeychains::MacSecKeychain::Keies::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key_id; //type: string

        class Lifetime; //type: MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime
        class KeyString; //type: MacSecKeychains::MacSecKeychain::Keies::Key::KeyString

        std::shared_ptr<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies::Key::KeyString> key_string; // presence node
        std::shared_ptr<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime> lifetime;


}; // MacSecKeychains::MacSecKeychain::Keies::Key


class MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_hour; //type: uint32
        YLeaf start_minutes; //type: uint32
        YLeaf start_seconds; //type: uint32
        YLeaf start_date; //type: uint32
        YLeaf start_month; //type: MacSecKeyChainMonthEnum
        YLeaf start_year; //type: uint32
        YLeaf life_time; //type: uint32
        YLeaf infinite_flag; //type: boolean
        YLeaf end_hour; //type: uint32
        YLeaf end_minutes; //type: uint32
        YLeaf end_seconds; //type: uint32
        YLeaf end_date; //type: uint32
        YLeaf end_month; //type: MacSecKeyChainMonthEnum
        YLeaf end_year; //type: uint32



}; // MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime


class MacSecKeychains::MacSecKeychain::Keies::Key::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string; //type: string
        YLeaf cryptographic_algorithm; //type: MacSecCryptoAlgEnum



}; // MacSecKeychains::MacSecKeychain::Keies::Key::KeyString

class MacSecKeyChainMonthEnum : public Enum
{
    public:
        static const Enum::YLeaf jan;
        static const Enum::YLeaf feb;
        static const Enum::YLeaf mar;
        static const Enum::YLeaf apr;
        static const Enum::YLeaf may;
        static const Enum::YLeaf jun;
        static const Enum::YLeaf jul;
        static const Enum::YLeaf aug;
        static const Enum::YLeaf sep;
        static const Enum::YLeaf oct;
        static const Enum::YLeaf nov;
        static const Enum::YLeaf dec;

};

class MacSecCryptoAlgEnum : public Enum
{
    public:
        static const Enum::YLeaf aes_128_cmac;
        static const Enum::YLeaf aes_256_cmac;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_MACSEC_CFG_ */

