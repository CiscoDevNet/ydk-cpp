#ifndef _CISCO_IOS_XE_NATIVE_83_
#define _CISCO_IOS_XE_NATIVE_83_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_82.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey : public ydk::Entity
{
    public:
        AddressedKey();
        ~AddressedKey();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf use; //type: Use
        class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey


class Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey : public ydk::Entity
{
    public:
        NamedKey();
        ~NamedKey();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf use; //type: Use
        class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey


class Native::Crypto::Key::Zeroize : public ydk::Entity
{
    public:
        Zeroize();
        ~Zeroize();

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

        class Ec; //type: Native::Crypto::Key::Zeroize::Ec
        class PubkeyChain; //type: Native::Crypto::Key::Zeroize::PubkeyChain
        class Rsa; //type: Native::Crypto::Key::Zeroize::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::PubkeyChain> pubkey_chain; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Zeroize


class Native::Crypto::Key::Zeroize::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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

        ydk::YLeaf label; //type: string

}; // Native::Crypto::Key::Zeroize::Ec


class Native::Crypto::Key::Zeroize::PubkeyChain : public ydk::Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

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

        ydk::YLeaf index_; //type: uint16

}; // Native::Crypto::Key::Zeroize::PubkeyChain


class Native::Crypto::Key::Zeroize::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf label; //type: string

}; // Native::Crypto::Key::Zeroize::Rsa


class Native::Crypto::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_address; //type: string
        class Default_; //type: Native::Crypto::Keyring::Default_
        class PreSharedKey; //type: Native::Crypto::Keyring::PreSharedKey
        class RsaPubkey; //type: Native::Crypto::Keyring::RsaPubkey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey> pre_shared_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey> rsa_pubkey;
        
}; // Native::Crypto::Keyring


class Native::Crypto::Keyring::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf local_address; //type: string
        class PreSharedKey; //type: Native::Crypto::Keyring::Default_::PreSharedKey
        class RsaPubkey; //type: Native::Crypto::Keyring::Default_::RsaPubkey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey> pre_shared_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey> rsa_pubkey;
        
}; // Native::Crypto::Keyring::Default_


class Native::Crypto::Keyring::Default_::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address
        class Hostname; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Hostname> > hostname;
        
}; // Native::Crypto::Keyring::Default_::PreSharedKey


class Native::Crypto::Keyring::Default_::PreSharedKey::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4
        class Ipv6; //type: Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6> > ipv6;
        
}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address


class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4


class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6


class Native::Crypto::Keyring::Default_::PreSharedKey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::Default_::PreSharedKey::Hostname


class Native::Crypto::Keyring::Default_::RsaPubkey : public ydk::Entity
{
    public:
        RsaPubkey();
        ~RsaPubkey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addr; //type: Native::Crypto::Keyring::Default_::RsaPubkey::Addr
        class Hostname; //type: Native::Crypto::Keyring::Default_::RsaPubkey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey::Addr> addr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::Default_::RsaPubkey::Hostname> hostname;
        
}; // Native::Crypto::Keyring::Default_::RsaPubkey


class Native::Crypto::Keyring::Default_::RsaPubkey::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::Default_::RsaPubkey::Addr


class Native::Crypto::Keyring::Default_::RsaPubkey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::Default_::RsaPubkey::Hostname


class Native::Crypto::Keyring::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Crypto::Keyring::PreSharedKey::Address
        class Hostname; //type: Native::Crypto::Keyring::PreSharedKey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Hostname> > hostname;
        
}; // Native::Crypto::Keyring::PreSharedKey


class Native::Crypto::Keyring::PreSharedKey::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Crypto::Keyring::PreSharedKey::Address::Ipv4
        class Ipv6; //type: Native::Crypto::Keyring::PreSharedKey::Address::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address::Ipv4> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::PreSharedKey::Address::Ipv6> > ipv6;
        
}; // Native::Crypto::Keyring::PreSharedKey::Address


class Native::Crypto::Keyring::PreSharedKey::Address::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::PreSharedKey::Address::Ipv4


