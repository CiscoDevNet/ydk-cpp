#ifndef _CISCO_IOS_XE_NATIVE_11_
#define _CISCO_IOS_XE_NATIVE_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint : public ydk::Entity
{
    public:
        ClientEndpoint();
        ~ClientEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fqdn; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf user_fqdn; //type: string

}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf authentication; //type: Authentication
        ydk::YLeaf group; //type: Group
        ydk::YLeaf hash; //type: Hash
        ydk::YLeaf lifetime; //type: uint32
        class Default_; //type: Native::Crypto::Isakmp::Policy::Default_
        class Encryption; //type: Native::Crypto::Isakmp::Policy::Encryption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Encryption> encryption;
                class Authentication;
        class Group;
        class Hash;

}; // Native::Crypto::Isakmp::Policy


class Native::Crypto::Isakmp::Policy::Default_ : public ydk::Entity
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

        ydk::YLeaf authentication; //type: Authentication
        ydk::YLeaf group; //type: Group
        ydk::YLeaf hash; //type: Hash
        ydk::YLeaf lifetime; //type: empty
        class Encryption; //type: Native::Crypto::Isakmp::Policy::Default_::Encryption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Default_::Encryption> encryption;
                class Authentication;
        class Group;
        class Hash;

}; // Native::Crypto::Isakmp::Policy::Default_


class Native::Crypto::Isakmp::Policy::Default_::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf a3des; //type: empty
        ydk::YLeaf des; //type: empty
        class Aes; //type: Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes> aes; // presence node
        
}; // Native::Crypto::Isakmp::Policy::Default_::Encryption


class Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes : public ydk::Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key
        class Key;

}; // Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes


class Native::Crypto::Isakmp::Policy::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf a3des; //type: empty
        ydk::YLeaf des; //type: empty
        class Aes; //type: Native::Crypto::Isakmp::Policy::Encryption::Aes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Encryption::Aes> aes; // presence node
        
}; // Native::Crypto::Isakmp::Policy::Encryption


class Native::Crypto::Isakmp::Policy::Encryption::Aes : public ydk::Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: Key
        class Key;

}; // Native::Crypto::Isakmp::Policy::Encryption::Aes


class Native::Crypto::Isakmp::Profile : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf accounting; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf keyring; //type: one of string, enumeration
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vrf; //type: string
        class Default_; //type: Native::Crypto::Isakmp::Profile::Default_
        class Ca; //type: Native::Crypto::Isakmp::Profile::Ca
        class Client; //type: Native::Crypto::Isakmp::Profile::Client
        class Initiate; //type: Native::Crypto::Isakmp::Profile::Initiate
        class Isakmp_; //type: Native::Crypto::Isakmp::Profile::Isakmp_
        class Keepalive; //type: Native::Crypto::Isakmp::Profile::Keepalive
        class Match; //type: Native::Crypto::Isakmp::Profile::Match
        class SelfIdentity; //type: Native::Crypto::Isakmp::Profile::SelfIdentity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Ca> ca;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Initiate> initiate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Isakmp_> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity> self_identity;
                class Keyring;

}; // Native::Crypto::Isakmp::Profile


class Native::Crypto::Isakmp::Profile::Ca : public ydk::Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust_point; //type: string

}; // Native::Crypto::Isakmp::Profile::Ca


class Native::Crypto::Isakmp::Profile::Client : public ydk::Entity
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

        class Authentication; //type: Native::Crypto::Isakmp::Profile::Client::Authentication
        class Configuration; //type: Native::Crypto::Isakmp::Profile::Client::Configuration
        class Pki; //type: Native::Crypto::Isakmp::Profile::Client::Pki

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Configuration> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Pki> pki;
        
}; // Native::Crypto::Isakmp::Profile::Client


class Native::Crypto::Isakmp::Profile::Client::Authentication : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Profile::Client::Authentication


