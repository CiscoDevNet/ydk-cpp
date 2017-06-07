#ifndef _CISCO_IOS_XE_NATIVE_80_
#define _CISCO_IOS_XE_NATIVE_80_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_79.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Key::Import::Ec : public Entity
{
    public:
        Ec();
        ~Ec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf exportable; //type: empty
        YLeaf terminal; //type: string
        class Url; //type: Native::Crypto::Key::Import::Ec::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Import::Ec::Url> url;
        
}; // Native::Crypto::Key::Import::Ec


class Native::Crypto::Key::Import::Ec::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        YLeaf key; //type: string
        class FileEnum;

}; // Native::Crypto::Key::Import::Ec::Url


class Native::Crypto::Key::Import::Rsa : public Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: string
        YLeaf encryption; //type: empty
        YLeaf exportable; //type: empty
        YLeaf general_purpose; //type: empty
        YLeaf on; //type: string
        YLeaf pem; //type: empty
        YLeaf redundancy; //type: empty
        YLeaf signature; //type: empty
        YLeaf storage; //type: string
        YLeaf usage_keys; //type: empty
        YLeaf terminal; //type: string
        class Url; //type: Native::Crypto::Key::Import::Rsa::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Import::Rsa::Url> url;
        
}; // Native::Crypto::Key::Import::Rsa


class Native::Crypto::Key::Import::Rsa::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        YLeaf key; //type: string
        class FileEnum;

}; // Native::Crypto::Key::Import::Rsa::Url


class Native::Crypto::Key::Move : public Entity
{
    public:
        Move();
        ~Move();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsa; //type: Native::Crypto::Key::Move::Rsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Move::Rsa> rsa;
        
}; // Native::Crypto::Key::Move


class Native::Crypto::Key::Move::Rsa : public Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: string
        YLeaf non_exportable; //type: empty
        YLeaf on; //type: string
        YLeaf redundancy; //type: empty
        YLeaf storage; //type: string

}; // Native::Crypto::Key::Move::Rsa


class Native::Crypto::Key::PubkeyChain : public Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rsa; //type: Native::Crypto::Key::PubkeyChain::Rsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa> rsa;
        
}; // Native::Crypto::Key::PubkeyChain


class Native::Crypto::Key::PubkeyChain::Rsa : public Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey
        class NamedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey> > addressed_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey> > named_key;
        
}; // Native::Crypto::Key::PubkeyChain::Rsa


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey : public Entity
{
    public:
        AddressedKey();
        ~AddressedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf use; //type: UseEnum
        YLeaf address; //type: string
        YLeaf serial_number; //type: string
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString> key_string;
                class UseEnum;

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString : public Entity
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

        YLeaf hex_data; //type: string
        YLeaf quit; //type: empty

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        YLeaf serial_number; //type: empty
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString> key_string; // presence node
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString : public Entity
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


}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey : public Entity
{
    public:
        NamedKey();
        ~NamedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf use; //type: UseEnum
        YLeaf address; //type: string
        YLeaf serial_number; //type: string
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString> key_string;
                class UseEnum;

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString : public Entity
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

        YLeaf hex_data; //type: string
        YLeaf quit; //type: empty

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        YLeaf serial_number; //type: empty
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString> key_string; // presence node
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString : public Entity
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


}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey
        class NamedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey> > addressed_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey> > named_key;
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey : public Entity
{
    public:
        AddressedKey();
        ~AddressedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf use; //type: UseEnum
        class UseEnum;

}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey


class Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey : public Entity
{
    public:
        NamedKey();
        ~NamedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf use; //type: UseEnum
        class UseEnum;

}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey


class Native::Crypto::Key::Zeroize : public Entity
{
    public:
        Zeroize();
        ~Zeroize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ec; //type: Native::Crypto::Key::Zeroize::Ec
        class PubkeyChain; //type: Native::Crypto::Key::Zeroize::PubkeyChain
        class Rsa; //type: Native::Crypto::Key::Zeroize::Rsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::Ec> ec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::PubkeyChain> pubkey_chain; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Zeroize


class Native::Crypto::Key::Zeroize::Ec : public Entity
{
    public:
        Ec();
        ~Ec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: string

}; // Native::Crypto::Key::Zeroize::Ec


class Native::Crypto::Key::Zeroize::PubkeyChain : public Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint16

}; // Native::Crypto::Key::Zeroize::PubkeyChain


