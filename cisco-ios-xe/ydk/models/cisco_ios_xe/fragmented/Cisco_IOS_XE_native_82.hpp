#ifndef _CISCO_IOS_XE_NATIVE_82_
#define _CISCO_IOS_XE_NATIVE_82_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_81.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Ipsec::SecurityAssociation::Replay : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Ipsec::SecurityAssociation::Replay


class Native::Crypto::Ipsec::TransformSet : public ydk::Entity
{
    public:
        TransformSet();
        ~TransformSet();

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
        ydk::YLeaf ah_hmac; //type: AhHmac
        ydk::YLeaf comp_lzs; //type: empty
        ydk::YLeaf esp; //type: Esp
        ydk::YLeaf key_bit; //type: KeyBit
        ydk::YLeaf esp_hmac; //type: EspHmac
        class Default_; //type: Native::Crypto::Ipsec::TransformSet::Default_
        class Mode; //type: Native::Crypto::Ipsec::TransformSet::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode> mode;
                class AhHmac;
        class Esp;
        class KeyBit;
        class EspHmac;

}; // Native::Crypto::Ipsec::TransformSet


class Native::Crypto::Ipsec::TransformSet::Default_ : public ydk::Entity
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

        ydk::YLeaf mode; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Default_


class Native::Crypto::Ipsec::TransformSet::Mode : public ydk::Entity
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

        ydk::YLeaf tunnel; //type: empty
        class Transport; //type: Native::Crypto::Ipsec::TransformSet::Mode::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode::Transport> transport; // presence node
        
}; // Native::Crypto::Ipsec::TransformSet::Mode


class Native::Crypto::Ipsec::TransformSet::Mode::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf require; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Mode::Transport


class Native::Crypto::Isakmp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf aggressive_mode; //type: AggressiveMode
        ydk::YLeaf disconnect_revoked_peers; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf fragmentation; //type: empty
        ydk::YLeaf identity; //type: Identity
        ydk::YLeaf invalid_spi_recovery; //type: empty
        class Client; //type: Native::Crypto::Isakmp::Client
        class Default_; //type: Native::Crypto::Isakmp::Default_
        class Keepalive; //type: Native::Crypto::Isakmp::Keepalive
        class Key; //type: Native::Crypto::Isakmp::Key
        class Nat; //type: Native::Crypto::Isakmp::Nat
        class Peer; //type: Native::Crypto::Isakmp::Peer
        class Policy; //type: Native::Crypto::Isakmp::Policy
        class Profile; //type: Native::Crypto::Isakmp::Profile
        class Xauth; //type: Native::Crypto::Isakmp::Xauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer> peer;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy> > policy;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile> > profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Xauth> xauth;
                class AggressiveMode;
        class Identity;

}; // Native::Crypto::Isakmp


class Native::Crypto::Isakmp::Client : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Configuration; //type: Native::Crypto::Isakmp::Client::Configuration
        class Firewall; //type: Native::Crypto::Isakmp::Client::Firewall

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration> configuration;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall> > firewall;
        
}; // Native::Crypto::Isakmp::Client


class Native::Crypto::Isakmp::Client::Configuration : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf browser_proxy; //type: string
        class AddressPool; //type: Native::Crypto::Isakmp::Client::Configuration::AddressPool
        class Group; //type: Native::Crypto::Isakmp::Client::Configuration::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::AddressPool> address_pool;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group> > group;
        
}; // Native::Crypto::Isakmp::Client::Configuration


class Native::Crypto::Isakmp::Client::Configuration::AddressPool : public ydk::Entity
{
    public:
        AddressPool();
        ~AddressPool();

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