class Native::Crypto::Isakmp::Profile::Client::Configuration : public ydk::Entity
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

        ydk::YLeaf address; //type: Address
        ydk::YLeaf group; //type: string
        class Address;

}; // Native::Crypto::Isakmp::Profile::Client::Configuration


class Native::Crypto::Isakmp::Profile::Client::Pki : public ydk::Entity
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

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Client::Pki::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Pki::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Client::Pki


class Native::Crypto::Isakmp::Profile::Client::Pki::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

}; // Native::Crypto::Isakmp::Profile::Client::Pki::Authorization


class Native::Crypto::Isakmp::Profile::Default_ : public ydk::Entity
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

        ydk::YLeaf accounting; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf keyring; //type: one of string, enumeration
        ydk::YLeaf local_address; //type: empty
        ydk::YLeaf qos_group; //type: empty
        ydk::YLeaf virtual_template; //type: empty
        ydk::YLeaf vrf; //type: empty
        class Ca; //type: Native::Crypto::Isakmp::Profile::Default_::Ca
        class Client; //type: Native::Crypto::Isakmp::Profile::Default_::Client
        class Initiate; //type: Native::Crypto::Isakmp::Profile::Default_::Initiate
        class Isakmp_; //type: Native::Crypto::Isakmp::Profile::Default_::Isakmp_
        class Keepalive; //type: Native::Crypto::Isakmp::Profile::Default_::Keepalive
        class Match; //type: Native::Crypto::Isakmp::Profile::Default_::Match
        class SelfIdentity; //type: Native::Crypto::Isakmp::Profile::Default_::SelfIdentity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Ca> ca;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Initiate> initiate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Isakmp_> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Keepalive> keepalive; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::SelfIdentity> self_identity; // presence node
                class Keyring;

}; // Native::Crypto::Isakmp::Profile::Default_


class Native::Crypto::Isakmp::Profile::Default_::Ca : public ydk::Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust_point; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Ca


class Native::Crypto::Isakmp::Profile::Default_::Client : public ydk::Entity
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

        class Authentication; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Authentication
        class Configuration; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Configuration
        class Pki; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Pki

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Configuration> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Pki> pki;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Client


class Native::Crypto::Isakmp::Profile::Default_::Client::Authentication : public ydk::Entity
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

        ydk::YLeaf list; //type: empty

}; // Native::Crypto::Isakmp::Profile::Default_::Client::Authentication


class Native::Crypto::Isakmp::Profile::Default_::Client::Configuration : public ydk::Entity
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

        ydk::YLeaf address; //type: Address
        ydk::YLeaf group; //type: string
        class Address;

}; // Native::Crypto::Isakmp::Profile::Default_::Client::Configuration


class Native::Crypto::Isakmp::Profile::Default_::Client::Pki : public ydk::Entity
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

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization> authorization; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Default_::Client::Pki


class Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization


class Native::Crypto::Isakmp::Profile::Default_::Initiate : public ydk::Entity
{
    public:
        Initiate();
        ~Initiate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode> mode; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Default_::Initiate


class Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode : public ydk::Entity
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


}; // Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode


class Native::Crypto::Isakmp::Profile::Default_::Isakmp_ : public ydk::Entity
{
    public:
        Isakmp_();
        ~Isakmp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Isakmp_


class Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: empty

}; // Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization


class Native::Crypto::Isakmp::Profile::Default_::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Isakmp::Profile::Default_::Keepalive