class Native::Crypto::Keyring::PreSharedKey::Address::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::PreSharedKey::Address::Ipv6


class Native::Crypto::Keyring::PreSharedKey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf unencryt_key; //type: string
        class Encryption;

}; // Native::Crypto::Keyring::PreSharedKey::Hostname


class Native::Crypto::Keyring::RsaPubkey : public ydk::Entity
{
    public:
        RsaPubkey();
        ~RsaPubkey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Addr; //type: Native::Crypto::Keyring::RsaPubkey::Addr
        class Hostname; //type: Native::Crypto::Keyring::RsaPubkey::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey::Addr> addr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Keyring::RsaPubkey::Hostname> hostname;
        
}; // Native::Crypto::Keyring::RsaPubkey


class Native::Crypto::Keyring::RsaPubkey::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::RsaPubkey::Addr


class Native::Crypto::Keyring::RsaPubkey::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf way; //type: Way
        class Way;

}; // Native::Crypto::Keyring::RsaPubkey::Hostname


class Native::Crypto::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf ikev2; //type: empty
        ydk::YLeaf session; //type: empty
        class Ezvpn; //type: Native::Crypto::Logging::Ezvpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Logging::Ezvpn> ezvpn; // presence node
        
}; // Native::Crypto::Logging


class Native::Crypto::Logging::Ezvpn : public ydk::Entity
{
    public:
        Ezvpn();
        ~Ezvpn();

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

        ydk::YLeaf group; //type: string

}; // Native::Crypto::Logging::Ezvpn


class Native::Crypto::CryptoMap : public ydk::Entity
{
    public:
        CryptoMap();
        ~CryptoMap();

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

        class Map; //type: Native::Crypto::CryptoMap::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map> > map;
        
}; // Native::Crypto::CryptoMap


class Native::Crypto::CryptoMap::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf sequence_number; //type: uint16
        ydk::YLeaf keying; //type: Keying
        ydk::YLeaf dynamic; //type: string
        ydk::YLeaf profile; //type: string
        ydk::YLeaf description; //type: string
        class Default_; //type: Native::Crypto::CryptoMap::Map::Default_
        class Dialer; //type: Native::Crypto::CryptoMap::Map::Dialer
        class Match; //type: Native::Crypto::CryptoMap::Map::Match
        class Qos; //type: Native::Crypto::CryptoMap::Map::Qos
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::ReverseRoute
        class Set; //type: Native::Crypto::CryptoMap::Map::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set> set;
                class Keying;

}; // Native::Crypto::CryptoMap::Map


class Native::Crypto::CryptoMap::Map::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: empty
        class Dialer; //type: Native::Crypto::CryptoMap::Map::Default_::Dialer
        class Match; //type: Native::Crypto::CryptoMap::Map::Default_::Match
        class Qos; //type: Native::Crypto::CryptoMap::Map::Default_::Qos
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Default_::ReverseRoute
        class Set; //type: Native::Crypto::CryptoMap::Map::Default_::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set> set;
        
}; // Native::Crypto::CryptoMap::Map::Default_


class Native::Crypto::CryptoMap::Map::Default_::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Dialer


class Native::Crypto::CryptoMap::Map::Default_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Match


class Native::Crypto::CryptoMap::Map::Default_::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Qos


class Native::Crypto::CryptoMap::Map::Default_::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::ReverseRoute


class Native::Crypto::CryptoMap::Map::Default_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: empty
        ydk::YLeaf identity; //type: empty
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: empty
        ydk::YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::CryptoMap::Map::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::CryptoMap::Map::Default_::Set


class Native::Crypto::CryptoMap::Map::Default_::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::Pfs


class Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay> replay;
                class Level;

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: empty
        ydk::YLeaf kilobytes; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime


class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: empty

}; // Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::CryptoMap::Map::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Dialer


class Native::Crypto::CryptoMap::Map::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: one of uint16, string

}; // Native::Crypto::CryptoMap::Map::Match


class Native::Crypto::CryptoMap::Map::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::CryptoMap::Map::Qos