        ydk::YLeaf local; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::AddressPool


class Native::Crypto::Isakmp::Client::Configuration::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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
        ydk::YLeaf access_restrict; //type: string
        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf backup_gateway; //type: string
        ydk::YLeaf browser_proxy; //type: string
        ydk::YLeaf domain; //type: string
        ydk::YLeaf group_lock; //type: empty
        ydk::YLeaf include_local_lan; //type: empty
        ydk::YLeaf max_logins; //type: uint8
        ydk::YLeaf max_users; //type: uint32
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf pfs; //type: empty
        ydk::YLeaf pool; //type: string
        ydk::YLeaf save_password; //type: empty
        ydk::YLeaf smartcard_removal_disconnect; //type: empty
        ydk::YLeaf split_dns; //type: string
        class AutoUpdate; //type: Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate
        class Configuration_; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_
        class Crypto_; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_
        class Dhcp; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp
        class Dns; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Dns
        class Firewall; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Firewall
        class Key; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Key
        class Wins; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Wins

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate> auto_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Firewall> firewall;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Wins> wins;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group


class Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate : public ydk::Entity
{
    public:
        AutoUpdate();
        ~AutoUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client; //type: string
        ydk::YLeaf url; //type: string
        ydk::YLeaf rev; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate


class Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_ : public ydk::Entity
{
    public:
        Configuration_();
        ~Configuration_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: Url
        ydk::YLeaf version; //type: uint32
        class Url;

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_ : public ydk::Entity
{
    public:
        Crypto_();
        ~Crypto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aaa; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa> aaa;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attribute; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute> attribute;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute


class Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf giaddr; //type: string
        ydk::YLeaf server; //type: string
        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp


class Native::Crypto::Isakmp::Client::Configuration::Group::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Dns


class Native::Crypto::Isakmp::Client::Configuration::Group::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf are_u_there; //type: empty
        ydk::YLeaf policy; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Firewall


class Native::Crypto::Isakmp::Client::Configuration::Group::Key : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Key


class Native::Crypto::Isakmp::Client::Configuration::Group::Wins : public ydk::Entity
{
    public:
        Wins();
        ~Wins();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Wins


class Native::Crypto::Isakmp::Client::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf optional; //type: Optional
        ydk::YLeaf required; //type: Required
        class Policy; //type: Native::Crypto::Isakmp::Client::Firewall::Policy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy> policy;
                class Optional;
        class Required;

}; // Native::Crypto::Isakmp::Client::Firewall


class Native::Crypto::Isakmp::Client::Firewall::Policy : public ydk::Entity
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

        ydk::YLeaf check_presence; //type: empty
        class CentralPolicyPush; //type: Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush> central_policy_push;
        
}; // Native::Crypto::Isakmp::Client::Firewall::Policy


class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush : public ydk::Entity
{
    public:
        CentralPolicyPush();
        ~CentralPolicyPush();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessList; //type: Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList> access_list;
        
}; // Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush


class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf acl; //type: one of uint16, string
        class Direction;

}; // Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList


class Native::Crypto::Isakmp::Default_ : public ydk::Entity
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

        ydk::YLeaf policy; //type: empty

}; // Native::Crypto::Isakmp::Default_


class Native::Crypto::Isakmp::Keepalive : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf retry_number; //type: uint8
        ydk::YLeaf send; //type: Send
        class Send;

}; // Native::Crypto::Isakmp::Keepalive


class Native::Crypto::Isakmp::Key : public ydk::Entity
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

        class KeyAddress; //type: Native::Crypto::Isakmp::Key::KeyAddress
        class KeyHost; //type: Native::Crypto::Isakmp::Key::KeyHost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress> key_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyHost> key_host;
        
}; // Native::Crypto::Isakmp::Key


class Native::Crypto::Isakmp::Key::KeyAddress : public ydk::Entity
{
    public:
        KeyAddress();
        ~KeyAddress();

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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Addr4Container; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container
        class Addr6Container; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container> addr4_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container> addr6_container;
                class Encryption;

}; // Native::Crypto::Isakmp::Key::KeyAddress


class Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container : public ydk::Entity
{
    public:
        Addr4Container();
        ~Addr4Container();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container


class Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container : public ydk::Entity
{
    public:
        Addr6Container();
        ~Addr6Container();

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

        class Address; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address> address;
        
}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container


class Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address


class Native::Crypto::Isakmp::Key::KeyHost : public ydk::Entity
{
    public:
        KeyHost();
        ~KeyHost();

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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class HostContainer; //type: Native::Crypto::Isakmp::Key::KeyHost::HostContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyHost::HostContainer> host_container;
                class Encryption;

}; // Native::Crypto::Isakmp::Key::KeyHost


class Native::Crypto::Isakmp::Key::KeyHost::HostContainer : public ydk::Entity
{
    public:
        HostContainer();
        ~HostContainer();

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