class Native::Crypto::Isakmp::Profile::Default_::Match : public ydk::Entity
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

        ydk::YLeaf certificate; //type: string
        class Identity; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity> identity;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

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
        class Ipv4Address; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address
        class Address; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address
        class Host; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host
        class UserFqdn; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address : public ydk::Entity
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

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch> domain_match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn : public ydk::Entity
{
    public:
        UserFqdn();
        ~UserFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch> domain_match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName


class Native::Crypto::Isakmp::Profile::Default_::SelfIdentity : public ydk::Entity
{
    public:
        SelfIdentity();
        ~SelfIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Isakmp::Profile::Default_::SelfIdentity


class Native::Crypto::Isakmp::Profile::Initiate : public ydk::Entity
{
    public:
        Initiate();
        ~Initiate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Crypto::Isakmp::Profile::Initiate::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Initiate::Mode> mode; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Initiate


class Native::Crypto::Isakmp::Profile::Initiate::Mode : public ydk::Entity
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

        ydk::YLeaf aggressive; //type: empty

}; // Native::Crypto::Isakmp::Profile::Initiate::Mode


class Native::Crypto::Isakmp::Profile::Isakmp_ : public ydk::Entity
{
    public:
        Isakmp_();
        ~Isakmp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Isakmp_::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Isakmp_::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Isakmp_


class Native::Crypto::Isakmp::Profile::Isakmp_::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

}; // Native::Crypto::Isakmp::Profile::Isakmp_::Authorization


class Native::Crypto::Isakmp::Profile::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf retry; //type: uint8

}; // Native::Crypto::Isakmp::Profile::Keepalive


class Native::Crypto::Isakmp::Profile::Match : public ydk::Entity
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

        ydk::YLeaf certificate; //type: string
        class Identity; //type: Native::Crypto::Isakmp::Profile::Match::Identity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity> identity;
        
}; // Native::Crypto::Isakmp::Profile::Match


class Native::Crypto::Isakmp::Profile::Match::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

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
        class Ipv4Address; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address
        class Address; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Address
        class Host; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host
        class UserFqdn; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity


class Native::Crypto::Isakmp::Profile::Match::Identity::Address : public ydk::Entity
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

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Address


class Native::Crypto::Isakmp::Profile::Match::Identity::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch> domain_match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host


class Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch


class Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName


class Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn : public ydk::Entity
{
    public:
        UserFqdn();
        ~UserFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch> domain_match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch : public ydk::Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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

}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName


class Native::Crypto::Isakmp::Profile::SelfIdentity : public ydk::Entity
{
    public:
        SelfIdentity();
        ~SelfIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_fqdn; //type: string
        class Address; //type: Native::Crypto::Isakmp::Profile::SelfIdentity::Address
        class Fqdn; //type: Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn> fqdn; // presence node
        
}; // Native::Crypto::Isakmp::Profile::SelfIdentity


class Native::Crypto::Isakmp::Profile::SelfIdentity::Address : public ydk::Entity
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

        ydk::YLeaf ipv6; //type: empty

}; // Native::Crypto::Isakmp::Profile::SelfIdentity::Address


class Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn : public ydk::Entity
{
    public:
        Fqdn();
        ~Fqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn


class Native::Crypto::Isakmp::Xauth : public ydk::Entity
{
    public:
        Xauth();
        ~Xauth();

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

        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Isakmp::Xauth


class Native::Crypto::Key : public ydk::Entity
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

        ydk::YLeaf storage; //type: string
        class Decrypt; //type: Native::Crypto::Key::Decrypt
        class Encrypt; //type: Native::Crypto::Key::Encrypt
        class Export_; //type: Native::Crypto::Key::Export_
        class Generate; //type: Native::Crypto::Key::Generate
        class Import; //type: Native::Crypto::Key::Import
        class Move; //type: Native::Crypto::Key::Move
        class PubkeyChain; //type: Native::Crypto::Key::PubkeyChain
        class Zeroize; //type: Native::Crypto::Key::Zeroize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt> decrypt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt> encrypt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate> generate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Move> move;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain> pubkey_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize> zeroize;
        
}; // Native::Crypto::Key


class Native::Crypto::Key::Decrypt : public ydk::Entity
{
    public:
        Decrypt();
        ~Decrypt();

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

