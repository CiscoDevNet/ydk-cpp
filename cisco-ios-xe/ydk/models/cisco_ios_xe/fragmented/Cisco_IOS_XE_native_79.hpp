#ifndef _CISCO_IOS_XE_NATIVE_79_
#define _CISCO_IOS_XE_NATIVE_79_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_78.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy : public Entity
{
    public:
        SecurityPolicy();
        ~SecurityPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy


class Native::Crypto::Ipsec::Profile::Dialer : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Dialer


class Native::Crypto::Ipsec::Profile::Redundancy : public Entity
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

        YLeaf name; //type: string
        YLeaf stateful; //type: empty

}; // Native::Crypto::Ipsec::Profile::Redundancy


class Native::Crypto::Ipsec::Profile::Set : public Entity
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
        YLeaf mixed_mode; //type: empty
        YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::Ipsec::Profile::Set::Peer
        class Pfs; //type: Native::Crypto::Ipsec::Profile::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::Ipsec::Profile::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation
        class SecurityPolicy; //type: Native::Crypto::Ipsec::Profile::Set::SecurityPolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::Pfs> pfs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::ReverseRoute> reverse_route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation> security_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityPolicy> security_policy;
        
}; // Native::Crypto::Ipsec::Profile::Set


class Native::Crypto::Ipsec::Profile::Set::Peer : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::Peer


class Native::Crypto::Ipsec::Profile::Set::Pfs : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::Pfs


class Native::Crypto::Ipsec::Profile::Set::ReverseRoute : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::ReverseRoute


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation : public Entity
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
        class Dummy; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay> replay;
                class DfbitEnum;
        class EcnEnum;
        class LevelEnum;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay : public Entity
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

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay


class Native::Crypto::Ipsec::Profile::Set::SecurityPolicy : public Entity
{
    public:
        SecurityPolicy();
        ~SecurityPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32

}; // Native::Crypto::Ipsec::Profile::Set::SecurityPolicy


class Native::Crypto::Ipsec::SecurityAssociation : public Entity
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

        YLeaf ecn; //type: EcnEnum
        YLeaf idle_time; //type: uint32
        class Dummy; //type: Native::Crypto::Ipsec::SecurityAssociation::Dummy
        class Lifetime; //type: Native::Crypto::Ipsec::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Replay> replay;
                class EcnEnum;

}; // Native::Crypto::Ipsec::SecurityAssociation


class Native::Crypto::Ipsec::SecurityAssociation::Dummy : public Entity
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

}; // Native::Crypto::Ipsec::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::SecurityAssociation::Lifetime : public Entity
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

}; // Native::Crypto::Ipsec::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::SecurityAssociation::Replay : public Entity
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

}; // Native::Crypto::Ipsec::SecurityAssociation::Replay


class Native::Crypto::Ipsec::TransformSet : public Entity
{
    public:
        TransformSet();
        ~TransformSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string
        YLeaf ah_hmac; //type: AhHmacEnum
        YLeaf comp_lzs; //type: empty
        YLeaf esp; //type: EspEnum
        YLeaf key_bit; //type: KeyBitEnum
        YLeaf esp_hmac; //type: EspHmacEnum
        class Default_; //type: Native::Crypto::Ipsec::TransformSet::Default_
        class Mode; //type: Native::Crypto::Ipsec::TransformSet::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode> mode;
                class AhHmacEnum;
        class EspEnum;
        class KeyBitEnum;
        class EspHmacEnum;

}; // Native::Crypto::Ipsec::TransformSet


class Native::Crypto::Ipsec::TransformSet::Default_ : public Entity
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

        YLeaf mode; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Default_


class Native::Crypto::Ipsec::TransformSet::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel; //type: empty
        class Transport; //type: Native::Crypto::Ipsec::TransformSet::Mode::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode::Transport> transport; // presence node
        
}; // Native::Crypto::Ipsec::TransformSet::Mode


class Native::Crypto::Ipsec::TransformSet::Mode::Transport : public Entity
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

        YLeaf require; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Mode::Transport