        ydk::YLeaf hostname; //type: string
        ydk::YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyHost::HostContainer


class Native::Crypto::Isakmp::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

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

        ydk::YLeaf keepalive; //type: uint16

}; // Native::Crypto::Isakmp::Nat


class Native::Crypto::Isakmp::Peer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv4Addr; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr
        class Ipv6Addr; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr
        class Hostname; //type: Native::Crypto::Isakmp::Peer::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr> ipv4_addr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr> ipv6_addr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname> > hostname;
        
}; // Native::Crypto::Isakmp::Peer


class Native::Crypto::Isakmp::Peer::Ipv4Addr : public ydk::Entity
{
    public:
        Ipv4Addr();
        ~Ipv4Addr();

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

        class Address; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address> > address;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set : public ydk::Entity
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

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode : public ydk::Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Peer::Ipv6Addr : public ydk::Entity
{
    public:
        Ipv6Addr();
        ~Ipv6Addr();

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

        class Address; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address> > address;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set : public ydk::Entity
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

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode : public ydk::Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode


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


class Native::Crypto::Isakmp::Peer::Hostname : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Hostname::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Hostname


class Native::Crypto::Isakmp::Peer::Hostname::Set : public ydk::Entity
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

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Hostname::Set


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode : public ydk::Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password : public ydk::Entity
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

}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Ca> ca;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Initiate> initiate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Isakmp_> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity> self_identity;
                class Keyring;

}; // Native::Crypto::Isakmp::Profile


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName> domain_name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch> domain_match;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn


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
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey> > named_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::Default_> default_;
        
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString> key_string;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_> default_;
                class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString> key_string;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_> default_;
                class Use;

}; // Native::Crypto::Key::PubkeyChain::Rsa::NamedKey


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

class Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::TransformSet::AhHmac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ah_md5_hmac;
        static const ydk::Enum::YLeaf ah_sha_hmac;
        static const ydk::Enum::YLeaf ah_sha256_hmac;
        static const ydk::Enum::YLeaf ah_sha384_hmac;
        static const ydk::Enum::YLeaf ah_sha512_hmac;

};

class Native::Crypto::Ipsec::TransformSet::Esp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esp_3des;
        static const ydk::Enum::YLeaf esp_aes;
        static const ydk::Enum::YLeaf esp_des;
        static const ydk::Enum::YLeaf esp_gcm;
        static const ydk::Enum::YLeaf esp_gmac;
        static const ydk::Enum::YLeaf esp_null;
        static const ydk::Enum::YLeaf esp_seal;

};

class Native::Crypto::Ipsec::TransformSet::KeyBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_192;
        static const ydk::Enum::YLeaf Y_256;

};

class Native::Crypto::Ipsec::TransformSet::EspHmac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esp_md5_hmac;
        static const ydk::Enum::YLeaf esp_sha_hmac;
        static const ydk::Enum::YLeaf esp_sha256_hmac;
        static const ydk::Enum::YLeaf esp_sha384_hmac;
        static const ydk::Enum::YLeaf esp_sha512_hmac;

};

class Native::Crypto::Isakmp::AggressiveMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::Isakmp::Identity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf dn;
        static const ydk::Enum::YLeaf hostname;

};

class Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url : public ydk::Enum
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

class Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Client::Firewall::Optional : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_integrated_client_firewall;
        static const ydk::Enum::YLeaf cisco_security_agent;
        static const ydk::Enum::YLeaf zonelabs_zonealarm;
        static const ydk::Enum::YLeaf zonelabs_zonealarmpro;

};

class Native::Crypto::Isakmp::Client::Firewall::Required : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_integrated_client_firewall;
        static const ydk::Enum::YLeaf cisco_security_agent;
        static const ydk::Enum::YLeaf zonelabs_zonealarm;
        static const ydk::Enum::YLeaf zonelabs_zonealarmpro;

};

class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Crypto::Isakmp::Keepalive::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf periodic;

};

class Native::Crypto::Isakmp::Key::KeyAddress::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Key::KeyHost::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption : public ydk::Enum
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

class Native::Crypto::Isakmp::Profile::Client::Configuration::Address : public ydk::Enum
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

class Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encryption;
        static const ydk::Enum::YLeaf signature;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_82_ */

