#ifndef _CISCO_IOS_XE_NATIVE_41_
#define _CISCO_IOS_XE_NATIVE_41_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_38.hpp"
#include "Cisco_IOS_XE_native_40.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Loopback::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::Loopback::Ospfv3::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Loopback::Ospfv3::DatabaseFilter


class Native::Interface::Loopback::Ospfv3::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Interface::Loopback::Ospfv3::DemandCircuit


class Native::Interface::Loopback::Ospfv3::Encryption : public Entity
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

        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec : public Entity
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

        YLeaf spi; //type: uint64
        YLeaf esp; //type: empty
        class Ipsec_3Des; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des : public Entity
{
    public:
        Ipsec_3Des();
        ~Ipsec_3Des();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
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

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc : public Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AesCbc128; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
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

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
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

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
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

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Loopback::Ospfv3::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Loopback::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::Loopback::Ospfv3::Manet


class Native::Interface::Loopback::Ospfv3::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Loopback::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Loopback::Ospfv3::Manet::Peering


class Native::Interface::Loopback::Ospfv3::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Loopback::Ospfv3::Manet::Peering::Cost


class Native::Interface::Loopback::Ospfv3::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32

}; // Native::Interface::Loopback::Ospfv3::MultiArea


class Native::Interface::Loopback::Ospfv3::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Loopback::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Loopback::Ospfv3::Neighbor


class Native::Interface::Loopback::Ospfv3::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Loopback::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::Loopback::Ospfv3::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Loopback::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Loopback::Ospfv3::Network


class Native::Interface::Loopback::Ospfv3::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Loopback::Ospfv3::Network::PointToMultipoint


class Native::Interface::Loopback::Ospfv3::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Loopback::Ospfv3::PrefixSuppression


class Native::Interface::Loopback::Udld : public Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Loopback::Udld::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Loopback::Udld::Port> port; // presence node
        
}; // Native::Interface::Loopback::Udld


class Native::Interface::Loopback::Udld::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aggressive; //type: empty
        YLeaf disable; //type: empty

}; // Native::Interface::Loopback::Udld::Port


class Native::Interface::Loopback::ZoneMember : public Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf security; //type: string

}; // Native::Interface::Loopback::ZoneMember


class Native::Interface::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        class SwitchportConf; //type: Native::Interface::Lisp::SwitchportConf
        class Switchport; //type: Native::Interface::Lisp::Switchport
        class Arp; //type: Native::Interface::Lisp::Arp
        class Backup; //type: Native::Interface::Lisp::Backup
        class Cemoudp; //type: Native::Interface::Lisp::Cemoudp
        class CwsTunnel; //type: Native::Interface::Lisp::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Lisp::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Lisp::Encapsulation
        class FairQueueConf; //type: Native::Interface::Lisp::FairQueueConf
        class FairQueue; //type: Native::Interface::Lisp::FairQueue
        class Flowcontrol; //type: Native::Interface::Lisp::Flowcontrol
        class Isis; //type: Native::Interface::Lisp::Isis
        class KeepaliveSettings; //type: Native::Interface::Lisp::KeepaliveSettings
        class Bfd; //type: Native::Interface::Lisp::Bfd
        class Bandwidth; //type: Native::Interface::Lisp::Bandwidth
        class Dampening; //type: Native::Interface::Lisp::Dampening
        class Domain; //type: Native::Interface::Lisp::Domain
        class HoldQueue; //type: Native::Interface::Lisp::HoldQueue
        class Mpls; //type: Native::Interface::Lisp::Mpls
        class IpVrf; //type: Native::Interface::Lisp::IpVrf
        class Vrf; //type: Native::Interface::Lisp::Vrf
        class Ip; //type: Native::Interface::Lisp::Ip
        class Ipv6; //type: Native::Interface::Lisp::Ipv6
        class Logging; //type: Native::Interface::Lisp::Logging
        class Mdix; //type: Native::Interface::Lisp::Mdix
        class Mop; //type: Native::Interface::Lisp::Mop
        class Interface_Qos; //type: Native::Interface::Lisp::Interface_Qos
        class Standby; //type: Native::Interface::Lisp::Standby
        class AccessSession; //type: Native::Interface::Lisp::AccessSession
        class StormControl; //type: Native::Interface::Lisp::StormControl
        class Trust; //type: Native::Interface::Lisp::Trust
        class Utd; //type: Native::Interface::Lisp::Utd
        class PriorityQueue; //type: Native::Interface::Lisp::PriorityQueue
        class RcvQueue; //type: Native::Interface::Lisp::RcvQueue
        class Peer; //type: Native::Interface::Lisp::Peer
        class PmPath; //type: Native::Interface::Lisp::PmPath
        class ServicePolicy; //type: Native::Interface::Lisp::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::Lisp