class Native::Crypto::Isakmp : public Entity
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

        YLeaf aggressive_mode; //type: AggressiveModeEnum
        YLeaf disconnect_revoked_peers; //type: empty
        YLeaf enable; //type: empty
        YLeaf fragmentation; //type: empty
        YLeaf identity; //type: IdentityEnum
        YLeaf invalid_spi_recovery; //type: empty
        class Client; //type: Native::Crypto::Isakmp::Client
        class Default_; //type: Native::Crypto::Isakmp::Default_
        class Keepalive; //type: Native::Crypto::Isakmp::Keepalive
        class Key; //type: Native::Crypto::Isakmp::Key
        class Nat; //type: Native::Crypto::Isakmp::Nat
        class Peer; //type: Native::Crypto::Isakmp::Peer
        class Policy; //type: Native::Crypto::Isakmp::Policy
        class Profile; //type: Native::Crypto::Isakmp::Profile
        class Xauth; //type: Native::Crypto::Isakmp::Xauth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key> key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer> peer;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy> > policy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile> > profile;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Xauth> xauth;
                class AggressiveModeEnum;
        class IdentityEnum;

}; // Native::Crypto::Isakmp


class Native::Crypto::Isakmp::Client : public Entity
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

        class Configuration; //type: Native::Crypto::Isakmp::Client::Configuration
        class Firewall; //type: Native::Crypto::Isakmp::Client::Firewall

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration> configuration;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall> > firewall;
        
}; // Native::Crypto::Isakmp::Client


class Native::Crypto::Isakmp::Client::Configuration : public Entity
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

        YLeaf browser_proxy; //type: string
        class AddressPool; //type: Native::Crypto::Isakmp::Client::Configuration::AddressPool
        class Group; //type: Native::Crypto::Isakmp::Client::Configuration::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::AddressPool> address_pool;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group> > group;
        
}; // Native::Crypto::Isakmp::Client::Configuration


class Native::Crypto::Isakmp::Client::Configuration::AddressPool : public Entity
{
    public:
        AddressPool();
        ~AddressPool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::AddressPool


class Native::Crypto::Isakmp::Client::Configuration::Group : public Entity
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
        YLeaf access_restrict; //type: string
        YLeaf acl; //type: one of uint16, string
        YLeaf backup_gateway; //type: string
        YLeaf banner; //type: string
        YLeaf browser_proxy; //type: string
        YLeaf domain; //type: string
        YLeaf group_lock; //type: empty
        YLeaf include_local_lan; //type: empty
        YLeaf max_logins; //type: uint8
        YLeaf max_users; //type: uint32
        YLeaf netmask; //type: string
        YLeaf pfs; //type: empty
        YLeaf pool; //type: string
        YLeaf save_password; //type: empty
        YLeaf smartcard_removal_disconnect; //type: empty
        YLeaf split_dns; //type: string
        class AutoUpdate; //type: Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate
        class Configuration_; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_
        class Crypto_; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_
        class Dhcp; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp
        class Dns; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Dns
        class Firewall; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Firewall
        class Key; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Key
        class Wins; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Wins

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate> auto_update;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_> configuration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Dns> dns;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Firewall> firewall;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Key> key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Wins> wins;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group


class Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate : public Entity
{
    public:
        AutoUpdate();
        ~AutoUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client; //type: string
        YLeaf url; //type: string
        YLeaf rev; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate


class Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_ : public Entity
{
    public:
        Configuration_();
        ~Configuration_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf url; //type: UrlEnum
        YLeaf version; //type: uint32
        class UrlEnum;

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_ : public Entity
{
    public:
        Crypto_();
        ~Crypto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aaa; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa> aaa;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa : public Entity
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

        class Attribute; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute> attribute;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute


class Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf giaddr; //type: string
        YLeaf server; //type: string
        YLeaf timeout; //type: uint8

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp


class Native::Crypto::Isakmp::Client::Configuration::Group::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: string
        YLeaf secondary; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Dns


class Native::Crypto::Isakmp::Client::Configuration::Group::Firewall : public Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf are_u_there; //type: empty
        YLeaf policy; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Firewall


class Native::Crypto::Isakmp::Client::Configuration::Group::Key : public Entity
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

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Key


class Native::Crypto::Isakmp::Client::Configuration::Group::Wins : public Entity
{
    public:
        Wins();
        ~Wins();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: string
        YLeaf secondary; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Wins


class Native::Crypto::Isakmp::Client::Firewall : public Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf optional; //type: OptionalEnum
        YLeaf required; //type: RequiredEnum
        class Policy; //type: Native::Crypto::Isakmp::Client::Firewall::Policy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy> policy;
                class OptionalEnum;
        class RequiredEnum;

}; // Native::Crypto::Isakmp::Client::Firewall


class Native::Crypto::Isakmp::Client::Firewall::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf check_presence; //type: empty
        class CentralPolicyPush; //type: Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush> central_policy_push;
        
}; // Native::Crypto::Isakmp::Client::Firewall::Policy


class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush : public Entity
{
    public:
        CentralPolicyPush();
        ~CentralPolicyPush();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessList; //type: Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList> access_list;
        
}; // Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush


class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf acl; //type: one of uint16, string
        class DirectionEnum;

}; // Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList


class Native::Crypto::Isakmp::Default_ : public Entity
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