        class Ec; //type: Native::Crypto::Key::Decrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Rsa
        class Write; //type: Native::Crypto::Key::Decrypt::Write

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Rsa> rsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write> write;
        
}; // Native::Crypto::Key::Decrypt


class Native::Crypto::Key::Decrypt::Ec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Ec


class Native::Crypto::Key::Decrypt::Rsa : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Rsa


class Native::Crypto::Key::Decrypt::Write : public ydk::Entity
{
    public:
        Write();
        ~Write();

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

        class Ec; //type: Native::Crypto::Key::Decrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Write::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Decrypt::Write


class Native::Crypto::Key::Decrypt::Write::Ec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Ec


class Native::Crypto::Key::Decrypt::Write::Rsa : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Rsa


class Native::Crypto::Key::Encrypt : public ydk::Entity
{
    public:
        Encrypt();
        ~Encrypt();

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

        class Ec; //type: Native::Crypto::Key::Encrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Rsa
        class Write; //type: Native::Crypto::Key::Encrypt::Write

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Rsa> rsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write> write;
        
}; // Native::Crypto::Key::Encrypt


class Native::Crypto::Key::Encrypt::Ec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Ec


class Native::Crypto::Key::Encrypt::Rsa : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Rsa


class Native::Crypto::Key::Encrypt::Write : public ydk::Entity
{
    public:
        Write();
        ~Write();

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

        class Ec; //type: Native::Crypto::Key::Encrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Write::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Encrypt::Write


class Native::Crypto::Key::Encrypt::Write::Ec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Write::Ec


class Native::Crypto::Key::Encrypt::Write::Rsa : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Write::Rsa


class Native::Crypto::Key::Export_ : public ydk::Entity
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

        class Ec; //type: Native::Crypto::Key::Export_::Ec
        class Rsa; //type: Native::Crypto::Key::Export_::Rsa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec> > ec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa> > rsa;
        
}; // Native::Crypto::Key::Export_


class Native::Crypto::Key::Export_::Ec : public ydk::Entity
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
        class Pem; //type: Native::Crypto::Key::Export_::Ec::Pem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem> pem;
        
}; // Native::Crypto::Key::Export_::Ec


class Native::Crypto::Key::Export_::Ec::Pem : public ydk::Entity
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

        class Terminal; //type: Native::Crypto::Key::Export_::Ec::Pem::Terminal
        class Url; //type: Native::Crypto::Key::Export_::Ec::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem::Terminal> terminal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem::Url> url;
        
}; // Native::Crypto::Key::Export_::Ec::Pem


class Native::Crypto::Key::Export_::Ec::Pem::Terminal : public ydk::Entity
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

        ydk::YLeaf pk_3des; //type: string
        ydk::YLeaf des; //type: string

}; // Native::Crypto::Key::Export_::Ec::Pem::Terminal


class Native::Crypto::Key::Export_::Ec::Pem::Url : public ydk::Entity
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
        ydk::YLeaf url_3des; //type: string
        ydk::YLeaf des; //type: string
        class File;

}; // Native::Crypto::Key::Export_::Ec::Pem::Url


class Native::Crypto::Key::Export_::Rsa : public ydk::Entity
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
        class Pem; //type: Native::Crypto::Key::Export_::Rsa::Pem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem> pem;
        
}; // Native::Crypto::Key::Export_::Rsa


class Native::Crypto::Key::Export_::Rsa::Pem : public ydk::Entity
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

        class Terminal; //type: Native::Crypto::Key::Export_::Rsa::Pem::Terminal
        class Url; //type: Native::Crypto::Key::Export_::Rsa::Pem::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem::Terminal> terminal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem::Url> url;
        
}; // Native::Crypto::Key::Export_::Rsa::Pem


class Native::Crypto::Key::Export_::Rsa::Pem::Terminal : public ydk::Entity
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

        ydk::YLeaf pk_3des; //type: string
        ydk::YLeaf des; //type: string

}; // Native::Crypto::Key::Export_::Rsa::Pem::Terminal


