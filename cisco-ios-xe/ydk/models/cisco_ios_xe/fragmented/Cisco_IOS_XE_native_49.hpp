#ifndef _CISCO_IOS_XE_NATIVE_49_
#define _CISCO_IOS_XE_NATIVE_49_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_45.hpp"
#include "Cisco_IOS_XE_native_48.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore : public Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea : public Entity
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
        YLeaf disable; //type: empty

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::PortChannel::Ospfv3::Authentication : public Entity
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

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::PortChannel::Ospfv3::Authentication


class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec : public Entity
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
        class Md5; //type: Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec


class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5 : public Entity
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

        class KeyString; //type: Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1 : public Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::PortChannel::Ospfv3::Bfd : public Entity
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

        YLeaf disable; //type: empty

}; // Native::Interface::PortChannel::Ospfv3::Bfd


class Native::Interface::PortChannel::Ospfv3::Cost : public Entity
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

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::PortChannel::Ospfv3::Cost


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic : public Entity
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
        class Hysteresis; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight : public Entity
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

        class L2Factor; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::PortChannel::Ospfv3::DatabaseFilter : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::DatabaseFilter


class Native::Interface::PortChannel::Ospfv3::DemandCircuit : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::DemandCircuit


class Native::Interface::PortChannel::Ospfv3::Encryption : public Entity
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
        class Ipsec; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec : public Entity
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
        class Ipsec_3Des; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des : public Entity
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

        class KeyString; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc : public Entity
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

        class AesCbc128; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
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

        class KeyString; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public Entity
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

        class KeyString; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public Entity
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

        class KeyString; //type: Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::PortChannel::Ospfv3::Manet : public Entity
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

        class Peering; //type: Native::Interface::PortChannel::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::PortChannel::Ospfv3::Manet


class Native::Interface::PortChannel::Ospfv3::Manet::Peering : public Entity
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
        class Cost; //type: Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::PortChannel::Ospfv3::Manet::Peering


class Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost


class Native::Interface::PortChannel::Ospfv3::MultiArea : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::MultiArea


class Native::Interface::PortChannel::Ospfv3::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::PortChannel::Ospfv3::Neighbor


class Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::PortChannel::Ospfv3::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::PortChannel::Ospfv3::Network


class Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint


class Native::Interface::PortChannel::Ospfv3::PrefixSuppression : public Entity
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

}; // Native::Interface::PortChannel::Ospfv3::PrefixSuppression


class Native::Interface::PortChannel::Authentication : public Entity
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

        YLeaf control_direction; //type: ControlDirectionEnum
        YLeaf fallback; //type: string
        YLeaf host_mode; //type: HostModeEnum
        YLeaf open; //type: empty
        YLeaf port_control; //type: PortControlEnum
        YLeaf periodic; //type: empty
        YLeaf violation; //type: ViolationEnum
        class Event; //type: Native::Interface::PortChannel::Authentication::Event
        class Order; //type: Native::Interface::PortChannel::Authentication::Order
        class Priority; //type: Native::Interface::PortChannel::Authentication::Priority
        class Timer; //type: Native::Interface::PortChannel::Authentication::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Order> order;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Timer> timer;
                class ControlDirectionEnum;
        class HostModeEnum;
        class PortControlEnum;
        class ViolationEnum;

}; // Native::Interface::PortChannel::Authentication


class Native::Interface::PortChannel::Authentication::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Native::Interface::PortChannel::Authentication::Event::Server
        class Fail; //type: Native::Interface::PortChannel::Authentication::Event::Fail
        class NoResponse; //type: Native::Interface::PortChannel::Authentication::Event::NoResponse

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Fail> fail;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::NoResponse> no_response;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server> server;
        
}; // Native::Interface::PortChannel::Authentication::Event