        YLeaf policy; //type: empty

}; // Native::Crypto::Isakmp::Default_


class Native::Crypto::Isakmp::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf retry_number; //type: uint8
        YLeaf send; //type: SendEnum
        class SendEnum;

}; // Native::Crypto::Isakmp::Keepalive


class Native::Crypto::Isakmp::Key : public Entity
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

        class KeyAddress; //type: Native::Crypto::Isakmp::Key::KeyAddress
        class KeyHost; //type: Native::Crypto::Isakmp::Key::KeyHost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress> key_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyHost> key_host;
        
}; // Native::Crypto::Isakmp::Key


class Native::Crypto::Isakmp::Key::KeyAddress : public Entity
{
    public:
        KeyAddress();
        ~KeyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class Addr4Container; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container
        class Addr6Container; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container> addr4_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container> addr6_container;
                class EncryptionEnum;

}; // Native::Crypto::Isakmp::Key::KeyAddress


class Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container : public Entity
{
    public:
        Addr4Container();
        ~Addr4Container();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container


class Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container : public Entity
{
    public:
        Addr6Container();
        ~Addr6Container();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address> address;
        
}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container


class Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address : public Entity
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
        YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address


class Native::Crypto::Isakmp::Key::KeyHost : public Entity
{
    public:
        KeyHost();
        ~KeyHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class HostContainer; //type: Native::Crypto::Isakmp::Key::KeyHost::HostContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyHost::HostContainer> host_container;
                class EncryptionEnum;

}; // Native::Crypto::Isakmp::Key::KeyHost


class Native::Crypto::Isakmp::Key::KeyHost::HostContainer : public Entity
{
    public:
        HostContainer();
        ~HostContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string
        YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyHost::HostContainer


class Native::Crypto::Isakmp::Nat : public Entity
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

}; // Native::Crypto::Isakmp::Nat


class Native::Crypto::Isakmp::Peer : public Entity
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

        class Ipv4Addr; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr
        class Ipv6Addr; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr
        class Hostname; //type: Native::Crypto::Isakmp::Peer::Hostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname> > hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr> ipv4_addr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr> ipv6_addr;
        
}; // Native::Crypto::Isakmp::Peer


class Native::Crypto::Isakmp::Peer::Ipv4Addr : public Entity
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

        class Address; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address> > address;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address : public Entity
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
        YLeaf vrf; //type: string
        YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set : public Entity
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

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode : public Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint : public Entity
{
    public:
        ClientEndpoint();
        ~ClientEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fqdn; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf user_fqdn; //type: string

}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password : public Entity
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

}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Peer::Ipv6Addr : public Entity
{
    public:
        Ipv6Addr();
        ~Ipv6Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address> > address;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address : public Entity
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
        YLeaf vrf; //type: string
        YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set : public Entity
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

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode : public Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint : public Entity
{
    public:
        ClientEndpoint();
        ~ClientEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fqdn; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf user_fqdn; //type: string

}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password : public Entity
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

}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Peer::Hostname : public Entity
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
        YLeaf vrf; //type: string
        YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Hostname::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Hostname


class Native::Crypto::Isakmp::Peer::Hostname::Set : public Entity
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

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Hostname::Set


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode : public Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint : public Entity
{
    public:
        ClientEndpoint();
        ~ClientEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fqdn; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf user_fqdn; //type: string

}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password : public Entity
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

}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf authentication; //type: AuthenticationEnum
        YLeaf group; //type: GroupEnum
        YLeaf hash; //type: HashEnum
        YLeaf lifetime; //type: uint32
        class Default_; //type: Native::Crypto::Isakmp::Policy::Default_
        class Encryption; //type: Native::Crypto::Isakmp::Policy::Encryption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Encryption> encryption;
                class AuthenticationEnum;
        class GroupEnum;
        class HashEnum;

}; // Native::Crypto::Isakmp::Policy


class Native::Crypto::Isakmp::Policy::Default_ : public Entity
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

        YLeaf authentication; //type: AuthenticationEnum
        YLeaf group; //type: GroupEnum
        YLeaf hash; //type: HashEnum
        YLeaf lifetime; //type: empty
        class Encryption; //type: Native::Crypto::Isakmp::Policy::Default_::Encryption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Default_::Encryption> encryption;
                class AuthenticationEnum;
        class GroupEnum;
        class HashEnum;

}; // Native::Crypto::Isakmp::Policy::Default_