class Native::Crypto::Key::Export_::Rsa::Pem::Url : public ydk::Entity
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
        ydk::YLeaf url_3des; //type: string
        ydk::YLeaf des; //type: string
        class File;

}; // Native::Crypto::Key::Export_::Rsa::Pem::Url


class Native::Crypto::Key::Generate : public ydk::Entity
{
    public:
        Generate();
        ~Generate();

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

        class Ec; //type: Native::Crypto::Key::Generate::Ec
        class Rsa; //type: Native::Crypto::Key::Generate::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate::Ec> ec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Generate


class Native::Crypto::Key::Generate::Ec : public ydk::Entity
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

        ydk::YLeaf keysize; //type: Keysize
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf label; //type: string
        class Keysize;

}; // Native::Crypto::Key::Generate::Ec


class Native::Crypto::Key::Generate::Rsa : public ydk::Entity
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

        ydk::YLeaf encryption; //type: empty
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf general_keys; //type: empty
        ydk::YLeaf label; //type: string
        ydk::YLeaf modulus; //type: uint16
        ydk::YLeaf on; //type: string
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf signature; //type: empty
        ydk::YLeaf storage; //type: string
        ydk::YLeaf usage_keys; //type: empty

}; // Native::Crypto::Key::Generate::Rsa


class Native::Crypto::Key::Import : public ydk::Entity
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

        class Ec; //type: Native::Crypto::Key::Import::Ec
        class Rsa; //type: Native::Crypto::Key::Import::Rsa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Ec> > ec;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Rsa> > rsa;
        
}; // Native::Crypto::Key::Import


class Native::Crypto::Key::Import::Ec : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf terminal; //type: string
        class Url; //type: Native::Crypto::Key::Import::Ec::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Ec::Url> url;
        
}; // Native::Crypto::Key::Import::Ec


class Native::Crypto::Key::Import::Ec::Url : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class File;

}; // Native::Crypto::Key::Import::Ec::Url


class Native::Crypto::Key::Import::Rsa : public ydk::Entity
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
        ydk::YLeaf encryption; //type: empty
        ydk::YLeaf exportable; //type: empty
        ydk::YLeaf general_purpose; //type: empty
        ydk::YLeaf on; //type: string
        ydk::YLeaf pem; //type: empty
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf signature; //type: empty
        ydk::YLeaf storage; //type: string
        ydk::YLeaf usage_keys; //type: empty
        ydk::YLeaf terminal; //type: string
        class Url; //type: Native::Crypto::Key::Import::Rsa::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import::Rsa::Url> url;
        
}; // Native::Crypto::Key::Import::Rsa


class Native::Crypto::Key::Import::Rsa::Url : public ydk::Entity
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
        ydk::YLeaf key; //type: string
        class File;

}; // Native::Crypto::Key::Import::Rsa::Url


class Native::Crypto::Key::Move : public ydk::Entity
{
    public:
        Move();
        ~Move();

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

        class Rsa; //type: Native::Crypto::Key::Move::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Move::Rsa> rsa;
        
}; // Native::Crypto::Key::Move


class Native::Crypto::Key::Move::Rsa : public ydk::Entity
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
        ydk::YLeaf non_exportable; //type: empty
        ydk::YLeaf on; //type: string
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf storage; //type: string

}; // Native::Crypto::Key::Move::Rsa


class Native::Crypto::Key::PubkeyChain : public ydk::Entity
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

        class Rsa; //type: Native::Crypto::Key::PubkeyChain::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa> rsa;
        
}; // Native::Crypto::Key::PubkeyChain