class Native::Crypto::Key::Zeroize::Rsa : public Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: string

}; // Native::Crypto::Key::Zeroize::Rsa


class Native::Crypto::Keyring : public Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string
        YLeaf description; //type: string
        YLeaf local_address; //type: string
        class Default_; //type: Native::Crypto::Keyring::Default_
        class PreSharedKey; //type: Native::Crypto::Keyring::PreSharedKey
        class RsaPubkey; //type: Native::Crypto::Keyring::RsaPubkey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey> pre_shared_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey> rsa_pubkey;
        
}; // Native::Crypto::Keyring


class Native::Crypto::Keyring::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf local_address; //type: string
        class PreSharedKey; //type: Native::Crypto::Keyring::Default_::PreSharedKey
        class RsaPubkey; //type: Native::Crypto::Keyring::Default_::RsaPubkey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey> pre_shared_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey> rsa_pubkey;
        
}; // Native::Crypto::Keyring::Default_


class Native::Crypto::Keyring::Default_::PreSharedKey : public Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Addr; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr
        class Address; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address
        class Hostname; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Hostname

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr> ipv4_addr;
        
}; // Native::Crypto::Keyring::Default_::PreSharedKey


class Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr : public Entity
{
    public:
        Ipv4Addr();
        ~Ipv4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr


class Native::Crypto::Keyring::Default_::PreSharedKey::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: string
        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address


class Native::Crypto::Keyring::Default_::PreSharedKey::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Hostname


class Native::Crypto::Keyring::Default_::RsaPubkey : public Entity
{
    public:
        RsaPubkey();
        ~RsaPubkey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Addr; //type: Native::Crypto::Keyring::Default_::RsaPubkey::Addr
        class Hostname; //type: Native::Crypto::Keyring::Default_::RsaPubkey::Hostname

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey::Addr> addr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey::Hostname> hostname;
        
}; // Native::Crypto::Keyring::Default_::RsaPubkey


class Native::Crypto::Keyring::Default_::RsaPubkey::Addr : public Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf way; //type: WayEnum
        class WayEnum;

}; // Native::Crypto::Keyring::Default_::RsaPubkey::Addr


class Native::Crypto::Keyring::Default_::RsaPubkey::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf way; //type: WayEnum
        class WayEnum;

}; // Native::Crypto::Keyring::Default_::RsaPubkey::Hostname


class Native::Crypto::Keyring::PreSharedKey : public Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Addr; //type: Native::Crypto::Keyring::PreSharedKey::Ipv4Addr
        class Address; //type: Native::Crypto::Keyring::PreSharedKey::Address
        class Hostname; //type: Native::Crypto::Keyring::PreSharedKey::Hostname

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Ipv4Addr> ipv4_addr;
        
}; // Native::Crypto::Keyring::PreSharedKey


class Native::Crypto::Keyring::PreSharedKey::Ipv4Addr : public Entity
{
    public:
        Ipv4Addr();
        ~Ipv4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Keyring::PreSharedKey::Ipv4Addr


class Native::Crypto::Keyring::PreSharedKey::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: string
        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Keyring::PreSharedKey::Address


class Native::Crypto::Keyring::PreSharedKey::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Keyring::PreSharedKey::Hostname


class Native::Crypto::Keyring::RsaPubkey : public Entity
{
    public:
        RsaPubkey();
        ~RsaPubkey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Addr; //type: Native::Crypto::Keyring::RsaPubkey::Addr
        class Hostname; //type: Native::Crypto::Keyring::RsaPubkey::Hostname

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey::Addr> addr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey::Hostname> hostname;
        
}; // Native::Crypto::Keyring::RsaPubkey


class Native::Crypto::Keyring::RsaPubkey::Addr : public Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf way; //type: WayEnum
        class WayEnum;

}; // Native::Crypto::Keyring::RsaPubkey::Addr


class Native::Crypto::Keyring::RsaPubkey::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf way; //type: WayEnum
        class WayEnum;

}; // Native::Crypto::Keyring::RsaPubkey::Hostname


class Native::Crypto::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ikev2; //type: empty
        YLeaf session; //type: empty
        class Ezvpn; //type: Native::Crypto::Logging::Ezvpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Logging::Ezvpn> ezvpn; // presence node
        
}; // Native::Crypto::Logging


class Native::Crypto::Logging::Ezvpn : public Entity
{
    public:
        Ezvpn();
        ~Ezvpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string

}; // Native::Crypto::Logging::Ezvpn