class Native::Crypto::Isakmp::Policy::Default_::Encryption : public Entity
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

        YLeaf a3des; //type: empty
        YLeaf des; //type: empty
        class Aes; //type: Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes> aes; // presence node
        
}; // Native::Crypto::Isakmp::Policy::Default_::Encryption


class Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes : public Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: KeyEnum
        class KeyEnum;

}; // Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes


class Native::Crypto::Isakmp::Policy::Encryption : public Entity
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

        YLeaf a3des; //type: empty
        YLeaf des; //type: empty
        class Aes; //type: Native::Crypto::Isakmp::Policy::Encryption::Aes

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy::Encryption::Aes> aes; // presence node
        
}; // Native::Crypto::Isakmp::Policy::Encryption


class Native::Crypto::Isakmp::Policy::Encryption::Aes : public Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: KeyEnum
        class KeyEnum;

}; // Native::Crypto::Isakmp::Policy::Encryption::Aes


class Native::Crypto::Isakmp::Profile : public Entity
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
        YLeaf accounting; //type: string
        YLeaf description; //type: string
        YLeaf keyring; //type: one of string, enumeration
        YLeaf local_address; //type: string
        YLeaf qos_group; //type: uint16
        YLeaf virtual_template; //type: uint16
        YLeaf vrf; //type: string
        class Default_; //type: Native::Crypto::Isakmp::Profile::Default_
        class Ca; //type: Native::Crypto::Isakmp::Profile::Ca
        class Client; //type: Native::Crypto::Isakmp::Profile::Client
        class Initiate; //type: Native::Crypto::Isakmp::Profile::Initiate
        class Isakmp_; //type: Native::Crypto::Isakmp::Profile::Isakmp_
        class Keepalive; //type: Native::Crypto::Isakmp::Profile::Keepalive
        class Match; //type: Native::Crypto::Isakmp::Profile::Match
        class SelfIdentity; //type: Native::Crypto::Isakmp::Profile::SelfIdentity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Ca> ca;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Initiate> initiate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Isakmp_> isakmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity> self_identity;
                class KeyringEnum;

}; // Native::Crypto::Isakmp::Profile


class Native::Crypto::Isakmp::Profile::Default_ : public Entity
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

        YLeaf accounting; //type: empty
        YLeaf description; //type: string
        YLeaf keyring; //type: one of string, enumeration
        YLeaf local_address; //type: empty
        YLeaf qos_group; //type: empty
        YLeaf virtual_template; //type: empty
        YLeaf vrf; //type: empty
        class Ca; //type: Native::Crypto::Isakmp::Profile::Default_::Ca
        class Client; //type: Native::Crypto::Isakmp::Profile::Default_::Client
        class Initiate; //type: Native::Crypto::Isakmp::Profile::Default_::Initiate
        class Isakmp_; //type: Native::Crypto::Isakmp::Profile::Default_::Isakmp_
        class Keepalive; //type: Native::Crypto::Isakmp::Profile::Default_::Keepalive
        class Match; //type: Native::Crypto::Isakmp::Profile::Default_::Match
        class SelfIdentity; //type: Native::Crypto::Isakmp::Profile::Default_::SelfIdentity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Ca> ca;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Initiate> initiate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Isakmp_> isakmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Keepalive> keepalive; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::SelfIdentity> self_identity; // presence node
                class KeyringEnum;

}; // Native::Crypto::Isakmp::Profile::Default_


class Native::Crypto::Isakmp::Profile::Default_::Ca : public Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust_point; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Ca


class Native::Crypto::Isakmp::Profile::Default_::Client : public Entity
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

        class Authentication; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Authentication
        class Configuration; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Configuration
        class Pki; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Pki

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Pki> pki;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Client


class Native::Crypto::Isakmp::Profile::Default_::Client::Authentication : public Entity
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

        YLeaf list; //type: empty

}; // Native::Crypto::Isakmp::Profile::Default_::Client::Authentication


class Native::Crypto::Isakmp::Profile::Default_::Client::Configuration : public Entity
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

        YLeaf address; //type: AddressEnum
        YLeaf group; //type: string
        class AddressEnum;

}; // Native::Crypto::Isakmp::Profile::Default_::Client::Configuration


class Native::Crypto::Isakmp::Profile::Default_::Client::Pki : public Entity
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

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization> authorization; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Default_::Client::Pki


class Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization : public Entity
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


}; // Native::Crypto::Isakmp::Profile::Default_::Client::Pki::Authorization


class Native::Crypto::Isakmp::Profile::Default_::Initiate : public Entity
{
    public:
        Initiate();
        ~Initiate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mode; //type: Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode> mode; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Default_::Initiate


class Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Isakmp::Profile::Default_::Initiate::Mode


class Native::Crypto::Isakmp::Profile::Default_::Isakmp_ : public Entity
{
    public:
        Isakmp_();
        ~Isakmp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Isakmp_


class Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization : public Entity
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

