#ifndef _CISCO_IOS_XE_NATIVE_78_
#define _CISCO_IOS_XE_NATIVE_78_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_77.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key : public Entity
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

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key


class Native::Crypto::Ikev2::Profile::ConfigExchange : public Entity
{
    public:
        ConfigExchange();
        ~ConfigExchange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf request; //type: empty
        YLeaf set; //type: SetEnum
        class SetEnum;

}; // Native::Crypto::Ikev2::Profile::ConfigExchange


class Native::Crypto::Ikev2::Profile::Dpd : public Entity
{
    public:
        Dpd();
        ~Dpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16
        YLeaf retry; //type: uint8
        YLeaf query; //type: QueryEnum
        class QueryEnum;

}; // Native::Crypto::Ikev2::Profile::Dpd


class Native::Crypto::Ikev2::Profile::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local; //type: Native::Crypto::Ikev2::Profile::Identity::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Identity::Local> local;
        
}; // Native::Crypto::Ikev2::Profile::Identity


class Native::Crypto::Ikev2::Profile::Identity::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf dn; //type: empty
        YLeaf email; //type: string
        YLeaf fqdn; //type: string
        YLeaf key_id; //type: string

}; // Native::Crypto::Ikev2::Profile::Identity::Local


class Native::Crypto::Ikev2::Profile::InitialContact : public Entity
{
    public:
        InitialContact();
        ~InitialContact();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf force; //type: empty

}; // Native::Crypto::Ikev2::Profile::InitialContact


class Native::Crypto::Ikev2::Profile::Keyring : public Entity
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

        YLeaf local; //type: string
        class Aaa; //type: Native::Crypto::Ikev2::Profile::Keyring::Aaa

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring::Aaa> > aaa;
        
}; // Native::Crypto::Ikev2::Profile::Keyring


class Native::Crypto::Ikev2::Profile::Keyring::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Keyring::Aaa


class Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password


class Native::Crypto::Ikev2::Profile::Lifetime : public Entity
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

        YLeaf seconds; //type: uint32
        YLeaf certificate; //type: empty

}; // Native::Crypto::Ikev2::Profile::Lifetime


class Native::Crypto::Ikev2::Profile::Match : public Entity
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

        YLeaf certificate; //type: string
        class Address; //type: Native::Crypto::Ikev2::Profile::Match::Address
        class Fvrf; //type: Native::Crypto::Ikev2::Profile::Match::Fvrf
        class Identity; //type: Native::Crypto::Ikev2::Profile::Match::Identity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Fvrf> fvrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity> identity;
        
}; // Native::Crypto::Ikev2::Profile::Match


class Native::Crypto::Ikev2::Profile::Match::Address : public Entity
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

        class Local; //type: Native::Crypto::Ikev2::Profile::Match::Address::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Address::Local> local;
        
}; // Native::Crypto::Ikev2::Profile::Match::Address


class Native::Crypto::Ikev2::Profile::Match::Address::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf interface; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Address::Local


class Native::Crypto::Ikev2::Profile::Match::Fvrf : public Entity
{
    public:
        Fvrf();
        ~Fvrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf any; //type: empty

}; // Native::Crypto::Ikev2::Profile::Match::Fvrf


class Native::Crypto::Ikev2::Profile::Match::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Remote; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote> remote;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf key_id; //type: string
        class Address; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address
        class Email; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email
        class Fqdn; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email> email;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn> fqdn;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address : public Entity
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

        YLeaf ipv6_prefix; //type: string
        class Ipv4; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4> ipv4;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mask; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email : public Entity
{
    public:
        Email();
        ~Email();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn : public Entity
{
    public:
        Fqdn();
        ~Fqdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn


class Native::Crypto::Ikev2::Profile::Nat : public Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keepalive; //type: uint16

}; // Native::Crypto::Ikev2::Profile::Nat


class Native::Crypto::Ikev2::Profile::Pki : public Entity
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

        YLeaf trustpoint; //type: string
        YLeaf use; //type: UseEnum
        class UseEnum;

}; // Native::Crypto::Ikev2::Profile::Pki


class Native::Crypto::Ikev2::Profile::Reconnect : public Entity
{
    public:
        Reconnect();
        ~Reconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Crypto::Ikev2::Profile::Reconnect


class Native::Crypto::Ikev2::Profile::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gateway; //type: Native::Crypto::Ikev2::Profile::Redirect::Gateway

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Redirect::Gateway> gateway;
        
}; // Native::Crypto::Ikev2::Profile::Redirect