class Native::Crypto::MapIpv6 : public Entity
{
    public:
        MapIpv6();
        ~MapIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Crypto::MapIpv6::Map

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map> > map;
        
}; // Native::Crypto::MapIpv6


class Native::Crypto::MapIpv6::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ipv6; //type: empty
        YLeaf sequence_number; //type: uint16
        YLeaf keying; //type: KeyingEnum
        YLeaf dynamic; //type: string
        YLeaf profile; //type: string
        YLeaf description; //type: string
        class Default_; //type: Native::Crypto::MapIpv6::Map::Default_
        class Dialer; //type: Native::Crypto::MapIpv6::Map::Dialer
        class Match; //type: Native::Crypto::MapIpv6::Map::Match
        class Qos; //type: Native::Crypto::MapIpv6::Map::Qos
        class ReverseRoute; //type: Native::Crypto::MapIpv6::Map::ReverseRoute
        class Set; //type: Native::Crypto::MapIpv6::Map::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Dialer> dialer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Qos> qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set> set;
                class KeyingEnum;

}; // Native::Crypto::MapIpv6::Map


class Native::Crypto::MapIpv6::Map::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: empty
        class Dialer; //type: Native::Crypto::MapIpv6::Map::Default_::Dialer
        class Match; //type: Native::Crypto::MapIpv6::Map::Default_::Match
        class Qos; //type: Native::Crypto::MapIpv6::Map::Default_::Qos
        class ReverseRoute; //type: Native::Crypto::MapIpv6::Map::Default_::ReverseRoute
        class Set; //type: Native::Crypto::MapIpv6::Map::Default_::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Dialer> dialer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Qos> qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set> set;
        
}; // Native::Crypto::MapIpv6::Map::Default_


class Native::Crypto::MapIpv6::Map::Default_::Dialer : public Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::MapIpv6::Map::Default_::Dialer


class Native::Crypto::MapIpv6::Map::Default_::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty

}; // Native::Crypto::MapIpv6::Map::Default_::Match


class Native::Crypto::MapIpv6::Map::Default_::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::MapIpv6::Map::Default_::Qos


class Native::Crypto::MapIpv6::Map::Default_::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::MapIpv6::Map::Default_::ReverseRoute


class Native::Crypto::MapIpv6::Map::Default_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: empty
        YLeaf identity; //type: empty
        YLeaf ikev2_profile; //type: string
        YLeaf isakmp_profile; //type: empty
        YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::MapIpv6::Map::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::MapIpv6::Map::Default_::Set


class Native::Crypto::MapIpv6::Map::Default_::Set::Pfs : public Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::MapIpv6::Map::Default_::Set::Pfs


class Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute


class Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation : public Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dfbit; //type: empty
        YLeaf ecn; //type: empty
        YLeaf level; //type: LevelEnum
        class Dummy; //type: Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay> replay;
                class LevelEnum;

}; // Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation


class Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer : public Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle_time; //type: empty
        YLeaf default_; //type: empty

}; // Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime : public Entity
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

        YLeaf days; //type: empty
        YLeaf kilobytes; //type: empty
        YLeaf seconds; //type: empty

}; // Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime


class Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay : public Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf window_size; //type: empty

}; // Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::MapIpv6::Map::Dialer : public Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::MapIpv6::Map::Dialer


class Native::Crypto::MapIpv6::Map::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: one of uint16, string

}; // Native::Crypto::MapIpv6::Map::Match


class Native::Crypto::MapIpv6::Map::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::MapIpv6::Map::Qos


class Native::Crypto::MapIpv6::Map::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        class RemotePeerConatiner; //type: Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner> remote_peer_conatiner;
        
}; // Native::Crypto::MapIpv6::Map::ReverseRoute


class Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner : public Entity
{
    public:
        RemotePeerConatiner();
        ~RemotePeerConatiner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_peer; //type: string
        YLeaf gateway; //type: empty
        YLeaf static_; //type: empty

}; // Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner


class Native::Crypto::MapIpv6::Map::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string
        YLeaf identity; //type: string
        YLeaf ikev2_profile; //type: string
        YLeaf isakmp_profile; //type: string
        YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::MapIpv6::Map::Set::Peer
        class Pfs; //type: Native::Crypto::MapIpv6::Map::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::MapIpv6::Map::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::MapIpv6::Map::Set::SecurityAssociation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::Pfs> pfs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::ReverseRoute> reverse_route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::MapIpv6::Map::Set