        YLeaf list; //type: empty

}; // Native::Crypto::Isakmp::Profile::Default_::Isakmp_::Authorization


class Native::Crypto::Isakmp::Profile::Default_::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Isakmp::Profile::Default_::Keepalive


class Native::Crypto::Isakmp::Profile::Default_::Match : public Entity
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
        class Identity; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity> identity;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity : public Entity
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

        YLeaf group; //type: string
        class Ipv4Address; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address
        class Address; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address
        class Host; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host
        class UserFqdn; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Ipv4Address


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address : public Entity
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
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Address


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch> domain_match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainName


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch : public Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::Host::DomainMatch


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn : public Entity
{
    public:
        UserFqdn();
        ~UserFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch> domain_match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainName


class Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch : public Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Default_::Match::Identity::UserFqdn::DomainMatch


class Native::Crypto::Isakmp::Profile::Default_::SelfIdentity : public Entity
{
    public:
        SelfIdentity();
        ~SelfIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Isakmp::Profile::Default_::SelfIdentity


class Native::Crypto::Isakmp::Profile::Ca : public Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust_point; //type: string

}; // Native::Crypto::Isakmp::Profile::Ca


class Native::Crypto::Isakmp::Profile::Client : public Entity
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

        class Authentication; //type: Native::Crypto::Isakmp::Profile::Client::Authentication
        class Configuration; //type: Native::Crypto::Isakmp::Profile::Client::Configuration
        class Pki; //type: Native::Crypto::Isakmp::Profile::Client::Pki

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Pki> pki;
        
}; // Native::Crypto::Isakmp::Profile::Client


class Native::Crypto::Isakmp::Profile::Client::Authentication : public Entity
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

}; // Native::Crypto::Isakmp::Profile::Client::Authentication


class Native::Crypto::Isakmp::Profile::Client::Configuration : public Entity
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

        YLeaf address; //type: AddressEnum
        YLeaf group; //type: string
        class AddressEnum;

}; // Native::Crypto::Isakmp::Profile::Client::Configuration


class Native::Crypto::Isakmp::Profile::Client::Pki : public Entity
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

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Client::Pki::Authorization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Client::Pki::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Client::Pki


class Native::Crypto::Isakmp::Profile::Client::Pki::Authorization : public Entity
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

        YLeaf list; //type: string

}; // Native::Crypto::Isakmp::Profile::Client::Pki::Authorization


class Native::Crypto::Isakmp::Profile::Initiate : public Entity
{
    public:
        Initiate();
        ~Initiate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mode; //type: Native::Crypto::Isakmp::Profile::Initiate::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Initiate::Mode> mode; // presence node
        
}; // Native::Crypto::Isakmp::Profile::Initiate


class Native::Crypto::Isakmp::Profile::Initiate::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aggressive; //type: empty

}; // Native::Crypto::Isakmp::Profile::Initiate::Mode


class Native::Crypto::Isakmp::Profile::Isakmp_ : public Entity
{
    public:
        Isakmp_();
        ~Isakmp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorization; //type: Native::Crypto::Isakmp::Profile::Isakmp_::Authorization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Isakmp_::Authorization> authorization;
        
}; // Native::Crypto::Isakmp::Profile::Isakmp_


class Native::Crypto::Isakmp::Profile::Isakmp_::Authorization : public Entity
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

        YLeaf list; //type: string

}; // Native::Crypto::Isakmp::Profile::Isakmp_::Authorization


class Native::Crypto::Isakmp::Profile::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf retry; //type: uint8

}; // Native::Crypto::Isakmp::Profile::Keepalive


class Native::Crypto::Isakmp::Profile::Match : public Entity
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
        class Identity; //type: Native::Crypto::Isakmp::Profile::Match::Identity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity> identity;
        
}; // Native::Crypto::Isakmp::Profile::Match


class Native::Crypto::Isakmp::Profile::Match::Identity : public Entity
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

        YLeaf group; //type: string
        class Ipv4Address; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address
        class Address; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Address
        class Host; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host
        class UserFqdn; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address> ipv4_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn> user_fqdn;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity


class Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Ipv4Address


class Native::Crypto::Isakmp::Profile::Match::Identity::Address : public Entity
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
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Address


class Native::Crypto::Isakmp::Profile::Match::Identity::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch> domain_match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host


class Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainName


class Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch : public Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::Host::DomainMatch


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn : public Entity
{
    public:
        UserFqdn();
        ~UserFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainName; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName
        class DomainMatch; //type: Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch> domain_match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName> domain_name;
        
}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainName


class Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch : public Entity
{
    public:
        DomainMatch();
        ~DomainMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Isakmp::Profile::Match::Identity::UserFqdn::DomainMatch


class Native::Crypto::Isakmp::Profile::SelfIdentity : public Entity
{
    public:
        SelfIdentity();
        ~SelfIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_fqdn; //type: string
        class Address; //type: Native::Crypto::Isakmp::Profile::SelfIdentity::Address
        class Fqdn; //type: Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity::Address> address; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn> fqdn; // presence node
        
}; // Native::Crypto::Isakmp::Profile::SelfIdentity


class Native::Crypto::Isakmp::Profile::SelfIdentity::Address : public Entity
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

        YLeaf ipv6; //type: empty

}; // Native::Crypto::Isakmp::Profile::SelfIdentity::Address


class Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn : public Entity
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

        YLeaf id; //type: string

}; // Native::Crypto::Isakmp::Profile::SelfIdentity::Fqdn


class Native::Crypto::Isakmp::Xauth : public Entity
{
    public:
        Xauth();
        ~Xauth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint8

}; // Native::Crypto::Isakmp::Xauth


class Native::Crypto::Key : public Entity
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

        YLeaf storage; //type: string
        class Decrypt; //type: Native::Crypto::Key::Decrypt
        class Encrypt; //type: Native::Crypto::Key::Encrypt
        class Export_; //type: Native::Crypto::Key::Export_
        class Generate; //type: Native::Crypto::Key::Generate
        class Import; //type: Native::Crypto::Key::Import
        class Move; //type: Native::Crypto::Key::Move
        class PubkeyChain; //type: Native::Crypto::Key::PubkeyChain
        class Zeroize; //type: Native::Crypto::Key::Zeroize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt> decrypt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt> encrypt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_> export_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Generate> generate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Import> import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Move> move;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain> pubkey_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize> zeroize;
        
}; // Native::Crypto::Key


class Native::Crypto::Key::Decrypt : public Entity
{
    public:
        Decrypt();
        ~Decrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ec; //type: Native::Crypto::Key::Decrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Rsa
        class Write; //type: Native::Crypto::Key::Decrypt::Write

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Ec> ec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Rsa> rsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write> write;
        
}; // Native::Crypto::Key::Decrypt


class Native::Crypto::Key::Decrypt::Ec : public Entity
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
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Ec


class Native::Crypto::Key::Decrypt::Rsa : public Entity
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

        YLeaf name; //type: string
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Rsa


class Native::Crypto::Key::Decrypt::Write : public Entity
{
    public:
        Write();
        ~Write();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ec; //type: Native::Crypto::Key::Decrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Write::Rsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Ec> ec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Decrypt::Write


class Native::Crypto::Key::Decrypt::Write::Ec : public Entity
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
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Ec


class Native::Crypto::Key::Decrypt::Write::Rsa : public Entity
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

        YLeaf name; //type: string
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Rsa


class Native::Crypto::Key::Encrypt : public Entity
{
    public:
        Encrypt();
        ~Encrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ec; //type: Native::Crypto::Key::Encrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Rsa
        class Write; //type: Native::Crypto::Key::Encrypt::Write

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Ec> ec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Rsa> rsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write> write;
        
}; // Native::Crypto::Key::Encrypt


class Native::Crypto::Key::Encrypt::Ec : public Entity
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
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Ec


class Native::Crypto::Key::Encrypt::Rsa : public Entity
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

        YLeaf name; //type: string
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Rsa


class Native::Crypto::Key::Encrypt::Write : public Entity
{
    public:
        Write();
        ~Write();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ec; //type: Native::Crypto::Key::Encrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Write::Rsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Ec> ec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Encrypt::Write


class Native::Crypto::Key::Encrypt::Write::Ec : public Entity
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
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Write::Ec


class Native::Crypto::Key::Encrypt::Write::Rsa : public Entity
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

        YLeaf name; //type: string
        YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Write::Rsa


class Native::Crypto::Key::Export_ : public Entity
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

        class Ec; //type: Native::Crypto::Key::Export_::Ec
        class Rsa; //type: Native::Crypto::Key::Export_::Rsa

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec> > ec;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa> > rsa;
        
}; // Native::Crypto::Key::Export_


class Native::Crypto::Key::Export_::Ec : public Entity
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
        class Pem; //type: Native::Crypto::Key::Export_::Ec::Pem

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem> pem;
        
}; // Native::Crypto::Key::Export_::Ec