class Native::Interface::Lisp::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::Lisp::SwitchportConf


class Native::Interface::Lisp::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Switchport


class Native::Interface::Lisp::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::Lisp::Arp


class Native::Interface::Lisp::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Lisp::Backup::Delay
        class Interface_; //type: Native::Interface::Lisp::Backup::Interface_
        class Load; //type: Native::Interface::Lisp::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Load> load;
        
}; // Native::Interface::Lisp::Backup


class Native::Interface::Lisp::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::Lisp::Backup::Delay


class Native::Interface::Lisp::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Interface::Lisp::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Lisp::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Lisp::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Lisp::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Lisp::Backup::Interface_


class Native::Interface::Lisp::Backup::Interface_::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Interface::Lisp::Backup::Interface_::AtmSubinterface


class Native::Interface::Lisp::Backup::Interface_::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Interface::Lisp::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Lisp::Backup::Interface_::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Interface::Lisp::Backup::Interface_::LispSubinterface


class Native::Interface::Lisp::Backup::Interface_::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Interface::Lisp::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Lisp::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::Lisp::Backup::Load


class Native::Interface::Lisp::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Lisp::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Lisp::Cemoudp


class Native::Interface::Lisp::Cemoudp::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr; //type: uint8

}; // Native::Interface::Lisp::Cemoudp::Reserve


class Native::Interface::Lisp::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Lisp::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::CwsTunnel::Out> out;
        
}; // Native::Interface::Lisp::CwsTunnel


class Native::Interface::Lisp::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Lisp::CwsTunnel::Out


class Native::Interface::Lisp::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Lisp::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Lisp::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Lisp::L2ProtocolTunnel


class Native::Interface::Lisp::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Lisp::L2ProtocolTunnel::DropThreshold


class Native::Interface::Lisp::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Lisp::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Lisp::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Q; //type: Native::Interface::Lisp::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Lisp::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Lisp::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Lisp::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Lisp::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Lisp::Encapsulation


class Native::Interface::Lisp::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf native; //type: empty

}; // Native::Interface::Lisp::Encapsulation::Dot1Q


class Native::Interface::Lisp::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::Lisp::Encapsulation::Isl


class Native::Interface::Lisp::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Encapsulation::Ppp


class Native::Interface::Lisp::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Encapsulation::Slip


class Native::Interface::Lisp::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::Lisp::Encapsulation::FrameRelay


class Native::Interface::Lisp::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Lisp::FairQueueConf


class Native::Interface::Lisp::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Lisp::FairQueue


class Native::Interface::Lisp::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::Lisp::Flowcontrol