class Native::Crypto::MapIpv6::Map::Set::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf default_; //type: empty
        YLeaf dynamic; //type: empty

}; // Native::Crypto::MapIpv6::Map::Set::Peer


class Native::Crypto::MapIpv6::Map::Set::Pfs : public Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: GroupEnum
        class GroupEnum;

}; // Native::Crypto::MapIpv6::Map::Set::Pfs


class Native::Crypto::MapIpv6::Map::Set::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance; //type: uint8
        YLeaf tag; //type: uint64

}; // Native::Crypto::MapIpv6::Map::Set::ReverseRoute


class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation : public Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dfbit; //type: DfbitEnum
        YLeaf ecn; //type: EcnEnum
        YLeaf level; //type: LevelEnum
        class Dummy; //type: Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay> replay;
                class DfbitEnum;
        class EcnEnum;
        class LevelEnum;

}; // Native::Crypto::MapIpv6::Map::Set::SecurityAssociation


class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pps; //type: uint8
        YLeaf seconds; //type: uint16

}; // Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy


class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer : public Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle_time; //type: uint32
        YLeaf default_; //type: empty

}; // Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime : public Entity
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

        YLeaf days; //type: uint8
        YLeaf kilobytes; //type: one of uint64, enumeration
        YLeaf seconds; //type: uint64
        class KilobytesEnum;

}; // Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime


class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay : public Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf window_size; //type: WindowSizeEnum
        class WindowSizeEnum;

}; // Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay


class Native::Crypto::MapIpv6Gdoi : public Entity
{
    public:
        MapIpv6Gdoi();
        ~MapIpv6Gdoi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Crypto::MapIpv6Gdoi::Map

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map> > map;
        
}; // Native::Crypto::MapIpv6Gdoi


class Native::Crypto::MapIpv6Gdoi::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ipv6; //type: empty
        YLeaf gdoi; //type: GdoiEnum
        YLeaf activate; //type: empty
        class Default_; //type: Native::Crypto::MapIpv6Gdoi::Map::Default_
        class Match; //type: Native::Crypto::MapIpv6Gdoi::Map::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Match> match;
                class GdoiEnum;

}; // Native::Crypto::MapIpv6Gdoi::Map


class Native::Crypto::MapIpv6Gdoi::Map::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf activate; //type: empty
        class Match; //type: Native::Crypto::MapIpv6Gdoi::Map::Default_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Default_::Match> match;
        
}; // Native::Crypto::MapIpv6Gdoi::Map::Default_


class Native::Crypto::MapIpv6Gdoi::Map::Default_::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty

}; // Native::Crypto::MapIpv6Gdoi::Map::Default_::Match


class Native::Crypto::MapIpv6Gdoi::Map::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: one of uint16, string

}; // Native::Crypto::MapIpv6Gdoi::Map::Match


class Native::Crypto::MapClient : public Entity
{
    public:
        MapClient();
        ~MapClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Crypto::MapClient::Map

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map> > map;
        
}; // Native::Crypto::MapClient


class Native::Crypto::MapClient::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ipv6; //type: empty
        YLeaf isakmp_profile; //type: string
        YLeaf local_address; //type: string
        class Client; //type: Native::Crypto::MapClient::Map::Client
        class Isakmp; //type: Native::Crypto::MapClient::Map::Isakmp
        class Redundancy; //type: Native::Crypto::MapClient::Map::Redundancy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Isakmp> isakmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Redundancy> redundancy;
        
}; // Native::Crypto::MapClient::Map


class Native::Crypto::MapClient::Map::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Accounting; //type: Native::Crypto::MapClient::Map::Client::Accounting
        class Authentication; //type: Native::Crypto::MapClient::Map::Client::Authentication
        class Configuration; //type: Native::Crypto::MapClient::Map::Client::Configuration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Configuration> configuration;
        
}; // Native::Crypto::MapClient::Map::Client


class Native::Crypto::MapClient::Map::Client::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Client::Accounting


class Native::Crypto::MapClient::Map::Client::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Client::Authentication


class Native::Crypto::MapClient::Map::Client::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::MapClient::Map::Client::Configuration::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Configuration::Address> address;
        
}; // Native::Crypto::MapClient::Map::Client::Configuration


class Native::Crypto::MapClient::Map::Client::Configuration::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initiate; //type: empty
        YLeaf respond; //type: empty

}; // Native::Crypto::MapClient::Map::Client::Configuration::Address