class Native::Crypto::Key::Export_::Ec::Pem : public Entity
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

        class Terminal; //type: Native::Crypto::Key::Export_::Ec::Pem::Terminal
        class Url; //type: Native::Crypto::Key::Export_::Ec::Pem::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem::Terminal> terminal;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Ec::Pem::Url> url;
        
}; // Native::Crypto::Key::Export_::Ec::Pem


class Native::Crypto::Key::Export_::Ec::Pem::Terminal : public Entity
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

        YLeaf pk_3des; //type: string
        YLeaf des; //type: string

}; // Native::Crypto::Key::Export_::Ec::Pem::Terminal


class Native::Crypto::Key::Export_::Ec::Pem::Url : public Entity
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
        YLeaf url_3des; //type: string
        YLeaf des; //type: string
        class FileEnum;

}; // Native::Crypto::Key::Export_::Ec::Pem::Url


class Native::Crypto::Key::Export_::Rsa : public Entity
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
        class Pem; //type: Native::Crypto::Key::Export_::Rsa::Pem

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem> pem;
        
}; // Native::Crypto::Key::Export_::Rsa


class Native::Crypto::Key::Export_::Rsa::Pem : public Entity
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

        class Terminal; //type: Native::Crypto::Key::Export_::Rsa::Pem::Terminal
        class Url; //type: Native::Crypto::Key::Export_::Rsa::Pem::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem::Terminal> terminal;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Export_::Rsa::Pem::Url> url;
        
}; // Native::Crypto::Key::Export_::Rsa::Pem


class Native::Crypto::Key::Export_::Rsa::Pem::Terminal : public Entity
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

        YLeaf pk_3des; //type: string
        YLeaf des; //type: string

}; // Native::Crypto::Key::Export_::Rsa::Pem::Terminal


class Native::Crypto::Key::Export_::Rsa::Pem::Url : public Entity
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
        YLeaf url_3des; //type: string
        YLeaf des; //type: string
        class FileEnum;

}; // Native::Crypto::Key::Export_::Rsa::Pem::Url


class Native::Crypto::Key::Generate : public Entity
{
    public:
        Generate();
        ~Generate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ec; //type: Native::Crypto::Key::Generate::Ec
        class Rsa; //type: Native::Crypto::Key::Generate::Rsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Generate::Ec> ec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Generate::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Generate


class Native::Crypto::Key::Generate::Ec : public Entity
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

        YLeaf keysize; //type: KeysizeEnum
        YLeaf exportable; //type: empty
        YLeaf label; //type: string
        class KeysizeEnum;

}; // Native::Crypto::Key::Generate::Ec


class Native::Crypto::Key::Generate::Rsa : public Entity
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

        YLeaf encryption; //type: empty
        YLeaf exportable; //type: empty
        YLeaf general_keys; //type: empty
        YLeaf label; //type: string
        YLeaf modulus; //type: uint16
        YLeaf on; //type: string
        YLeaf redundancy; //type: empty
        YLeaf signature; //type: empty
        YLeaf storage; //type: string
        YLeaf usage_keys; //type: empty

}; // Native::Crypto::Key::Generate::Rsa


class Native::Crypto::Key::Import : public Entity
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

        class Ec; //type: Native::Crypto::Key::Import::Ec
        class Rsa; //type: Native::Crypto::Key::Import::Rsa

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Import::Ec> > ec;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key::Import::Rsa> > rsa;
        
}; // Native::Crypto::Key::Import

class Native::Crypto::Ipsec::Profile::Set::Pfs::GroupEnum : public Enum
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

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::DfbitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::EcnEnum : public Enum
{
    public:
        static const Enum::YLeaf discard;
        static const Enum::YLeaf propagate;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf per_host;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::KilobytesEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1024;
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::SecurityAssociation::EcnEnum : public Enum
{
    public:
        static const Enum::YLeaf discard;
        static const Enum::YLeaf propagate;

};

class Native::Crypto::Ipsec::SecurityAssociation::Lifetime::KilobytesEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1024;
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::TransformSet::AhHmacEnum : public Enum
{
    public:
        static const Enum::YLeaf ah_md5_hmac;
        static const Enum::YLeaf ah_sha_hmac;
        static const Enum::YLeaf ah_sha256_hmac;
        static const Enum::YLeaf ah_sha384_hmac;
        static const Enum::YLeaf ah_sha512_hmac;

};

class Native::Crypto::Ipsec::TransformSet::EspEnum : public Enum
{
    public:
        static const Enum::YLeaf esp_3des;
        static const Enum::YLeaf esp_aes;
        static const Enum::YLeaf esp_des;
        static const Enum::YLeaf esp_gcm;
        static const Enum::YLeaf esp_gmac;
        static const Enum::YLeaf esp_null;
        static const Enum::YLeaf esp_seal;

};

class Native::Crypto::Ipsec::TransformSet::KeyBitEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_192;
        static const Enum::YLeaf Y_256;

};