class Native::Interface::Lisp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_interval; //type: uint32
        YLeaf mesh_group; //type: one of uint32, enumeration
        YLeaf network; //type: NetworkEnum
        YLeaf protocol; //type: ProtocolEnum
        YLeaf retransmit_interval; //type: uint16
        YLeaf retransmit_throttle_interval; //type: uint16
        YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::Lisp::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::Lisp::Isis::Advertise
        class Authentication; //type: Native::Interface::Lisp::Isis::Authentication
        class CircuitType; //type: Native::Interface::Lisp::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::Lisp::Isis::CsnpInterval
        class Hello; //type: Native::Interface::Lisp::Isis::Hello
        class HelloInterval; //type: Native::Interface::Lisp::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::Lisp::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::Lisp::Isis::Ipv6
        class Metric; //type: Native::Interface::Lisp::Isis::Metric
        class Password; //type: Native::Interface::Lisp::Isis::Password
        class Priority; //type: Native::Interface::Lisp::Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::Lisp::Isis::ThreeWayHandshake

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroupEnum;
        class NetworkEnum;
        class ProtocolEnum;

}; // Native::Interface::Lisp::Isis


class Native::Interface::Lisp::Isis::AdjacencyFilter : public Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf match_all; //type: empty

}; // Native::Interface::Lisp::Isis::AdjacencyFilter


class Native::Interface::Lisp::Isis::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: empty

}; // Native::Interface::Lisp::Isis::Advertise


class Native::Interface::Lisp::Isis::Authentication : public Entity
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

        class Mode; //type: Native::Interface::Lisp::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Lisp::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Lisp::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Lisp::Isis::Authentication


class Native::Interface::Lisp::Isis::Authentication::Mode : public Entity
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

        class Md5; //type: Native::Interface::Lisp::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Lisp::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Lisp::Isis::Authentication::Mode


class Native::Interface::Lisp::Isis::Authentication::Mode::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Lisp::Isis::Authentication::Mode::Md5


class Native::Interface::Lisp::Isis::Authentication::Mode::Text : public Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Lisp::Isis::Authentication::Mode::Text


class Native::Interface::Lisp::Isis::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class KeyChainList; //type: Native::Interface::Lisp::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::Lisp::Isis::Authentication::KeyChain


class Native::Interface::Lisp::Isis::Authentication::KeyChain::KeyChainList : public Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum
        YLeaf name; //type: string

}; // Native::Interface::Lisp::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::Lisp::Isis::Authentication::SendOnly : public Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Lisp::Isis::Authentication::SendOnly


class Native::Interface::Lisp::Isis::CircuitType : public Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        class LevelsEnum;

}; // Native::Interface::Lisp::Isis::CircuitType


class Native::Interface::Lisp::Isis::CsnpInterval : public Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::Lisp::Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::Lisp::Isis::CsnpInterval


class Native::Interface::Lisp::Isis::CsnpInterval::CsnpIntervalList : public Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Lisp::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::Lisp::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Interface::Lisp::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Lisp::Isis::Hello


class Native::Interface::Lisp::Isis::Hello::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty

}; // Native::Interface::Lisp::Isis::Hello::Padding


class Native::Interface::Lisp::Isis::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::Lisp::Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class ValueEnum;

}; // Native::Interface::Lisp::Isis::HelloInterval


class Native::Interface::Lisp::Isis::HelloInterval::HelloIntervalList : public Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint16, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Lisp::Isis::HelloInterval::HelloIntervalList


class Native::Interface::Lisp::Isis::HelloMultiplier : public Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::Lisp::Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::Lisp::Isis::HelloMultiplier


class Native::Interface::Lisp::Isis::HelloMultiplier::HelloMultiplierList : public Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Lisp::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Lisp::Isis::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::Lisp::Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::Lisp::Isis::Ipv6


class Native::Interface::Lisp::Isis::Ipv6::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Lisp::Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Ipv6::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Lisp::Isis::Ipv6::Metric


class Native::Interface::Lisp::Isis::Ipv6::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Lisp::Isis::Ipv6::Metric::MetricList


class Native::Interface::Lisp::Isis::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Lisp::Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Lisp::Isis::Metric


class Native::Interface::Lisp::Isis::Metric::MetricList : public Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: one of uint32, enumeration
        class LevelsEnum;
        class ValueEnum;

}; // Native::Interface::Lisp::Isis::Metric::MetricList