class Native::Crypto::CryptoMap::Map::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        class RemotePeerConatiner; //type: Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner> remote_peer_conatiner;
        
}; // Native::Crypto::CryptoMap::Map::ReverseRoute


class Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner : public ydk::Entity
{
    public:
        RemotePeerConatiner();
        ~RemotePeerConatiner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_peer; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf static_; //type: empty

}; // Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner


class Native::Crypto::CryptoMap::Map::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf identity; //type: string
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::CryptoMap::Map::Set::Peer
        class Pfs; //type: Native::Crypto::CryptoMap::Map::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::CryptoMap::Map::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::ReverseRoute> reverse_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::CryptoMap::Map::Set


class Native::Crypto::CryptoMap::Map::Set::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf dynamic; //type: empty

}; // Native::Crypto::CryptoMap::Map::Set::Peer


class Native::Crypto::CryptoMap::Map::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Crypto::CryptoMap::Map::Set::Pfs


class Native::Crypto::CryptoMap::Map::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf tag; //type: uint64

}; // Native::Crypto::CryptoMap::Map::Set::ReverseRoute


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: Dfbit
        ydk::YLeaf ecn; //type: Ecn
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay> replay;
                class Dfbit;
        class Ecn;
        class Level;

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime


class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay


class Native::Crypto::MapIpv6Gdoi : public ydk::Entity
{
    public:
        MapIpv6Gdoi();
        ~MapIpv6Gdoi();

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

        class Map; //type: Native::Crypto::MapIpv6Gdoi::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map> > map;
        
}; // Native::Crypto::MapIpv6Gdoi


class Native::Crypto::MapIpv6Gdoi::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf gdoi; //type: Gdoi
        ydk::YLeaf activate; //type: empty
        class Default_; //type: Native::Crypto::MapIpv6Gdoi::Map::Default_
        class Match; //type: Native::Crypto::MapIpv6Gdoi::Map::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Match> match;
                class Gdoi;

}; // Native::Crypto::MapIpv6Gdoi::Map


class Native::Crypto::MapIpv6Gdoi::Map::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf activate; //type: empty
        class Match; //type: Native::Crypto::MapIpv6Gdoi::Map::Default_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi::Map::Default_::Match> match;
        
}; // Native::Crypto::MapIpv6Gdoi::Map::Default_


class Native::Crypto::MapIpv6Gdoi::Map::Default_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Crypto::MapIpv6Gdoi::Map::Default_::Match


class Native::Crypto::MapIpv6Gdoi::Map::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: one of uint16, string

}; // Native::Crypto::MapIpv6Gdoi::Map::Match


class Native::Crypto::MapClient : public ydk::Entity
{
    public:
        MapClient();
        ~MapClient();

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

        class Map; //type: Native::Crypto::MapClient::Map

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map> > map;
        
}; // Native::Crypto::MapClient


class Native::Crypto::MapClient::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeaf local_address; //type: string
        class Client; //type: Native::Crypto::MapClient::Map::Client
        class Isakmp; //type: Native::Crypto::MapClient::Map::Isakmp
        class Redundancy; //type: Native::Crypto::MapClient::Map::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Redundancy> redundancy;
        
}; // Native::Crypto::MapClient::Map


class Native::Crypto::MapClient::Map::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: Native::Crypto::MapClient::Map::Client::Accounting
        class Authentication; //type: Native::Crypto::MapClient::Map::Client::Authentication
        class Configuration; //type: Native::Crypto::MapClient::Map::Client::Configuration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Configuration> configuration;
        
}; // Native::Crypto::MapClient::Map::Client


class Native::Crypto::MapClient::Map::Client::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Client::Accounting


class Native::Crypto::MapClient::Map::Client::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Client::Authentication


class Native::Crypto::MapClient::Map::Client::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Crypto::MapClient::Map::Client::Configuration::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Client::Configuration::Address> address;
        
}; // Native::Crypto::MapClient::Map::Client::Configuration


class Native::Crypto::MapClient::Map::Client::Configuration::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initiate; //type: empty
        ydk::YLeaf respond; //type: empty

}; // Native::Crypto::MapClient::Map::Client::Configuration::Address