class Native::Interface::PortChannel::Authentication::Event::Server : public Entity
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

        class Alive; //type: Native::Interface::PortChannel::Authentication::Event::Server::Alive
        class Dead; //type: Native::Interface::PortChannel::Authentication::Event::Server::Dead

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server::Alive> alive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server::Dead> dead;
        
}; // Native::Interface::PortChannel::Authentication::Event::Server


class Native::Interface::PortChannel::Authentication::Event::Server::Alive : public Entity
{
    public:
        Alive();
        ~Alive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action> action;
        
}; // Native::Interface::PortChannel::Authentication::Event::Server::Alive


class Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reinitialize; //type: empty

}; // Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action


class Native::Interface::PortChannel::Authentication::Event::Server::Dead : public Entity
{
    public:
        Dead();
        ~Dead();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action> action;
        
}; // Native::Interface::PortChannel::Authentication::Event::Server::Dead


class Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorize; //type: Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize
        class Reinitialize; //type: Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize> authorize; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize> reinitialize;
        
}; // Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action


class Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16
        YLeaf voice; //type: empty

}; // Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize


class Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize : public Entity
{
    public:
        Reinitialize();
        ~Reinitialize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize


class Native::Interface::PortChannel::Authentication::Event::Fail : public Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::PortChannel::Authentication::Event::Fail::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Fail::Action> action;
        
}; // Native::Interface::PortChannel::Authentication::Event::Fail


class Native::Interface::PortChannel::Authentication::Event::Fail::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorize; //type: Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize> authorize;
        
}; // Native::Interface::PortChannel::Authentication::Event::Fail::Action


class Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize


class Native::Interface::PortChannel::Authentication::Event::NoResponse : public Entity
{
    public:
        NoResponse();
        ~NoResponse();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::PortChannel::Authentication::Event::NoResponse::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::NoResponse::Action> action;
        
}; // Native::Interface::PortChannel::Authentication::Event::NoResponse


class Native::Interface::PortChannel::Authentication::Event::NoResponse::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorize; //type: Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize> authorize;
        
}; // Native::Interface::PortChannel::Authentication::Event::NoResponse::Action


class Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize


class Native::Interface::PortChannel::Authentication::Order : public Entity
{
    public:
        Order();
        ~Order();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Interface::PortChannel::Authentication::Order


class Native::Interface::PortChannel::Authentication::Priority : public Entity
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

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Interface::PortChannel::Authentication::Priority


class Native::Interface::PortChannel::Authentication::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: uint16
        class Reauthenticate; //type: Native::Interface::PortChannel::Authentication::Timer::Reauthenticate
        class Inactivity; //type: Native::Interface::PortChannel::Authentication::Timer::Inactivity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Timer::Inactivity> inactivity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Timer::Reauthenticate> reauthenticate;
        
}; // Native::Interface::PortChannel::Authentication::Timer


class Native::Interface::PortChannel::Authentication::Timer::Reauthenticate : public Entity
{
    public:
        Reauthenticate();
        ~Reauthenticate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf server; //type: empty

}; // Native::Interface::PortChannel::Authentication::Timer::Reauthenticate


class Native::Interface::PortChannel::Authentication::Timer::Inactivity : public Entity
{
    public:
        Inactivity();
        ~Inactivity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Value_; //type: Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_
        class Server; //type: Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server> server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_> value_;
        
}; // Native::Interface::PortChannel::Authentication::Timer::Inactivity


class Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_ : public Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf dynamic; //type: empty

}; // Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_


class Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server : public Entity
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

        YLeaf dynamic; //type: empty

}; // Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server


class Native::Interface::PortChannel::Mab : public Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eap; //type: empty

}; // Native::Interface::PortChannel::Mab


class Native::Interface::PortChannel::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bpdufilter; //type: BpdufilterEnum
        YLeaf cost; //type: uint32
        YLeaf guard; //type: GuardEnum
        YLeaf link_type; //type: LinkTypeEnum
        YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::PortChannel::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::PortChannel::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::PortChannel::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::PortChannel::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::PortChannel::SpanningTree::Mst

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Mst> mst;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SpanningTree::Vlan> vlan;
                class BpdufilterEnum;
        class GuardEnum;
        class LinkTypeEnum;

}; // Native::Interface::PortChannel::SpanningTree