class Native::Crypto::Ikev2::Profile::Redirect::Gateway : public Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth; //type: empty

}; // Native::Crypto::Ikev2::Profile::Redirect::Gateway


class Native::Crypto::Ikev2::Profile::VirtualTemplate : public Entity
{
    public:
        VirtualTemplate();
        ~VirtualTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Crypto::Ikev2::Profile::VirtualTemplate


class Native::Crypto::Ikev2::Proposal : public Entity
{
    public:
        Proposal();
        ~Proposal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Encryption; //type: Native::Crypto::Ikev2::Proposal::Encryption
        class Group; //type: Native::Crypto::Ikev2::Proposal::Group
        class Integrity; //type: Native::Crypto::Ikev2::Proposal::Integrity
        class Prf; //type: Native::Crypto::Ikev2::Proposal::Prf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Integrity> integrity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Prf> prf;
        
}; // Native::Crypto::Ikev2::Proposal


class Native::Crypto::Ikev2::Proposal::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf en_3des; //type: empty
        YLeaf aes_cbc_128; //type: empty
        YLeaf aes_cbc_192; //type: empty
        YLeaf aes_cbc_256; //type: empty
        YLeaf aes_gcm_128; //type: empty
        YLeaf aes_gcm_256; //type: empty
        YLeaf des; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Encryption


class Native::Crypto::Ikev2::Proposal::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf one; //type: empty
        YLeaf fourteen; //type: empty
        YLeaf fifteen; //type: empty
        YLeaf sixteen; //type: empty
        YLeaf nineteen; //type: empty
        YLeaf two; //type: empty
        YLeaf twenty; //type: empty
        YLeaf twenty_one; //type: empty
        YLeaf twenty_four; //type: empty
        YLeaf five; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Group


class Native::Crypto::Ikev2::Proposal::Integrity : public Entity
{
    public:
        Integrity();
        ~Integrity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: empty
        YLeaf sha1; //type: empty
        YLeaf sha256; //type: empty
        YLeaf sha384; //type: empty
        YLeaf sha512; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Integrity


class Native::Crypto::Ikev2::Proposal::Prf : public Entity
{
    public:
        Prf();
        ~Prf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: empty
        YLeaf sha1; //type: empty
        YLeaf sha256; //type: empty
        YLeaf sha384; //type: empty
        YLeaf sha512; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Prf


class Native::Crypto::Ikev2::Reconnect : public Entity
{
    public:
        Reconnect();
        ~Reconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint8
        YLeaf value_; //type: string
        YLeaf active; //type: string

}; // Native::Crypto::Ikev2::Reconnect


class Native::Crypto::Ikev2::Redirect : public Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gateway; //type: GatewayEnum
        class Client; //type: Native::Crypto::Ikev2::Redirect::Client

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Redirect::Client> client; // presence node
                class GatewayEnum;

}; // Native::Crypto::Ikev2::Redirect


class Native::Crypto::Ikev2::Redirect::Client : public Entity
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

        YLeaf max_redirects; //type: uint8

}; // Native::Crypto::Ikev2::Redirect::Client


class Native::Crypto::Gkm : public Entity
{
    public:
        Gkm();
        ~Gkm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Native::Crypto::Gkm::Group

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group> > group;
        
}; // Native::Crypto::Gkm


class Native::Crypto::Gkm::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ipv6; //type: empty
        YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gkm::Group::Client
        class Identity; //type: Native::Crypto::Gkm::Group::Identity
        class Server; //type: Native::Crypto::Gkm::Group::Server
        class Default_; //type: Native::Crypto::Gkm::Group::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Identity> identity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server> server;
        
}; // Native::Crypto::Gkm::Group


class Native::Crypto::Gkm::Group::Client : public Entity
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

        YLeaf bypass_policy; //type: empty
        YLeaf transport_encrypt_key; //type: TransportEncryptKeyEnum
        YLeafList transform_sets; //type: list of  string
        class Protocol; //type: Native::Crypto::Gkm::Group::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gkm::Group::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gkm::Group::Client::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Client::Rekey
        class Status; //type: Native::Crypto::Gkm::Group::Client::Status

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::RecoveryCheck> recovery_check;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Status> status;
                class TransportEncryptKeyEnum;

}; // Native::Crypto::Gkm::Group::Client