class Native::Crypto::MapClient::Map::Isakmp : public ydk::Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authorization; //type: empty
        ydk::YLeaf list; //type: string

}; // Native::Crypto::MapClient::Map::Isakmp


class Native::Crypto::MapClient::Map::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReplayInterval; //type: Native::Crypto::MapClient::Map::Redundancy::ReplayInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::MapClient::Map::Redundancy::ReplayInterval> replay_interval;
        
}; // Native::Crypto::MapClient::Map::Redundancy


class Native::Crypto::MapClient::Map::Redundancy::ReplayInterval : public ydk::Entity
{
    public:
        ReplayInterval();
        ~ReplayInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inbound; //type: uint32
        ydk::YLeaf outbound; //type: uint32

}; // Native::Crypto::MapClient::Map::Redundancy::ReplayInterval


class Native::Crypto::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        class Ipsec; //type: Native::Crypto::Mib::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec> ipsec;
        
}; // Native::Crypto::Mib


class Native::Crypto::Mib::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

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

        class Flowmib; //type: Native::Crypto::Mib::Ipsec::Flowmib

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib> flowmib;
        
}; // Native::Crypto::Mib::Ipsec


class Native::Crypto::Mib::Ipsec::Flowmib : public ydk::Entity
{
    public:
        Flowmib();
        ~Flowmib();

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

        class History; //type: Native::Crypto::Mib::Ipsec::Flowmib::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib::History> history;
        
}; // Native::Crypto::Mib::Ipsec::Flowmib


class Native::Crypto::Mib::Ipsec::Flowmib::History : public ydk::Entity
{
    public:
        History();
        ~History();

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

        class Failure; //type: Native::Crypto::Mib::Ipsec::Flowmib::History::Failure
        class Tunnel; //type: Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib::History::Failure> failure;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel> tunnel;
        
}; // Native::Crypto::Mib::Ipsec::Flowmib::History


class Native::Crypto::Mib::Ipsec::Flowmib::History::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

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

        ydk::YLeaf size; //type: uint8

}; // Native::Crypto::Mib::Ipsec::Flowmib::History::Failure


class Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf size; //type: uint8

}; // Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel


class Native::Crypto::Pki : public ydk::Entity
{
    public:
        Pki();
        ~Pki();

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

        ydk::YLeaf authenticate; //type: string
        ydk::YLeaf enroll; //type: string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate> certificate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl> crl;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_> > export_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import> > import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile> profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server> server;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint> > trustpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Token> token;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpool> trustpool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Default_> default_;
        
}; // Native::Crypto::Pki


class Native::Crypto::Pki::Certificate : public ydk::Entity
{
    public:
        Certificate();
        ~Certificate();

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

        ydk::YLeaf pool; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf validate; //type: string
        class Chain; //type: Native::Crypto::Pki::Certificate::Chain
        class Map; //type: Native::Crypto::Pki::Certificate::Map
        class Storage; //type: Native::Crypto::Pki::Certificate::Storage

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Chain> > chain;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map> > map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Storage> storage;
        
}; // Native::Crypto::Pki::Certificate


class Native::Crypto::Pki::Certificate::Chain : public ydk::Entity
{
    public:
        Chain();
        ~Chain();

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

        ydk::YLeaf name; //type: string
        class Certificate_; //type: Native::Crypto::Pki::Certificate::Chain::Certificate_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Chain::Certificate_> > certificate;
        
}; // Native::Crypto::Pki::Certificate::Chain


class Native::Crypto::Pki::Certificate::Chain::Certificate_ : public ydk::Entity
{
    public:
        Certificate_();
        ~Certificate_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial; //type: string
        ydk::YLeaf certtype; //type: Certtype
        class Certtype;

}; // Native::Crypto::Pki::Certificate::Chain::Certificate_