class Native::Crypto::MapClient::Map::Isakmp : public Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authorization; //type: empty
        YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Isakmp


class Native::Crypto::MapClient::Map::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReplayInterval; //type: Native::Crypto::MapClient::Map::Redundancy::ReplayInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Redundancy::ReplayInterval> replay_interval;
        
}; // Native::Crypto::MapClient::Map::Redundancy


class Native::Crypto::MapClient::Map::Redundancy::ReplayInterval : public Entity
{
    public:
        ReplayInterval();
        ~ReplayInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inbound; //type: uint32
        YLeaf outbound; //type: uint32

}; // Native::Crypto::MapClient::Map::Redundancy::ReplayInterval


class Native::Crypto::Mib : public Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipsec; //type: Native::Crypto::Mib::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec> ipsec;
        
}; // Native::Crypto::Mib


class Native::Crypto::Mib::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flowmib; //type: Native::Crypto::Mib::Ipsec::Flowmib

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib> flowmib;
        
}; // Native::Crypto::Mib::Ipsec


class Native::Crypto::Mib::Ipsec::Flowmib : public Entity
{
    public:
        Flowmib();
        ~Flowmib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class History; //type: Native::Crypto::Mib::Ipsec::Flowmib::History

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib::History> history;
        
}; // Native::Crypto::Mib::Ipsec::Flowmib


class Native::Crypto::Mib::Ipsec::Flowmib::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Failure; //type: Native::Crypto::Mib::Ipsec::Flowmib::History::Failure
        class Tunnel; //type: Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib::History::Failure> failure;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel> tunnel;
        
}; // Native::Crypto::Mib::Ipsec::Flowmib::History


class Native::Crypto::Mib::Ipsec::Flowmib::History::Failure : public Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8

}; // Native::Crypto::Mib::Ipsec::Flowmib::History::Failure


class Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8

}; // Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel


class Native::Crypto::Pki : public Entity
{
    public:
        Pki();
        ~Pki();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authenticate; //type: string
        YLeaf enroll; //type: string
        class Certificate; //type: Native::Crypto::Pki::Certificate
        class Crl; //type: Native::Crypto::Pki::Crl
        class Export_; //type: Native::Crypto::Pki::Export_
        class Import; //type: Native::Crypto::Pki::Import
        class Profile; //type: Native::Crypto::Pki::Profile
        class Server; //type: Native::Crypto::Pki::Server
        class Trustpoint; //type: Native::Crypto::Pki::Trustpoint
        class Token; //type: Native::Crypto::Pki::Token
        class Trustpool; //type: Native::Crypto::Pki::Trustpool
        class Default_; //type: Native::Crypto::Pki::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate> certificate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl> crl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_> > export_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Import> > import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile> profile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Token> token;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint> > trustpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpool> trustpool;
        
}; // Native::Crypto::Pki


class Native::Crypto::Pki::Certificate : public Entity
{
    public:
        Certificate();
        ~Certificate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pool; //type: empty
        YLeaf query; //type: empty
        YLeaf validate; //type: string
        class Chain; //type: Native::Crypto::Pki::Certificate::Chain
        class Map; //type: Native::Crypto::Pki::Certificate::Map
        class Storage; //type: Native::Crypto::Pki::Certificate::Storage

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Chain> > chain;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map> > map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Storage> storage;
        
}; // Native::Crypto::Pki::Certificate


class Native::Crypto::Pki::Certificate::Chain : public Entity
{
    public:
        Chain();
        ~Chain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Certificate_; //type: Native::Crypto::Pki::Certificate::Chain::Certificate_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Chain::Certificate_> > certificate;
        
}; // Native::Crypto::Pki::Certificate::Chain


class Native::Crypto::Pki::Certificate::Chain::Certificate_ : public Entity
{
    public:
        Certificate_();
        ~Certificate_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf serial; //type: string
        YLeaf certtype; //type: CerttypeEnum
        class CerttypeEnum;

}; // Native::Crypto::Pki::Certificate::Chain::Certificate_