class Native::Interface::Lisp::Isis::Password : public Entity
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

        YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::Lisp::Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::Lisp::Isis::Password


class Native::Interface::Lisp::Isis::Password::PasswordList : public Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf password; //type: string
        class LevelsEnum;

}; // Native::Interface::Lisp::Isis::Password::PasswordList


class Native::Interface::Lisp::Isis::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::Lisp::Isis::Priority::PriorityList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::Lisp::Isis::Priority


class Native::Interface::Lisp::Isis::Priority::PriorityList : public Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint8
        class LevelsEnum;

}; // Native::Interface::Lisp::Isis::Priority::PriorityList


class Native::Interface::Lisp::Isis::ThreeWayHandshake : public Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf implementor; //type: ImplementorEnum
        class ImplementorEnum;

}; // Native::Interface::Lisp::Isis::ThreeWayHandshake


class Native::Interface::Lisp::KeepaliveSettings : public Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Keepalive; //type: Native::Interface::Lisp::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Lisp::KeepaliveSettings


class Native::Interface::Lisp::KeepaliveSettings::Keepalive : public Entity
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

        YLeaf period; //type: uint16
        YLeaf retries; //type: uint8

}; // Native::Interface::Lisp::KeepaliveSettings::Keepalive


class Native::Interface::Lisp::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Bfd


class Native::Interface::Lisp::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Lisp::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Lisp::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Bandwidth::Receive> receive;
        
}; // Native::Interface::Lisp::Bandwidth


class Native::Interface::Lisp::Bandwidth::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit; //type: empty
        YLeaf kilobits; //type: uint32

}; // Native::Interface::Lisp::Bandwidth::Receive


class Native::Interface::Lisp::Bandwidth::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kilobits; //type: uint32

}; // Native::Interface::Lisp::Bandwidth::Inherit


class Native::Interface::Lisp::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dampening_time; //type: uint16
        YLeaf start_reusing_time; //type: uint16
        YLeaf start_supressing_time; //type: uint16
        YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Lisp::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Dampening::Restart> restart;
        
}; // Native::Interface::Lisp::Dampening


class Native::Interface::Lisp::Dampening::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: empty
        YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Lisp::Dampening::Restart


class Native::Interface::Lisp::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf path; //type: string
        YLeaf internet_bound; //type: empty
        YLeaf path_id; //type: uint8
        YLeaf path_last_resort; //type: empty
        YLeaf zero_sla; //type: empty

}; // Native::Interface::Lisp::Domain


class Native::Interface::Lisp::HoldQueue : public Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_length; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Interface::Lisp::HoldQueue


class Native::Interface::Lisp::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Mpls


class Native::Interface::Lisp::IpVrf : public Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::Lisp::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::IpVrf::Ip> ip;
        
}; // Native::Interface::Lisp::IpVrf


class Native::Interface::Lisp::IpVrf::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Native::Interface::Lisp::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Lisp::IpVrf::Ip


class Native::Interface::Lisp::IpVrf::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::Lisp::IpVrf::Ip::Vrf


class Native::Interface::Lisp::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::Lisp::Vrf


class Native::Interface::Lisp::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::Lisp::Ip::AccessGroup
        class Arp; //type: Native::Interface::Lisp::Ip::Arp
        class Vrf; //type: Native::Interface::Lisp::Ip::Vrf
        class NoAddress; //type: Native::Interface::Lisp::Ip::NoAddress
        class Address; //type: Native::Interface::Lisp::Ip::Address
        class HelloInterval; //type: Native::Interface::Lisp::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Lisp::Ip::Authentication
        class HoldTime; //type: Native::Interface::Lisp::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Lisp::Ip::HelperAddress
        class Pim; //type: Native::Interface::Lisp::Ip::Pim
        class Policy; //type: Native::Interface::Lisp::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::Lisp::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Lisp::Ip::RouteCache
        class Router; //type: Native::Interface::Lisp::Ip::Router
        class Tcp; //type: Native::Interface::Lisp::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Lisp::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Lisp::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Lisp::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Lisp::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Vrf> vrf;
        
}; // Native::Interface::Lisp::Ip