class Native::Interface::PortChannel::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf enable; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Bpduguard


class Native::Interface::PortChannel::SpanningTree::Portfast : public Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf trunk; //type: empty
        YLeaf edge; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Portfast


class Native::Interface::PortChannel::SpanningTree::Vlan : public Entity
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

        YLeaf cost; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeafList vlan_ids; //type: list of  one of uint16, string

}; // Native::Interface::PortChannel::SpanningTree::Vlan


class Native::Interface::PortChannel::SpanningTree::Loopguard : public Entity
{
    public:
        Loopguard();
        ~Loopguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Loopguard


class Native::Interface::PortChannel::SpanningTree::Mst : public Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance; //type: string
        YLeaf cost; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf pre_standard; //type: empty

}; // Native::Interface::PortChannel::SpanningTree::Mst


class Native::Interface::PortChannel::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qos; //type: Native::Interface::PortChannel::Auto_::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Auto_::Qos> qos;
        
}; // Native::Interface::PortChannel::Auto_


class Native::Interface::PortChannel::Auto_::Qos : public Entity
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

        class Classify; //type: Native::Interface::PortChannel::Auto_::Qos::Classify
        class Trust; //type: Native::Interface::PortChannel::Auto_::Qos::Trust
        class Video; //type: Native::Interface::PortChannel::Auto_::Qos::Video
        class Voip; //type: Native::Interface::PortChannel::Auto_::Qos::Voip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Auto_::Qos::Classify> classify; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Auto_::Qos::Trust> trust; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Auto_::Qos::Video> video;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Auto_::Qos::Voip> voip; // presence node
        
}; // Native::Interface::PortChannel::Auto_::Qos


class Native::Interface::PortChannel::Auto_::Qos::Classify : public Entity
{
    public:
        Classify();
        ~Classify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf police; //type: empty

}; // Native::Interface::PortChannel::Auto_::Qos::Classify


class Native::Interface::PortChannel::Auto_::Qos::Trust : public Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cos; //type: empty
        YLeaf dscp; //type: empty

}; // Native::Interface::PortChannel::Auto_::Qos::Trust


class Native::Interface::PortChannel::Auto_::Qos::Video : public Entity
{
    public:
        Video();
        ~Video();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts; //type: empty
        YLeaf ip_camera; //type: empty
        YLeaf media_player; //type: empty

}; // Native::Interface::PortChannel::Auto_::Qos::Video


class Native::Interface::PortChannel::Auto_::Qos::Voip : public Entity
{
    public:
        Voip();
        ~Voip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco_phone; //type: empty
        YLeaf cisco_softphone; //type: empty
        YLeaf trust; //type: empty

}; // Native::Interface::PortChannel::Auto_::Qos::Voip


class Native::Interface::PortChannel::Datalink : public Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Interface::PortChannel::Datalink::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Datalink::Flow> flow;
        
}; // Native::Interface::PortChannel::Datalink


class Native::Interface::PortChannel::Datalink::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Interface::PortChannel::Datalink::Flow::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::PortChannel::Datalink::Flow


class Native::Interface::PortChannel::Datalink::Flow::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_defined_flow; //type: string
        YLeaf input_output; //type: InputOutputEnum
        class InputOutputEnum;

}; // Native::Interface::PortChannel::Datalink::Flow::Monitor


class Native::Interface::PortChannel::Energywise : public Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf activitycheck; //type: empty

}; // Native::Interface::PortChannel::Energywise


class Native::Interface::PortChannel::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CivicLocationId; //type: Native::Interface::PortChannel::Location::CivicLocationId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::PortChannel::Location


class Native::Interface::PortChannel::Location::CivicLocationId : public Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::PortChannel::Location::CivicLocationId::Host
        class None; //type: Native::Interface::PortChannel::Location::CivicLocationId::None

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::PortChannel::Location::CivicLocationId