class Native::Crypto::Ipsec::TransformSet::EspHmacEnum : public Enum
{
    public:
        static const Enum::YLeaf esp_md5_hmac;
        static const Enum::YLeaf esp_sha_hmac;
        static const Enum::YLeaf esp_sha256_hmac;
        static const Enum::YLeaf esp_sha384_hmac;
        static const Enum::YLeaf esp_sha512_hmac;

};

class Native::Crypto::Isakmp::AggressiveModeEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class Native::Crypto::Isakmp::IdentityEnum : public Enum
{
    public:
        static const Enum::YLeaf address;
        static const Enum::YLeaf dn;
        static const Enum::YLeaf hostname;

};

class Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::UrlEnum : public Enum
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

class Native::Crypto::Isakmp::Client::Configuration::Group::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Client::Firewall::OptionalEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_integrated_client_firewall;
        static const Enum::YLeaf cisco_security_agent;
        static const Enum::YLeaf zonelabs_zonealarm;
        static const Enum::YLeaf zonelabs_zonealarmpro;

};

class Native::Crypto::Isakmp::Client::Firewall::RequiredEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_integrated_client_firewall;
        static const Enum::YLeaf cisco_security_agent;
        static const Enum::YLeaf zonelabs_zonealarm;
        static const Enum::YLeaf zonelabs_zonealarmpro;

};

class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Crypto::Isakmp::Keepalive::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf on_demand;
        static const Enum::YLeaf periodic;

};

class Native::Crypto::Isakmp::Key::KeyAddress::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Key::KeyHost::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Policy::AuthenticationEnum : public Enum
{
    public:
        static const Enum::YLeaf pre_share;
        static const Enum::YLeaf rsa_encr;
        static const Enum::YLeaf rsa_sig;

};

class Native::Crypto::Isakmp::Policy::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_14;
        static const Enum::YLeaf Y_15;
        static const Enum::YLeaf Y_16;
        static const Enum::YLeaf Y_19;
        static const Enum::YLeaf Y_2;
        static const Enum::YLeaf Y_20;
        static const Enum::YLeaf Y_21;
        static const Enum::YLeaf Y_24;
        static const Enum::YLeaf Y_5;

};

class Native::Crypto::Isakmp::Policy::HashEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha;
        static const Enum::YLeaf sha256;
        static const Enum::YLeaf sha384;
        static const Enum::YLeaf sha512;

};

class Native::Crypto::Isakmp::Policy::Default_::AuthenticationEnum : public Enum
{
    public:
        static const Enum::YLeaf pre_share;
        static const Enum::YLeaf rsa_encr;
        static const Enum::YLeaf rsa_sig;

};

class Native::Crypto::Isakmp::Policy::Default_::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_14;
        static const Enum::YLeaf Y_15;
        static const Enum::YLeaf Y_16;
        static const Enum::YLeaf Y_19;
        static const Enum::YLeaf Y_2;
        static const Enum::YLeaf Y_20;
        static const Enum::YLeaf Y_21;
        static const Enum::YLeaf Y_24;
        static const Enum::YLeaf Y_5;

};

class Native::Crypto::Isakmp::Policy::Default_::HashEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha;
        static const Enum::YLeaf sha256;
        static const Enum::YLeaf sha384;
        static const Enum::YLeaf sha512;

};

class Native::Crypto::Isakmp::Policy::Default_::Encryption::Aes::KeyEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_192;
        static const Enum::YLeaf Y_256;

};

class Native::Crypto::Isakmp::Policy::Encryption::Aes::KeyEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_192;
        static const Enum::YLeaf Y_256;

};

class Native::Crypto::Isakmp::Profile::KeyringEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Crypto::Isakmp::Profile::Default_::KeyringEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Crypto::Isakmp::Profile::Default_::Client::Configuration::AddressEnum : public Enum
{
    public:
        static const Enum::YLeaf initiate;
        static const Enum::YLeaf respond;

};

class Native::Crypto::Isakmp::Profile::Client::Configuration::AddressEnum : public Enum
{
    public:
        static const Enum::YLeaf initiate;
        static const Enum::YLeaf respond;

};

class Native::Crypto::Key::Export_::Ec::Pem::Url::FileEnum : public Enum
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

class Native::Crypto::Key::Export_::Rsa::Pem::Url::FileEnum : public Enum
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

class Native::Crypto::Key::Generate::Ec::KeysizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_384;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_79_ */