class Native::Interface::Lisp::Ip::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Native::Interface::Lisp::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Lisp::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Lisp::Ip::AccessGroup


class Native::Interface::Lisp::Ip::AccessGroup::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Lisp::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Lisp::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Lisp::Ip::AccessGroup::In


class Native::Interface::Lisp::Ip::AccessGroup::In::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Lisp::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Lisp::Ip::AccessGroup::In::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Lisp::Ip::AccessGroup::In::Acl


class Native::Interface::Lisp::Ip::AccessGroup::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Lisp::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Lisp::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Lisp::Ip::AccessGroup::Out


class Native::Interface::Lisp::Ip::AccessGroup::Out::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Lisp::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Lisp::Ip::AccessGroup::Out::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Lisp::Ip::AccessGroup::Out::Acl


class Native::Interface::Lisp::Ip::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inspection; //type: Native::Interface::Lisp::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Lisp::Ip::Arp


class Native::Interface::Lisp::Ip::Arp::Inspection : public Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Lisp::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Lisp::Ip::Arp::Inspection


class Native::Interface::Lisp::Ip::Arp::Inspection::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf rate; //type: uint32

}; // Native::Interface::Lisp::Ip::Arp::Inspection::Limit


class Native::Interface::Lisp::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: string
        YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Lisp::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Lisp::Ip::Vrf


class Native::Interface::Lisp::Ip::Vrf::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf liin_vrf; //type: empty
        YLeaf mgmtvrf; //type: empty
        YLeaf word; //type: string

}; // Native::Interface::Lisp::Ip::Vrf::Forwarding


class Native::Interface::Lisp::Ip::NoAddress : public Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: boolean

}; // Native::Interface::Lisp::Ip::NoAddress


class Native::Interface::Lisp::Ip::Address : public Entity
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

        YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Lisp::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Lisp::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Lisp::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Lisp::Ip::Address


class Native::Interface::Lisp::Ip::Address::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::Lisp::Ip::Address::Primary


class Native::Interface::Lisp::Ip::Address::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Lisp::Ip::Address::Secondary


class Native::Interface::Lisp::Ip::Address::Dhcp : public Entity
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

        YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Lisp::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Lisp::Ip::Address::Dhcp


class Native::Interface::Lisp::Ip::Address::Dhcp::ClientId : public Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf port_channel; //type: uint32
        YLeaf tengigabitethernet; //type: string
        YLeaf fortygigabitethernet; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Lisp::Ip::Address::Dhcp::ClientId


class Native::Interface::Lisp::Ip::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Lisp::Ip::HelloInterval


class Native::Interface::Lisp::Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::Lisp::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Lisp::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Lisp::Ip::Authentication


class Native::Interface::Lisp::Ip::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf name; //type: string

}; // Native::Interface::Lisp::Ip::Authentication::KeyChain


class Native::Interface::Lisp::Ip::Authentication::Mode : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf md5; //type: empty

}; // Native::Interface::Lisp::Ip::Authentication::Mode


class Native::Interface::Lisp::Ip::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Lisp::Ip::HoldTime


class Native::Interface::Lisp::Ip::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf global; //type: empty
        YLeaf vrf; //type: string

}; // Native::Interface::Lisp::Ip::HelperAddress


class Native::Interface::Lisp::Ip::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Ip::Pim


class Native::Interface::Lisp::Ip::Policy : public Entity
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

        YLeaf route_map; //type: string

}; // Native::Interface::Lisp::Ip::Policy


class Native::Interface::Lisp::Ip::RouteCacheConf : public Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_cache; //type: boolean

}; // Native::Interface::Lisp::Ip::RouteCacheConf