class Native::Crypto::Key::PubkeyChain::Rsa : public ydk::Entity
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

        class AddressedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey
        class NamedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey> > addressed_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey> > named_key;
        
}; // Native::Crypto::Key::PubkeyChain::Rsa


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey : public ydk::Entity
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
        ydk::YLeaf address; //type: string
        ydk::YLeaf serial_number; //type: string
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString> key_string;
                class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_ : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        ydk::YLeaf serial_number; //type: empty
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString> key_string; // presence node
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString : public ydk::Entity
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


}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString : public ydk::Entity
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

        ydk::YLeaf hex_data; //type: string
        ydk::YLeaf quit; //type: empty

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AddressedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey
        class NamedKey; //type: Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey> > addressed_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey> > named_key;
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::Default_


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


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey : public ydk::Entity
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
        ydk::YLeaf address; //type: string
        ydk::YLeaf serial_number; //type: string
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString
        class Default_; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString> key_string;
                class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_ : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        ydk::YLeaf serial_number; //type: empty
        class KeyString; //type: Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString> key_string; // presence node
        
}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString : public ydk::Entity
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


}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString


class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString : public ydk::Entity
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

        ydk::YLeaf hex_data; //type: string
        ydk::YLeaf quit; //type: empty

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString


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

        ydk::YLeaf address; //type: one of string, uint16

}; // Native::Crypto::MapIpv6Gdoi::Map::Match


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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Export_> > export_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Import> > import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Profile> profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Token> token;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint> > trustpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpool> trustpool;
        
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

class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Policy::Authentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_share;
        static const ydk::Enum::YLeaf rsa_encr;
        static const ydk::Enum::YLeaf rsa_sig;

};

class Native::Crypto::Isakmp::Policy::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_14;
        static const ydk::Enum::YLeaf Y_15;
        static const ydk::Enum::YLeaf Y_16;
        static const ydk::Enum::YLeaf Y_19;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_20;
        static const ydk::Enum::YLeaf Y_21;
        static const ydk::Enum::YLeaf Y_24;
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Crypto::Isakmp::Policy::Hash : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;
        static const ydk::Enum::YLeaf sha256;
        static const ydk::Enum::YLeaf sha384;
        static const ydk::Enum::YLeaf sha512;

};

class Native::Crypto::Isakmp::Policy::Default_::Authentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_share;
        static const ydk::Enum::YLeaf rsa_encr;
        static const ydk::Enum::YLeaf rsa_sig;

};

class Native::Crypto::Isakmp::Policy::Default_::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_14;
        static const ydk::Enum::YLeaf Y_15;
        static const ydk::Enum::YLeaf Y_16;
        static const ydk::Enum::YLeaf Y_19;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_20;
        static const ydk::Enum::YLeaf Y_21;
        static const ydk::Enum::YLeaf Y_24;
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Crypto::Isakmp::Policy::Default_::Hash : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;
        static const ydk::Enum::YLeaf sha256;
        static const ydk::Enum::YLeaf sha384;
        static const ydk::Enum::YLeaf sha512;

};

class Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_192;
        static const ydk::Enum::YLeaf Y_256;

};

class Native::Crypto::Isakmp::Policy::Encryption::Aes::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_192;
        static const ydk::Enum::YLeaf Y_256;

};

class Native::Crypto::Isakmp::Profile::Keyring : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Crypto::Isakmp::Profile::Client::Configuration::Address : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initiate;
        static const ydk::Enum::YLeaf respond;

};

class Native::Crypto::Isakmp::Profile::Default_::Keyring : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::Address : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initiate;
        static const ydk::Enum::YLeaf respond;

};

class Native::Crypto::Key::Export_::Ec::Pem::Url::File : public ydk::Enum
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

class Native::Crypto::Key::Export_::Rsa::Pem::Url::File : public ydk::Enum
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

class Native::Crypto::Key::Generate::Ec::Keysize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_384;

};

class Native::Crypto::Key::Import::Ec::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf cns__COLON__;
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
        static const ydk::Enum::YLeaf tar__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::Import::Rsa::Url::File : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf cns__COLON__;
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
        static const ydk::Enum::YLeaf tar__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};

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

class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use : public ydk::Enum
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

class Native::Crypto::MapIpv6Gdoi::Map::Gdoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail_close;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_11_ */