class Native::Interface::PortChannel::Location::CivicLocationId::Host : public Entity
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

        YLeaf port_location; //type: string

}; // Native::Interface::PortChannel::Location::CivicLocationId::Host


class Native::Interface::PortChannel::Location::CivicLocationId::None : public Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_location; //type: string

}; // Native::Interface::PortChannel::Location::CivicLocationId::None


class Native::Interface::PortChannel::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessGroup; //type: Native::Interface::PortChannel::Mac::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Mac::AccessGroup> access_group;
        
}; // Native::Interface::PortChannel::Mac


class Native::Interface::PortChannel::Mac::AccessGroup : public Entity
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

        class AclName; //type: Native::Interface::PortChannel::Mac::AccessGroup::AclName

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Mac::AccessGroup::AclName> acl_name;
        
}; // Native::Interface::PortChannel::Mac::AccessGroup


class Native::Interface::PortChannel::Mac::AccessGroup::AclName : public Entity
{
    public:
        AclName();
        ~AclName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: string
        YLeaf apply_to; //type: ApplyToEnum
        class ApplyToEnum;

}; // Native::Interface::PortChannel::Mac::AccessGroup::AclName


class Native::Interface::PortChannel::Macro : public Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class Auto_; //type: Native::Interface::PortChannel::Macro::Auto_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Macro::Auto_> auto_;
        
}; // Native::Interface::PortChannel::Macro


class Native::Interface::PortChannel::Macro::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processing; //type: boolean

}; // Native::Interface::PortChannel::Macro::Auto_


class Native::Interface::PortChannel::DualActive : public Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_hello; //type: empty

}; // Native::Interface::PortChannel::DualActive


class Native::Interface::PortChannel::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: boolean
        YLeaf transmit; //type: boolean

}; // Native::Interface::PortChannel::Lldp


class Native::Interface::PortChannel::LoadBalancing : public Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Interface::PortChannel::LoadBalancing


class Native::Interface::PortChannel::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        class ServicePolicy; //type: Native::Interface::PortChannel::VlanRange::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::PortChannel::VlanRange


class Native::Interface::PortChannel::VlanRange::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: string
        YLeaf output; //type: string

}; // Native::Interface::PortChannel::VlanRange::ServicePolicy


class Native::Interface::PortChannel::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Virtual_; //type: Native::Interface::PortChannel::Switch::Virtual_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::Switch::Virtual_> virtual_;
        
}; // Native::Interface::PortChannel::Switch


class Native::Interface::PortChannel::Switch::Virtual_ : public Entity
{
    public:
        Virtual_();
        ~Virtual_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link; //type: uint8

}; // Native::Interface::PortChannel::Switch::Virtual_


class Native::Interface::PortChannel::SrrQueue : public Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bandwidth; //type: Native::Interface::PortChannel::SrrQueue::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::PortChannel::SrrQueue


class Native::Interface::PortChannel::SrrQueue::Bandwidth : public Entity
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

        class Shape; //type: Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::PortChannel::SrrQueue::Bandwidth::Share

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannel::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::PortChannel::SrrQueue::Bandwidth


class Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint16
        YLeaf weight2; //type: uint16
        YLeaf weight3; //type: uint16
        YLeaf weight4; //type: uint16

}; // Native::Interface::PortChannel::SrrQueue::Bandwidth::Shape


class Native::Interface::PortChannel::SrrQueue::Bandwidth::Share : public Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint8
        YLeaf weight2; //type: uint8
        YLeaf weight3; //type: uint8
        YLeaf weight4; //type: uint8

}; // Native::Interface::PortChannel::SrrQueue::Bandwidth::Share


class Native::Interface::PortChannel::Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_link; //type: empty

}; // Native::Interface::PortChannel::Macsec


class Native::Interface::PortChannelSubinterface : public Entity
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

        class PortChannel; //type: Native::Interface::PortChannelSubinterface::PortChannel

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel> > port_channel;
        
}; // Native::Interface::PortChannelSubinterface