class Native::Interface::Lisp::Ip::RouteCache : public Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cef; //type: boolean
        YLeaf flow; //type: boolean
        YLeaf policy; //type: boolean
        YLeaf same_interface; //type: boolean

}; // Native::Interface::Lisp::Ip::RouteCache


class Native::Interface::Lisp::Ip::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Interface::Lisp::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Lisp::Ip::Router


class Native::Interface::Lisp::Ip::Router::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string

}; // Native::Interface::Lisp::Ip::Router::Isis


class Native::Interface::Lisp::Ip::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Lisp::Ip::Tcp


class Native::Interface::Lisp::Ip::VirtualReassembly : public Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_reassemblies; //type: uint32
        YLeaf max_fragments; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf drop_fragments; //type: empty
        YLeaf in; //type: empty

}; // Native::Interface::Lisp::Ip::VirtualReassembly


class Native::Interface::Lisp::Ip::Dhcp : public Entity
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


}; // Native::Interface::Lisp::Ip::Dhcp


class Native::Interface::Lisp::Ip::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Native::Interface::Lisp::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Lisp::Ip::SummaryAddress


class Native::Interface::Lisp::Ip::SummaryAddress::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf metric; //type: uint32

}; // Native::Interface::Lisp::Ip::SummaryAddress::Eigrp


class Native::Interface::Lisp::Ip::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Interface::Lisp::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Lisp::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Lisp::Ip::Verify


class Native::Interface::Lisp::Ip::Verify::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Lisp::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Lisp::Ip::Verify::Source


class Native::Interface::Lisp::Ip::Verify::Source::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DhcpSnooping; //type: Native::Interface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Lisp::Ip::Verify::Source::Vlan


class Native::Interface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_security; //type: empty

}; // Native::Interface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::Lisp::Ip::Verify::Unicast : public Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReversePath; //type: Native::Interface::Lisp::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Lisp::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Lisp::Ip::Verify::Unicast


class Native::Interface::Lisp::Ip::Verify::Unicast::ReversePath : public Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Lisp::Ip::Verify::Unicast::ReversePath


class Native::Interface::Lisp::Ip::Verify::Unicast::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reachable_via; //type: ReachableViaEnum
        YLeaf allow_self_ping; //type: empty
        YLeaf allow_default; //type: empty
        class ReachableViaEnum;

}; // Native::Interface::Lisp::Ip::Verify::Unicast::Source


class Native::Interface::Lisp::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf mtu; //type: uint16
        YLeaf redirects; //type: boolean
        class DestinationGuard; //type: Native::Interface::Lisp::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Lisp::Ipv6::Dhcp
        class Address; //type: Native::Interface::Lisp::Ipv6::Address
        class Nd; //type: Native::Interface::Lisp::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Lisp::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Lisp::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Lisp::Ipv6


class Native::Interface::Lisp::Ipv6::DestinationGuard : public Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Lisp::Ipv6::DestinationGuard


class Native::Interface::Lisp::Ipv6::Dhcp : public Entity
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


}; // Native::Interface::Lisp::Ipv6::Dhcp

class Native::Interface::Loopback::Ospfv3::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Loopback::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Loopback::Ospfv3::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Lisp::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Lisp::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Lisp::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Lisp::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Lisp::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Lisp::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Lisp::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Lisp::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Lisp::Isis::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};

class Native::Interface::Lisp::Isis::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::Lisp::Isis::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Lisp::Isis::CircuitType::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Interface::Lisp::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::HelloInterval::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Lisp::Isis::HelloInterval::HelloIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::HelloInterval::HelloIntervalList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Lisp::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::Ipv6::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Lisp::Isis::Ipv6::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::Ipv6::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Lisp::Isis::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Lisp::Isis::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Lisp::Isis::Password::PasswordList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::Priority::PriorityList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Lisp::Isis::ThreeWayHandshake::ImplementorEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf ietf;

};

class Native::Interface::Lisp::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Lisp::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_41_ */