class Native::Crypto::Gkm::Group::Client::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gdoi; //type: empty
        YLeaf gikev2; //type: string

}; // Native::Crypto::Gkm::Group::Client::Protocol


class Native::Crypto::Gkm::Group::Client::RecoveryCheck : public Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Crypto::Gkm::Group::Client::RecoveryCheck


class Native::Crypto::Gkm::Group::Client::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Crypto::Gkm::Group::Client::Registration


class Native::Crypto::Gkm::Group::Client::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encryption; //type: Native::Crypto::Gkm::Group::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gkm::Group::Client::Rekey::Hash

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Rekey::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Rekey::Hash> hash;
        
}; // Native::Crypto::Gkm::Group::Client::Rekey


class Native::Crypto::Gkm::Group::Client::Rekey::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rekey_3des_cbc; //type: empty
        YLeaf aes_128; //type: empty
        YLeaf aes_192; //type: empty
        YLeaf aes_256; //type: empty
        YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gkm::Group::Client::Rekey::Encryption


class Native::Crypto::Gkm::Group::Client::Rekey::Hash : public Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sha; //type: empty
        YLeaf sha256; //type: empty
        YLeaf sha384; //type: empty
        YLeaf sha512; //type: empty

}; // Native::Crypto::Gkm::Group::Client::Rekey::Hash


class Native::Crypto::Gkm::Group::Client::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActiveSa; //type: Native::Crypto::Gkm::Group::Client::Status::ActiveSa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Status::ActiveSa> active_sa;
        
}; // Native::Crypto::Gkm::Group::Client::Status


class Native::Crypto::Gkm::Group::Client::Status::ActiveSa : public Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf track; //type: uint16

}; // Native::Crypto::Gkm::Group::Client::Status::ActiveSa


class Native::Crypto::Gkm::Group::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint64
        class Address; //type: Native::Crypto::Gkm::Group::Identity::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Identity::Address> address;
        
}; // Native::Crypto::Gkm::Group::Identity


class Native::Crypto::Gkm::Group::Identity::Address : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Identity::Address


class Native::Crypto::Gkm::Group::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Gkm::Group::Server::Address
        class Hostname; //type: Native::Crypto::Gkm::Group::Server::Hostname
        class Local; //type: Native::Crypto::Gkm::Group::Server::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local> local;
        
}; // Native::Crypto::Gkm::Group::Server


class Native::Crypto::Gkm::Group::Server::Address : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Crypto::Gkm::Group::Server::Address


class Native::Crypto::Gkm::Group::Server::Hostname : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Hostname


class Native::Crypto::Gkm::Group::Server::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gdoi; //type: empty
        YLeaf gikev2; //type: string
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Address
        class Authorization; //type: Native::Crypto::Gkm::Group::Server::Local::Authorization
        class Group_; //type: Native::Crypto::Gkm::Group::Server::Local::Group_
        class Identifier; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier
        class Redundancy; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy
        class Registration; //type: Native::Crypto::Gkm::Group::Server::Local::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey
        class Sa; //type: Native::Crypto::Gkm::Group::Server::Local::Sa
        class Default_; //type: Native::Crypto::Gkm::Group::Server::Local::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Group_> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier> identifier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa> sa;
        
}; // Native::Crypto::Gkm::Group::Server::Local


class Native::Crypto::Gkm::Group::Server::Local::Address : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Address


class Native::Crypto::Gkm::Group::Server::Local::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identity; //type: string
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Authorization::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Authorization::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Authorization


class Native::Crypto::Gkm::Group::Server::Local::Authorization::Address : public Entity
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

        YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gkm::Group::Server::Local::Authorization::Address


class Native::Crypto::Gkm::Group::Server::Local::Group_ : public Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Size; //type: Native::Crypto::Gkm::Group::Server::Local::Group_::Size

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Group_::Size> size;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Group_


class Native::Crypto::Gkm::Group::Server::Local::Group_::Size : public Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf large; //type: empty
        YLeaf medium; //type: empty
        YLeaf small; //type: SmallEnum
        class SmallEnum;

}; // Native::Crypto::Gkm::Group::Server::Local::Group_::Size


class Native::Crypto::Gkm::Group::Server::Local::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8
        class Default_; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_
        class Range; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier::Range> range;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Identifier


class Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_ : public Entity
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

        YLeaf value_; //type: uint8
        class Range; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range> range;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_


class Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lowest; //type: uint8
        YLeaf hyphen; //type: empty
        YLeaf highest; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Identifier::Default_::Range


class Native::Crypto::Gkm::Group::Server::Local::Identifier::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lowest; //type: uint8
        YLeaf hyphen; //type: empty
        YLeaf highest; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Identifier::Range


class Native::Crypto::Gkm::Group::Server::Local::Redundancy : public Entity
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

        class Default_; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_
        class Local_; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_
        class Peer; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer
        class Protocol; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_> local; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_ : public Entity
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

        class Local_; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_
        class Peer; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer
        class Protocol; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_> local; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_ : public Entity
{
    public:
        Local_();
        ~Local_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Local_


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer : public Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Peer::Address


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pdu; //type: uint32
        YLeaf version; //type: VersionEnum
        class VersionEnum;

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_ : public Entity
{
    public:
        Local_();
        ~Local_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer : public Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pdu; //type: uint32
        YLeaf version; //type: VersionEnum
        class VersionEnum;

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol


class Native::Crypto::Gkm::Group::Server::Local::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        class Periodic; //type: Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Registration


class Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crl; //type: Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic


class Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl : public Entity
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

        YLeaf trustpoint; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl


class Native::Crypto::Gkm::Group::Server::Local::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acknowledgement; //type: AcknowledgementEnum
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm> algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash> sig_hash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport> transport;
                class AcknowledgementEnum;

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Address : public Entity
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

        YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Address


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm : public Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf a3des_cbc; //type: empty
        YLeaf aes_128; //type: empty
        YLeaf aes_192; //type: empty
        YLeaf aes_256; //type: empty
        YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication : public Entity
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

        class Mypubkey; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey> mypubkey;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey : public Entity
{
    public:
        Mypubkey();
        ~Mypubkey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsa; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime : public Entity
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
        YLeaf seconds; //type: uint64

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf number; //type: uint8
        YLeaf periodic; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit


class Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash : public Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf algorithm; //type: AlgorithmEnum
        class AlgorithmEnum;

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport


class Native::Crypto::Gkm::Group::Server::Local::Sa : public Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive_only; //type: empty
        class D3P; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::D3P
        class Ipsec; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::D3P> d3p;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec> > ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying> pair_wise_keying;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa


class Native::Crypto::Gkm::Group::Server::Local::Sa::D3P : public Entity
{
    public:
        D3P();
        ~D3P();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Window; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window> window;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::D3P


class Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window : public Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: uint32
        YLeaf sec; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::D3P::Window


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec : public Entity
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

        YLeaf sequence; //type: uint16
        YLeaf profile; //type: string
        class Default_; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_
        class Match; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match
        class Replay; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay
        class Tag; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay> replay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag> tag;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_ : public Entity
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

        YLeaf profile; //type: empty
        class Match; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match
        class Replay; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay
        class Tag; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay> replay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag> tag; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match : public Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address> address; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address : public Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Match::Address


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay : public Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Replay


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default_::Tag


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match : public Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address : public Entity
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

        YLeaf ipv4; //type: one of uint16, string
        YLeaf ipv6; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay : public Entity
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

        class Counter; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter
        class Time; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time> time; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window_size; //type: WindowSizeEnum
        class WindowSizeEnum;

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time : public Entity
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

        YLeaf window_size; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cts; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts> cts;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts : public Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts


class Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying : public Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf safety_limit; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying


class Native::Crypto::Gkm::Group::Server::Local::Default_ : public Entity
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

        YLeaf gdoi; //type: empty
        YLeaf gikev2; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Address
        class Authorization; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization
        class Group_; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Group_
        class Identifier; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier
        class Redundancy; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy
        class Registration; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey
        class Sa; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Sa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Address> address; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Group_> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier> identifier; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy> redundancy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Sa> sa;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_


class Native::Crypto::Gkm::Group::Server::Local::Default_::Address : public Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Address


class Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identity; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization


class Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address : public Entity
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

        YLeaf ipv4; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Authorization::Address


class Native::Crypto::Gkm::Group::Server::Local::Default_::Group_ : public Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Size; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size> size; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Group_


class Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size : public Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Group_::Size


class Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Identifier


class Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy : public Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Redundancy


class Native::Crypto::Gkm::Group::Server::Local::Default_::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        class Periodic; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Registration


class Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crl; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic


class Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl : public Entity
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

        YLeaf trustpoint; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Registration::Periodic::Crl


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acknowledgement; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address> address; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm> algorithm; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit> retransmit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash> sig_hash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport> transport;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address : public Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Address


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm : public Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Algorithm


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication : public Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Authentication


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime : public Entity
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
        YLeaf seconds; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Lifetime


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Retransmit


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash : public Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf algorithm; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::SigHash


class Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Rekey::Transport


class Native::Crypto::Gkm::Group::Server::Local::Default_::Sa : public Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive_only; //type: empty
        class D3P; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P
        class Ipsec; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P> d3p; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec> > ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying> pair_wise_keying; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Sa


class Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P : public Entity
{
    public:
        D3P();
        ~D3P();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::D3P


class Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec : public Entity
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

        YLeaf sequence; //type: uint16

}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::Ipsec


class Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying : public Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default_::Sa::PairWiseKeying


class Native::Crypto::Gkm::Group::Default_ : public Entity
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

        YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gkm::Group::Default_::Client
        class Identity; //type: Native::Crypto::Gkm::Group::Default_::Identity
        class Server; //type: Native::Crypto::Gkm::Group::Default_::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Identity> identity; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Server> server;
        
}; // Native::Crypto::Gkm::Group::Default_


class Native::Crypto::Gkm::Group::Default_::Client : public Entity
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

        YLeaf bypass_policy; //type: empty
        YLeaf transform_sets; //type: empty
        YLeaf transport_encrypt_key; //type: TransportEncryptKeyEnum
        class Protocol; //type: Native::Crypto::Gkm::Group::Default_::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gkm::Group::Default_::Client::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Default_::Client::Rekey
        class Status; //type: Native::Crypto::Gkm::Group::Default_::Client::Status

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Protocol> protocol; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck> recovery_check; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Status> status;
                class TransportEncryptKeyEnum;

}; // Native::Crypto::Gkm::Group::Default_::Client


class Native::Crypto::Gkm::Group::Default_::Client::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Default_::Client::Protocol


class Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck : public Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Default_::Client::RecoveryCheck


class Native::Crypto::Gkm::Group::Default_::Client::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::Crypto::Gkm::Group::Default_::Client::Registration


class Native::Crypto::Gkm::Group::Default_::Client::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encryption; //type: Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption> encryption; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash> hash; // presence node
        
}; // Native::Crypto::Gkm::Group::Default_::Client::Rekey


class Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Default_::Client::Rekey::Encryption


class Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash : public Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Default_::Client::Rekey::Hash


class Native::Crypto::Gkm::Group::Default_::Client::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActiveSa; //type: Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa> active_sa; // presence node
        
}; // Native::Crypto::Gkm::Group::Default_::Client::Status


class Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa : public Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Default_::Client::Status::ActiveSa


class Native::Crypto::Gkm::Group::Default_::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gkm::Group::Default_::Identity


class Native::Crypto::Gkm::Group::Default_::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Default_::Server::Address
        class Hostname; //type: Native::Crypto::Gkm::Group::Default_::Server::Hostname

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default_::Server::Hostname> hostname;
        
}; // Native::Crypto::Gkm::Group::Default_::Server


class Native::Crypto::Gkm::Group::Default_::Server::Address : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Default_::Server::Address


class Native::Crypto::Gkm::Group::Default_::Server::Hostname : public Entity
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

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Default_::Server::Hostname


class Native::Crypto::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf dn; //type: string
        YLeaf fqdn; //type: string
        class Default_; //type: Native::Crypto::Identity::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Identity::Default_> default_;
        
}; // Native::Crypto::Identity


class Native::Crypto::Identity::Default_ : public Entity
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
        YLeaf dn; //type: string
        YLeaf fqdn; //type: string

}; // Native::Crypto::Identity::Default_


class Native::Crypto::Ipsec : public Entity
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

        YLeaf df_bit; //type: DfBitEnum
        YLeaf fragmentation; //type: FragmentationEnum
        YLeaf ipv4_deny; //type: Ipv4DenyEnum
        YLeaf nat_transparency; //type: NatTransparencyEnum
        class Optional; //type: Native::Crypto::Ipsec::Optional
        class Profile; //type: Native::Crypto::Ipsec::Profile
        class SecurityAssociation; //type: Native::Crypto::Ipsec::SecurityAssociation
        class TransformSet; //type: Native::Crypto::Ipsec::TransformSet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Optional> optional; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile> > profile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation> security_association;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet> > transform_set;
                class DfBitEnum;
        class FragmentationEnum;
        class Ipv4DenyEnum;
        class NatTransparencyEnum;

}; // Native::Crypto::Ipsec