class Native::Interface::PortChannelSubinterface::PortChannel : public Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        YLeaf channel_protocol; //type: ChannelProtocolEnum
        YLeaf duplex; //type: DuplexEnum
        class SwitchportConf; //type: Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf
        class Switchport; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport
        class Arp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Arp
        class Backup; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup
        class Cemoudp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp
        class CwsTunnel; //type: Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation
        class FairQueueConf; //type: Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf
        class FairQueue; //type: Native::Interface::PortChannelSubinterface::PortChannel::FairQueue
        class Flowcontrol; //type: Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol
        class Isis; //type: Native::Interface::PortChannelSubinterface::PortChannel::Isis
        class KeepaliveSettings; //type: Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings
        class Bfd; //type: Native::Interface::PortChannelSubinterface::PortChannel::Bfd
        class Bandwidth; //type: Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth
        class Dampening; //type: Native::Interface::PortChannelSubinterface::PortChannel::Dampening
        class Domain; //type: Native::Interface::PortChannelSubinterface::PortChannel::Domain
        class HoldQueue; //type: Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue
        class Mpls; //type: Native::Interface::PortChannelSubinterface::PortChannel::Mpls
        class IpVrf; //type: Native::Interface::PortChannelSubinterface::PortChannel::IpVrf
        class Vrf; //type: Native::Interface::PortChannelSubinterface::PortChannel::Vrf
        class Ip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ip
        class Ipv6; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ipv6
        class Logging; //type: Native::Interface::PortChannelSubinterface::PortChannel::Logging
        class Mdix; //type: Native::Interface::PortChannelSubinterface::PortChannel::Mdix
        class Mop; //type: Native::Interface::PortChannelSubinterface::PortChannel::Mop
        class Interface_Qos; //type: Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos
        class Standby; //type: Native::Interface::PortChannelSubinterface::PortChannel::Standby
        class AccessSession; //type: Native::Interface::PortChannelSubinterface::PortChannel::AccessSession
        class StormControl; //type: Native::Interface::PortChannelSubinterface::PortChannel::StormControl
        class Trust; //type: Native::Interface::PortChannelSubinterface::PortChannel::Trust
        class Utd; //type: Native::Interface::PortChannelSubinterface::PortChannel::Utd
        class PriorityQueue; //type: Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue
        class RcvQueue; //type: Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue
        class Peer; //type: Native::Interface::PortChannelSubinterface::PortChannel::Peer
        class PmPath; //type: Native::Interface::PortChannelSubinterface::PortChannel::PmPath
        class CarrierDelay; //type: Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay
        class ChannelGroup; //type: Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup
        class Ethernet; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet
        class Negotiation; //type: Native::Interface::PortChannelSubinterface::PortChannel::Negotiation
        class Synchronous; //type: Native::Interface::PortChannelSubinterface::PortChannel::Synchronous
        class Speed; //type: Native::Interface::PortChannelSubinterface::PortChannel::Speed
        class Plim; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim
        class Pppoe; //type: Native::Interface::PortChannelSubinterface::PortChannel::Pppoe
        class Service; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service
        class Auto_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Auto_
        class Datalink; //type: Native::Interface::PortChannelSubinterface::PortChannel::Datalink
        class Energywise; //type: Native::Interface::PortChannelSubinterface::PortChannel::Energywise
        class Location; //type: Native::Interface::PortChannelSubinterface::PortChannel::Location
        class Mac; //type: Native::Interface::PortChannelSubinterface::PortChannel::Mac
        class Macro; //type: Native::Interface::PortChannelSubinterface::PortChannel::Macro
        class DualActive; //type: Native::Interface::PortChannelSubinterface::PortChannel::DualActive
        class Lldp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Lldp
        class LoadBalancing; //type: Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing
        class VlanRange; //type: Native::Interface::PortChannelSubinterface::PortChannel::VlanRange
        class Switch; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switch
        class SrrQueue; //type: Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue
        class Macsec; //type: Native::Interface::PortChannelSubinterface::PortChannel::Macsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::DualActive> dual_active;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing> load_balancing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Location> location;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Macro> macro;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Macsec> macsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue> srr_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switch> switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Utd> utd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::VlanRange> > vlan_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel


class Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::SwitchportConf


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport : public Entity
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

        YLeaf nonegotiate; //type: empty
        YLeaf protected_; //type: empty
        YLeaf host; //type: empty
        class Access; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access
        class Block; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block
        class Mode; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode
        class PortSecurity; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk
        class Voice; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice
        class Priority; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority
        class Autostate; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate> autostate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk> trunk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice> voice;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan : public Entity
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

        YLeaf vlan; //type: one of uint16, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Block


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode : public Entity
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

        YLeaf dynamic; //type: DynamicEnum
        class Access; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk> trunk; // presence node
                class DynamicEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Access


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel : public Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Dot1QTunnel


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf promiscuous; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::PrivateVlan


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::Trunk


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Aging; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        YLeaf type; //type: TypeEnum
        class TypeEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sticky; //type: empty
        YLeaf hw_address; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::MacAddress


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_addresses; //type: uint16
        YLeaf vlan; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Maximum


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        class Allowed; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_> native;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning> pruning;
                class EncapsulationEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed : public Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan : public Entity
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

        YLeaf vlans; //type: string
        YLeaf add; //type: one of uint16, string
        YLeaf all; //type: empty
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Allowed::Vlan


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_ : public Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        class VlanEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning : public Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan : public Entity
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

        YLeaf add; //type: one of uint16, string
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList vlans; //type: list of  one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Pruning::Vlan


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan> vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan : public Entity
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

        YLeaf vlan; //type: one of uint16, string, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect : public Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CiscoPhone; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone : public Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf full_duplex; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority : public Entity
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

        class Extend; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend : public Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        YLeaf cos; //type: uint8

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Priority::Extend


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate : public Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exclude; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Autostate


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Association; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host : public Entity
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

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Host


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation : public Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::HostAssociation


class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PrivateVlan::Mapping


class Native::Interface::PortChannelSubinterface::PortChannel::Arp : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Arp


class Native::Interface::PortChannelSubinterface::PortChannel::Backup : public Entity
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

        class Delay; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay
        class Interface_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_
        class Load; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load> load;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_> port_channel_subinterface;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmSubinterface


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::LispSubinterface


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_ : public Entity
{
    public:
        PortChannelSubinterface_();
        ~PortChannelSubinterface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Interface_::PortChannelSubinterface_


class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load

class Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Ospfv3::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::PortChannel::Authentication::ControlDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf in;

};

class Native::Interface::PortChannel::Authentication::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::PortChannel::Authentication::PortControlEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf force_authorized;
        static const Enum::YLeaf force_unauthorized;

};

class Native::Interface::PortChannel::Authentication::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::PortChannel::SpanningTree::BpdufilterEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class Native::Interface::PortChannel::SpanningTree::GuardEnum : public Enum
{
    public:
        static const Enum::YLeaf loop;
        static const Enum::YLeaf none;
        static const Enum::YLeaf root;

};

class Native::Interface::PortChannel::SpanningTree::LinkTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf none;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf root;
        static const Enum::YLeaf shared;

};

class Native::Interface::PortChannel::Datalink::Flow::Monitor::InputOutputEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::PortChannel::Mac::AccessGroup::AclName::ApplyToEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::PortChannelSubinterface::PortChannel::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::PortChannelSubinterface::PortChannel::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::PortChannelSubinterface::PortChannel::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::PortChannelSubinterface::PortChannel::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Access::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Mode::DynamicEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::PortSecurity::Aging::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf inactivity;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf negotiate;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Trunk::Native_::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf tag;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Switchport::Voice::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1p;
        static const Enum::YLeaf none;
        static const Enum::YLeaf untagged;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_49_ */