class Native::Crypto::Pki::Certificate::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf sequence; //type: uint16
        class AltSubjectName; //type: Native::Crypto::Pki::Certificate::Map::AltSubjectName
        class ExpiresOn; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn
        class IssuerName; //type: Native::Crypto::Pki::Certificate::Map::IssuerName
        class Name; //type: Native::Crypto::Pki::Certificate::Map::Name
        class SerialNumber; //type: Native::Crypto::Pki::Certificate::Map::SerialNumber
        class SubjectName; //type: Native::Crypto::Pki::Certificate::Map::SubjectName
        class UnstructuredSubjectName; //type: Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName
        class ValidStart; //type: Native::Crypto::Pki::Certificate::Map::ValidStart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::AltSubjectName> alt_subject_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn> expires_on;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::IssuerName> issuer_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::Name> name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::SerialNumber> serial_number;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::SubjectName> subject_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName> unstructured_subject_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart> valid_start;
        
}; // Native::Crypto::Pki::Certificate::Map


class Native::Crypto::Pki::Certificate::Map::AltSubjectName : public ydk::Entity
{
    public:
        AltSubjectName();
        ~AltSubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::AltSubjectName


class Native::Crypto::Pki::Certificate::Map::ExpiresOn : public ydk::Entity
{
    public:
        ExpiresOn();
        ~ExpiresOn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eq; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq
        class Ge; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge
        class Lt; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt
        class Ne; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq> eq;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge> ge;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt> lt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne> ne;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq : public ydk::Entity
{
    public:
        Eq();
        ~Eq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge : public ydk::Entity
{
    public:
        Ge();
        ~Ge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt : public ydk::Entity
{
    public:
        Lt();
        ~Lt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne : public ydk::Entity
{
    public:
        Ne();
        ~Ne();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne


class Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time


class Native::Crypto::Pki::Certificate::Map::IssuerName : public ydk::Entity
{
    public:
        IssuerName();
        ~IssuerName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::IssuerName


class Native::Crypto::Pki::Certificate::Map::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::Name


class Native::Crypto::Pki::Certificate::Map::SerialNumber : public ydk::Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::SerialNumber


class Native::Crypto::Pki::Certificate::Map::SubjectName : public ydk::Entity
{
    public:
        SubjectName();
        ~SubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::SubjectName


class Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName : public ydk::Entity
{
    public:
        UnstructuredSubjectName();
        ~UnstructuredSubjectName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf co; //type: string
        ydk::YLeaf eq; //type: string
        ydk::YLeaf nc; //type: string
        ydk::YLeaf ne; //type: string

}; // Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName


class Native::Crypto::Pki::Certificate::Map::ValidStart : public ydk::Entity
{
    public:
        ValidStart();
        ~ValidStart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eq; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Eq
        class Ge; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ge
        class Lt; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Lt
        class Ne; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ne

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Eq> eq;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ge> ge;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Lt> lt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ne> ne;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart


class Native::Crypto::Pki::Certificate::Map::ValidStart::Eq : public ydk::Entity
{
    public:
        Eq();
        ~Eq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Eq


class Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ge : public ydk::Entity
{
    public:
        Ge();
        ~Ge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ge


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Lt : public ydk::Entity
{
    public:
        Lt();
        ~Lt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Lt


class Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ne : public ydk::Entity
{
    public:
        Ne();
        ~Ne();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Time; //type: Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time> time;
        
}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ne


class Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date1; //type: uint8
        ydk::YLeaf month1; //type: string
        ydk::YLeaf date2; //type: uint8
        ydk::YLeaf month2; //type: string
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf utc; //type: empty

}; // Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time


class Native::Crypto::Pki::Certificate::Storage : public ydk::Entity
{
    public:
        Storage();
        ~Storage();

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

        ydk::YLeaf path; //type: one of string, enumeration
        ydk::YLeaf on; //type: empty
        ydk::YLeaf with_keypair; //type: empty
        class Path;

}; // Native::Crypto::Pki::Certificate::Storage


class Native::Crypto::Pki::Crl : public ydk::Entity
{
    public:
        Crl();
        ~Crl();

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

        ydk::YLeaf request; //type: string
        class Cache; //type: Native::Crypto::Pki::Crl::Cache
        class Download; //type: Native::Crypto::Pki::Crl::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download> download;
        
}; // Native::Crypto::Pki::Crl


class Native::Crypto::Pki::Crl::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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

        ydk::YLeaf size; //type: uint32

}; // Native::Crypto::Pki::Crl::Cache


class Native::Crypto::Pki::Crl::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        ydk::YLeaf trustpoint; //type: string
        class Schedule; //type: Native::Crypto::Pki::Crl::Download::Schedule
        class Url; //type: Native::Crypto::Pki::Crl::Download::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule> schedule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Url> url;
        
}; // Native::Crypto::Pki::Crl::Download


class Native::Crypto::Pki::Crl::Download::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        ydk::YLeaf prepublish; //type: uint16
        class Retries; //type: Native::Crypto::Pki::Crl::Download::Schedule::Retries
        class Time; //type: Native::Crypto::Pki::Crl::Download::Schedule::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule::Retries> retries;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Crl::Download::Schedule::Time> time;
        
}; // Native::Crypto::Pki::Crl::Download::Schedule


class Native::Crypto::Pki::Crl::Download::Schedule::Retries : public ydk::Entity
{
    public:
        Retries();
        ~Retries();

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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf interval; //type: uint16

}; // Native::Crypto::Pki::Crl::Download::Schedule::Retries


class Native::Crypto::Pki::Crl::Download::Schedule::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

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

        ydk::YLeaf date; //type: Date
        ydk::YLeaf clock_; //type: string
        class Date;

}; // Native::Crypto::Pki::Crl::Download::Schedule::Time


class Native::Crypto::Pki::Crl::Download::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Crl::Download::Url


class Native::Crypto::Pki::Export_ : public ydk::Entity
{
    public:
        Export_();
        ~Export_();

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

        ydk::YLeaf name; //type: string
        class Pem; //type: Native::Crypto::Pki::Export_::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Export_::Pkcs12

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem> pem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pkcs12> pkcs12;
        
}; // Native::Crypto::Pki::Export_


class Native::Crypto::Pki::Export_::Pem : public ydk::Entity
{
    public:
        Pem();
        ~Pem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Terminal; //type: Native::Crypto::Pki::Export_::Pem::Terminal
        class Url; //type: Native::Crypto::Pki::Export_::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Terminal> terminal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Url> url;
        
}; // Native::Crypto::Pki::Export_::Pem


class Native::Crypto::Pki::Export_::Pem::Terminal : public ydk::Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rollover; //type: empty
        class Pem3des; //type: Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des
        class Des; //type: Native::Crypto::Pki::Export_::Pem::Terminal::Des

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des> pem_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_::Pem::Terminal::Des> des;
        
}; // Native::Crypto::Pki::Export_::Pem::Terminal


class Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des : public ydk::Entity
{
    public:
        Pem3des();
        ~Pem3des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des


class Native::Crypto::Pki::Export_::Pem::Terminal::Des : public ydk::Entity
{
    public:
        Des();
        ~Des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Export_::Pem::Terminal::Des


class Native::Crypto::Pki::Export_::Pem::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: File
        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf password; //type: string
        class File;
        class Encrypt;

}; // Native::Crypto::Pki::Export_::Pem::Url


class Native::Crypto::Pki::Export_::Pkcs12 : public ydk::Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: File
        ydk::YLeaf password; //type: string
        class File;

}; // Native::Crypto::Pki::Export_::Pkcs12


class Native::Crypto::Pki::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf certificate; //type: empty
        class Pem; //type: Native::Crypto::Pki::Import::Pem
        class Pkcs12; //type: Native::Crypto::Pki::Import::Pkcs12

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem> pem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pkcs12> pkcs12;
        
}; // Native::Crypto::Pki::Import


class Native::Crypto::Pki::Import::Pem : public ydk::Entity
{
    public:
        Pem();
        ~Pem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf check; //type: empty
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf usage_keys; //type: empty
        class Terminal; //type: Native::Crypto::Pki::Import::Pem::Terminal
        class Url; //type: Native::Crypto::Pki::Import::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem::Terminal> terminal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import::Pem::Url> url;
        
}; // Native::Crypto::Pki::Import::Pem


class Native::Crypto::Pki::Import::Pem::Terminal : public ydk::Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string

}; // Native::Crypto::Pki::Import::Pem::Terminal


class Native::Crypto::Pki::Import::Pem::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: File
        ydk::YLeaf password; //type: string
        class File;

}; // Native::Crypto::Pki::Import::Pem::Url


class Native::Crypto::Pki::Import::Pkcs12 : public ydk::Entity
{
    public:
        Pkcs12();
        ~Pkcs12();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file; //type: File
        ydk::YLeaf password; //type: string
        class File;

}; // Native::Crypto::Pki::Import::Pkcs12


class Native::Crypto::Pki::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        class Enrollment; //type: Native::Crypto::Pki::Profile::Enrollment

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment> > enrollment;
        
}; // Native::Crypto::Pki::Profile


class Native::Crypto::Pki::Profile::Enrollment : public ydk::Entity
{
    public:
        Enrollment();
        ~Enrollment();

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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf method_est; //type: empty
        ydk::YLeaf source_interface; //type: string
        class Authentication; //type: Native::Crypto::Pki::Profile::Enrollment::Authentication
        class Enrollment_; //type: Native::Crypto::Pki::Profile::Enrollment::Enrollment_
        class Parameter; //type: Native::Crypto::Pki::Profile::Enrollment::Parameter
        class Reenrollment; //type: Native::Crypto::Pki::Profile::Enrollment::Reenrollment
        class Default_; //type: Native::Crypto::Pki::Profile::Enrollment::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Enrollment_> enrollment;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Parameter> > parameter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Reenrollment> reenrollment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_> default_;
        
}; // Native::Crypto::Pki::Profile::Enrollment


class Native::Crypto::Pki::Profile::Enrollment::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Authentication::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Authentication::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Authentication


class Native::Crypto::Pki::Profile::Enrollment::Authentication::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Authentication::Url


class Native::Crypto::Pki::Profile::Enrollment::Enrollment_ : public ydk::Entity
{
    public:
        Enrollment_();
        ~Enrollment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        ydk::YLeaf credential; //type: string
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Enrollment_


class Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url


class Native::Crypto::Pki::Profile::Enrollment::Parameter : public ydk::Entity
{
    public:
        Parameter();
        ~Parameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf prompt; //type: string
        ydk::YLeaf value_; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Parameter


class Native::Crypto::Pki::Profile::Enrollment::Reenrollment : public ydk::Entity
{
    public:
        Reenrollment();
        ~Reenrollment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Reenrollment


class Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url


class Native::Crypto::Pki::Profile::Enrollment::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_est; //type: empty
        ydk::YLeaf source_interface; //type: string
        class Authentication; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication
        class Enrollment_; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_
        class Parameter; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter
        class Reenrollment; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_> enrollment;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter> > parameter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment> reenrollment;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_


class Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication


class Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url


class Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_ : public ydk::Entity
{
    public:
        Enrollment_();
        ~Enrollment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        ydk::YLeaf credential; //type: string
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_


class Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url


class Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter : public ydk::Entity
{
    public:
        Parameter();
        ~Parameter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf prompt; //type: string
        ydk::YLeaf value_; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter


class Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment : public ydk::Entity
{
    public:
        Reenrollment();
        ~Reenrollment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string
        ydk::YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment


class Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url


class Native::Crypto::Pki::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf rollover; //type: empty
        ydk::YLeaf cancel; //type: empty

}; // Native::Crypto::Pki::Server


class Native::Crypto::Pki::Trustpoint : public ydk::Entity
{
    public:
        Trustpoint();
        ~Trustpoint();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf revocation_check; //type: RevocationCheck
        ydk::YLeaf subject_name; //type: string
        ydk::YLeaf vrf; //type: string
        class AutoEnroll; //type: Native::Crypto::Pki::Trustpoint::AutoEnroll
        class Enrollment; //type: Native::Crypto::Pki::Trustpoint::Enrollment
        class Password; //type: Native::Crypto::Pki::Trustpoint::Password
        class Rsakeypair; //type: Native::Crypto::Pki::Trustpoint::Rsakeypair
        class SerialNumber; //type: Native::Crypto::Pki::Trustpoint::SerialNumber
        class IpAddress; //type: Native::Crypto::Pki::Trustpoint::IpAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::AutoEnroll> auto_enroll;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment> enrollment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Password> password; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Rsakeypair> rsakeypair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::SerialNumber> serial_number; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::IpAddress> ip_address;
                class RevocationCheck;

}; // Native::Crypto::Pki::Trustpoint


class Native::Crypto::Pki::Trustpoint::AutoEnroll : public ydk::Entity
{
    public:
        AutoEnroll();
        ~AutoEnroll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf regenerate; //type: empty

}; // Native::Crypto::Pki::Trustpoint::AutoEnroll


class Native::Crypto::Pki::Trustpoint::Enrollment : public ydk::Entity
{
    public:
        Enrollment();
        ~Enrollment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf http_proxy; //type: string
        ydk::YLeaf pkcs12; //type: empty
        ydk::YLeaf profile; //type: string
        ydk::YLeaf selfsigned; //type: empty
        ydk::YLeaf url; //type: string
        class Mode; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Mode
        class Retry; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Retry
        class Terminal; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Terminal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Retry> retry;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Terminal> terminal; // presence node
        
}; // Native::Crypto::Pki::Trustpoint::Enrollment


class Native::Crypto::Pki::Trustpoint::Enrollment::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ra; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Mode


class Native::Crypto::Pki::Trustpoint::Enrollment::Retry : public ydk::Entity
{
    public:
        Retry();
        ~Retry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf period; //type: uint8

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Retry


class Native::Crypto::Pki::Trustpoint::Enrollment::Terminal : public ydk::Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pem; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Terminal


class Native::Crypto::Pki::Trustpoint::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf clear_password; //type: string

}; // Native::Crypto::Pki::Trustpoint::Password

class Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Keyring::RsaPubkey::Addr::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::Keyring::RsaPubkey::Hostname::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

class Native::Crypto::CryptoMap::Map::Keying : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipsec_isakmp;
        static const ydk::Enum::YLeaf ipsec_manual;
        static const ydk::Enum::YLeaf gdoi;
        static const ydk::Enum::YLeaf ckm;

};

class Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::CryptoMap::Map::Set::Pfs::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group1;
        static const ydk::Enum::YLeaf group14;
        static const ydk::Enum::YLeaf group15;
        static const ydk::Enum::YLeaf group16;
        static const ydk::Enum::YLeaf group19;
        static const ydk::Enum::YLeaf group2;
        static const ydk::Enum::YLeaf group20;
        static const ydk::Enum::YLeaf group21;
        static const ydk::Enum::YLeaf group24;
        static const ydk::Enum::YLeaf group5;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::MapIpv6Gdoi::Map::Gdoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail_close;

};

class Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ca;
        static const ydk::Enum::YLeaf ra_encrypt;
        static const ydk::Enum::YLeaf ra_general;
        static const ydk::Enum::YLeaf ra_sign;
        static const ydk::Enum::YLeaf rollover;
        static const ydk::Enum::YLeaf self_signed;

};

class Native::Crypto::Pki::Certificate::Storage::Path : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;

};

class Native::Crypto::Pki::Crl::Download::Schedule::Time::Date : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Friday;
        static const ydk::Enum::YLeaf Monday;
        static const ydk::Enum::YLeaf Saturday;
        static const ydk::Enum::YLeaf Sunday;
        static const ydk::Enum::YLeaf Thursday;
        static const ydk::Enum::YLeaf Tuesday;
        static const ydk::Enum::YLeaf Wednesday;

};

class Native::Crypto::Pki::Export_::Pem::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Export_::Pem::Url::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_3des;
        static const ydk::Enum::YLeaf des;

};

class Native::Crypto::Pki::Export_::Pkcs12::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Import::Pem::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Import::Pkcs12::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Pki::Trustpoint::RevocationCheck : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf crl;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ocsp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_83_ */