class Native::Crypto::Pki::Certificate::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string
        YLeaf sequence; //type: uint16
        class AltSubjectName; //type: Native::Crypto::Pki::Certificate::Map::AltSubjectName
        class ExpiresOn; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn
        class IssuerName; //type: Native::Crypto::Pki::Certificate::Map::IssuerName
        class Name; //type: Native::Crypto::Pki::Certificate::Map::Name
        class SerialNumber; //type: Native::Crypto::Pki::Certificate::Map::SerialNumber
        class SubjectName; //type: Native::Crypto::Pki::Certificate::Map::SubjectName
        class UnstructuredSubjectName; //type: Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName
        class ValidStart; //type: Native::Crypto::Pki::Certificate::Map::ValidStart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::AltSubjectName> alt_subject_name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn> expires_on;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::IssuerName> issuer_name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::Name> name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::SerialNumber> serial_number;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::SubjectName> subject_name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName> unstructured_subject_name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart> valid_start;
        
}; // Native::Crypto::Pki::Certificate::Map


class Native::Crypto::Pki::Certificate::Map::AltSubjectName : public Entity
{
    public:
        AltSubjectName();
        ~AltSubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf co; //type: string
        YLeaf eq; //type: string
        YLeaf nc; //type: string
        YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::AltSubjectName


class Native::Crypto::Pki::Certificate::Map::ExpiresOn : public Entity
{
    public:
        ExpiresOn();
        ~ExpiresOn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eq; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq
        class Ge; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge
        class Lt; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt
        class Ne; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq> eq;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge> ge;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt> lt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne> ne;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq : public Entity
{
    public:
        Eq();
        ~Eq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge : public Entity
{
    public:
        Ge();
        ~Ge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt : public Entity
{
    public:
        Lt();
        ~Lt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne : public Entity
{
    public:
        Ne();
        ~Ne();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time


class Native::Crypto::Pki::Certificate::Map::IssuerName : public Entity
{
    public:
        IssuerName();
        ~IssuerName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf co; //type: string
        YLeaf eq; //type: string
        YLeaf nc; //type: string
        YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::IssuerName


class Native::Crypto::Pki::Certificate::Map::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf co; //type: string
        YLeaf eq; //type: string
        YLeaf nc; //type: string
        YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::Name


class Native::Crypto::Pki::Certificate::Map::SerialNumber : public Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf co; //type: string
        YLeaf eq; //type: string
        YLeaf nc; //type: string
        YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::SerialNumber


class Native::Crypto::Pki::Certificate::Map::SubjectName : public Entity
{
    public:
        SubjectName();
        ~SubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf co; //type: string
        YLeaf eq; //type: string
        YLeaf nc; //type: string
        YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::SubjectName


class Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName : public Entity
{
    public:
        UnstructuredSubjectName();
        ~UnstructuredSubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf co; //type: string
        YLeaf eq; //type: string
        YLeaf nc; //type: string
        YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName


class Native::Crypto::Pki::Certificate::Map::ValidStart : public Entity
{
    public:
        ValidStart();
        ~ValidStart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eq; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Eq
        class Ge; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ge
        class Lt; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Lt
        class Ne; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ne

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Eq> eq;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ge> ge;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Lt> lt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ne> ne;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart


class Native::Crypto::Pki::Certificate::Map::ValidStart::Eq : public Entity
{
    public:
        Eq();
        ~Eq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Eq


class Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ge : public Entity
{
    public:
        Ge();
        ~Ge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ge


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Lt : public Entity
{
    public:
        Lt();
        ~Lt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Lt


class Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ne : public Entity
{
    public:
        Ne();
        ~Ne();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ne


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date1; //type: uint8
        YLeaf month1; //type: string
        YLeaf date2; //type: uint8
        YLeaf month2; //type: string
        YLeaf year; //type: uint16
        YLeaf clock; //type: string
        YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time


class Native::Crypto::Pki::Certificate::Storage : public Entity
{
    public:
        Storage();
        ~Storage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path; //type: one of string, enumeration
        YLeaf on; //type: empty
        YLeaf with_keypair; //type: empty
        class PathEnum;

}; // Native::Crypto::Pki::Certificate::Storage


class Native::Crypto::Pki::Crl : public Entity
{
    public:
        Crl();
        ~Crl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request; //type: string
        class Cache; //type: Native::Crypto::Pki::Crl::Cache
        class Download; //type: Native::Crypto::Pki::Crl::Download

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download> download;
        
}; // Native::Crypto::Pki::Crl


class Native::Crypto::Pki::Crl::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint32

}; // Native::Crypto::Pki::Crl::Cache


class Native::Crypto::Pki::Crl::Download : public Entity
{
    public:
        Download();
        ~Download();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trustpoint; //type: string
        class Schedule; //type: Native::Crypto::Pki::Crl::Download::Schedule
        class Url; //type: Native::Crypto::Pki::Crl::Download::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule> schedule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Url> url;
        
}; // Native::Crypto::Pki::Crl::Download


class Native::Crypto::Pki::Crl::Download::Schedule : public Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prepublish; //type: uint16
        class Retries; //type: Native::Crypto::Pki::Crl::Download::Schedule::Retries
        class Time; //type: Native::Crypto::Pki::Crl::Download::Schedule::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule::Retries> retries;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule::Time> time;
        
}; // Native::Crypto::Pki::Crl::Download::Schedule


class Native::Crypto::Pki::Crl::Download::Schedule::Retries : public Entity
{
    public:
        Retries();
        ~Retries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf interval; //type: uint16

}; // Native::Crypto::Pki::Crl::Download::Schedule::Retries


class Native::Crypto::Pki::Crl::Download::Schedule::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf date; //type: DateEnum
        YLeaf clock; //type: string
        class DateEnum;

}; // Native::Crypto::Pki::Crl::Download::Schedule::Time


class Native::Crypto::Pki::Crl::Download::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf source_interface; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Crl::Download::Url


class Native::Crypto::Pki::Export_ : public Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Pem; //type: Native::Crypto::Pki::Export_::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Export_::Pkcs12

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem> pem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pkcs12> pkcs12;
        
}; // Native::Crypto::Pki::Export_


class Native::Crypto::Pki::Export_::Pem : public Entity
{
    public:
        Pem();
        ~Pem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Terminal; //type: Native::Crypto::Pki::Export_::Pem::Terminal
        class Url; //type: Native::Crypto::Pki::Export_::Pem::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Terminal> terminal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Url> url;
        
}; // Native::Crypto::Pki::Export_::Pem


class Native::Crypto::Pki::Export_::Pem::Terminal : public Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rollover; //type: empty
        class Pem3Des; //type: Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des
        class Des; //type: Native::Crypto::Pki::Export_::Pem::Terminal::Des

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Terminal::Des> des;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des> pem_3des;
        
}; // Native::Crypto::Pki::Export_::Pem::Terminal


class Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des : public Entity
{
    public:
        Pem3Des();
        ~Pem3Des();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf password; //type: string

}; // Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des


class Native::Crypto::Pki::Export_::Pem::Terminal::Des : public Entity
{
    public:
        Des();
        ~Des();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf password; //type: string

}; // Native::Crypto::Pki::Export_::Pem::Terminal::Des


class Native::Crypto::Pki::Export_::Pem::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        YLeaf encrypt; //type: EncryptEnum
        YLeaf password; //type: string
        class FileEnum;
        class EncryptEnum;

}; // Native::Crypto::Pki::Export_::Pem::Url


class Native::Crypto::Pki::Export_::Pkcs12 : public Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        YLeaf password; //type: string
        class FileEnum;

}; // Native::Crypto::Pki::Export_::Pkcs12


class Native::Crypto::Pki::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf certificate; //type: empty
        class Pem; //type: Native::Crypto::Pki::Import::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Import::Pkcs12

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem> pem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pkcs12> pkcs12;
        
}; // Native::Crypto::Pki::Import


class Native::Crypto::Pki::Import::Pem : public Entity
{
    public:
        Pem();
        ~Pem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf check; //type: empty
        YLeaf exportable; //type: empty
        YLeaf usage_keys; //type: empty
        class Terminal; //type: Native::Crypto::Pki::Import::Pem::Terminal
        class Url; //type: Native::Crypto::Pki::Import::Pem::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem::Terminal> terminal;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem::Url> url;
        
}; // Native::Crypto::Pki::Import::Pem


class Native::Crypto::Pki::Import::Pem::Terminal : public Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf password; //type: string

}; // Native::Crypto::Pki::Import::Pem::Terminal


class Native::Crypto::Pki::Import::Pem::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        YLeaf password; //type: string
        class FileEnum;

}; // Native::Crypto::Pki::Import::Pem::Url


class Native::Crypto::Pki::Import::Pkcs12 : public Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        YLeaf password; //type: string
        class FileEnum;

}; // Native::Crypto::Pki::Import::Pkcs12


class Native::Crypto::Pki::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Enrollment; //type: Native::Crypto::Pki::Profile::Enrollment

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment> > enrollment;
        
}; // Native::Crypto::Pki::Profile


class Native::Crypto::Pki::Profile::Enrollment : public Entity
{
    public:
        Enrollment();
        ~Enrollment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string
        YLeaf method_est; //type: empty
        YLeaf source_interface; //type: string
        class Authentication; //type: Native::Crypto::Pki::Profile::Enrollment::Authentication
        class Enrollment_; //type: Native::Crypto::Pki::Profile::Enrollment::Enrollment_
        class Parameter; //type: Native::Crypto::Pki::Profile::Enrollment::Parameter
        class Reenrollment; //type: Native::Crypto::Pki::Profile::Enrollment::Reenrollment
        class Default_; //type: Native::Crypto::Pki::Profile::Enrollment::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Enrollment_> enrollment;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Parameter> > parameter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Reenrollment> reenrollment;
        
}; // Native::Crypto::Pki::Profile::Enrollment


class Native::Crypto::Pki::Profile::Enrollment::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string
        YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Authentication::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Authentication::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Authentication


class Native::Crypto::Pki::Profile::Enrollment::Authentication::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Authentication::Url


class Native::Crypto::Pki::Profile::Enrollment::Enrollment_ : public Entity
{
    public:
        Enrollment_();
        ~Enrollment_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string
        YLeaf terminal; //type: empty
        YLeaf credential; //type: string
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Enrollment_


class Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url


class Native::Crypto::Pki::Profile::Enrollment::Parameter : public Entity
{
    public:
        Parameter();
        ~Parameter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf prompt; //type: string
        YLeaf value_; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Parameter


class Native::Crypto::Pki::Profile::Enrollment::Reenrollment : public Entity
{
    public:
        Reenrollment();
        ~Reenrollment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string
        YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Reenrollment


class Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url


class Native::Crypto::Pki::Profile::Enrollment::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method_est; //type: empty
        YLeaf source_interface; //type: string
        class Authentication; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication
        class Enrollment_; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_
        class Parameter; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter
        class Reenrollment; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_> enrollment;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter> > parameter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment> reenrollment;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_

class Native::Crypto::Key::Import::Ec::Url::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf cns__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tar__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::Import::Rsa::Url::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf cns__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tar__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::UseEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::UseEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::UseEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::UseEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Address::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::RsaPubkey::Addr::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::PreSharedKey::Address::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::PreSharedKey::Hostname::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::RsaPubkey::Addr::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::Keyring::RsaPubkey::Hostname::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf encryption;
        static const Enum::YLeaf signature;

};

class Native::Crypto::MapIpv6::Map::KeyingEnum : public Enum
{
    public:
        static const Enum::YLeaf ipsec_isakmp;
        static const Enum::YLeaf ipsec_manual;
        static const Enum::YLeaf gdoi;
        static const Enum::YLeaf ckm;

};

class Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf per_host;

};

class Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf group1;
        static const Enum::YLeaf group14;
        static const Enum::YLeaf group15;
        static const Enum::YLeaf group16;
        static const Enum::YLeaf group19;
        static const Enum::YLeaf group2;
        static const Enum::YLeaf group20;
        static const Enum::YLeaf group21;
        static const Enum::YLeaf group24;
        static const Enum::YLeaf group5;

};

class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::DfbitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::EcnEnum : public Enum
{
    public:
        static const Enum::YLeaf discard;
        static const Enum::YLeaf propagate;

};

class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf per_host;

};

class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::KilobytesEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::WindowSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1024;
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_64;

};

class Native::Crypto::MapIpv6Gdoi::Map::GdoiEnum : public Enum
{
    public:
        static const Enum::YLeaf fail_close;

};

class Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ca;
        static const Enum::YLeaf ra_encrypt;
        static const Enum::YLeaf ra_general;
        static const Enum::YLeaf ra_sign;
        static const Enum::YLeaf rollover;
        static const Enum::YLeaf self_signed;

};

class Native::Crypto::Pki::Certificate::Storage::PathEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf nvram__COLON__;

};

class Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum : public Enum
{
    public:
        static const Enum::YLeaf Friday;
        static const Enum::YLeaf Monday;
        static const Enum::YLeaf Saturday;
        static const Enum::YLeaf Sunday;
        static const Enum::YLeaf Thursday;
        static const Enum::YLeaf Tuesday;
        static const Enum::YLeaf Wednesday;

};

class Native::Crypto::Pki::Export_::Pem::Url::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Export_::Pem::Url::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_3des;
        static const Enum::YLeaf des;

};

class Native::Crypto::Pki::Export_::Pkcs12::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Import::Pem::Url::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Import::Pkcs12::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_80_ */