class Native::Crypto::Ipsec::Optional : public Entity
{
    public:
        Optional();
        ~Optional();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retry; //type: uint32

}; // Native::Crypto::Ipsec::Optional


class Native::Crypto::Ipsec::Profile : public Entity
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

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf responder_only; //type: empty
        class Default_; //type: Native::Crypto::Ipsec::Profile::Default_
        class Dialer; //type: Native::Crypto::Ipsec::Profile::Dialer
        class Redundancy; //type: Native::Crypto::Ipsec::Profile::Redundancy
        class Set; //type: Native::Crypto::Ipsec::Profile::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Dialer> dialer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set> set;
        
}; // Native::Crypto::Ipsec::Profile


class Native::Crypto::Ipsec::Profile::Default_ : public Entity
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
        YLeaf redundancy; //type: empty
        YLeaf responder_only; //type: empty
        class Dialer; //type: Native::Crypto::Ipsec::Profile::Default_::Dialer
        class Set; //type: Native::Crypto::Ipsec::Profile::Default_::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Dialer> dialer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set> set;
        
}; // Native::Crypto::Ipsec::Profile::Default_


class Native::Crypto::Ipsec::Profile::Default_::Dialer : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Default_::Dialer


class Native::Crypto::Ipsec::Profile::Default_::Set : public Entity
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
        YLeaf mixed_mode; //type: empty
        YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::Ipsec::Profile::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation
        class SecurityPolicy; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation> security_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy> security_policy;
        
}; // Native::Crypto::Ipsec::Profile::Default_::Set


class Native::Crypto::Ipsec::Profile::Default_::Set::Pfs : public Entity
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


}; // Native::Crypto::Ipsec::Profile::Default_::Set::Pfs


class Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute : public Entity
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


}; // Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation : public Entity
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
        class Dummy; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay> replay;
                class LevelEnum;

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy : public Entity
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


}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime

class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::ConfigExchange::SetEnum : public Enum
{
    public:
        static const Enum::YLeaf accept;
        static const Enum::YLeaf send;

};

class Native::Crypto::Ikev2::Profile::Dpd::QueryEnum : public Enum
{
    public:
        static const Enum::YLeaf on_demand;
        static const Enum::YLeaf periodic;

};

class Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Pki::UseEnum : public Enum
{
    public:
        static const Enum::YLeaf sign;
        static const Enum::YLeaf verify;

};

class Native::Crypto::Ikev2::Profile::VirtualTemplate::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;

};

class Native::Crypto::Ikev2::Redirect::GatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf auth;
        static const Enum::YLeaf init;

};

class Native::Crypto::Gkm::Group::Client::TransportEncryptKeyEnum : public Enum
{
    public:
        static const Enum::YLeaf group_key;
        static const Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Gkm::Group::Server::Local::Group_::Size::SmallEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_12;
        static const Enum::YLeaf Y_16;
        static const Enum::YLeaf Y_8;

};

class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default_::Protocol::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf optimize;

};

class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf optimize;

};

class Native::Crypto::Gkm::Group::Server::Local::Rekey::AcknowledgementEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf interoperable;

};

class Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::AlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf sha;
        static const Enum::YLeaf sha256;
        static const Enum::YLeaf sha384;
        static const Enum::YLeaf sha512;

};

class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1024;
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_64;

};

class Native::Crypto::Gkm::Group::Default_::Client::TransportEncryptKeyEnum : public Enum
{
    public:
        static const Enum::YLeaf group_key;
        static const Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Ipsec::DfBitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Crypto::Ipsec::FragmentationEnum : public Enum
{
    public:
        static const Enum::YLeaf after_encryption;
        static const Enum::YLeaf before_encryption;

};

class Native::Crypto::Ipsec::Ipv4DenyEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf jump;

};

class Native::Crypto::Ipsec::NatTransparencyEnum : public Enum
{
    public:
        static const Enum::YLeaf spi_matching;
        static const Enum::YLeaf udp_encapsulation;

};

class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf per_host;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_78_ */

