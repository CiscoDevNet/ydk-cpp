#ifndef _CISCO_IOS_XE_NATIVE_26_
#define _CISCO_IOS_XE_NATIVE_26_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_22.hpp"
#include "Cisco_IOS_XE_native_25.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Shutdown : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Shutdown


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6 : public Entity
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

        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Area
        class Authentication; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Authentication
        class Bfd; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Bfd
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit
        class FloodReduction; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::FloodReduction
        class Manet; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet
        class MtuIgnore; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore
        class MultiArea; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MultiArea
        class Neighbor; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor
        class Network; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network
        class PrefixSuppression; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression
        class Shutdown; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Shutdown

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf instance; //type: uint8

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Area


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Authentication : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Authentication


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Bfd : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Bfd


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost : public Entity
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
        class Dynamic; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic : public Entity
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
        class Hysteresis; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight : public Entity
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

        class L2Factor; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter : public Entity
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
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit : public Entity
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

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::FloodReduction


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet : public Entity
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

        class Peering; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering> peering;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering : public Entity
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
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MultiArea : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Shutdown : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::Fastethernet::Ospfv3::Authentication : public Entity
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
        class Ipsec; //type: Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::Fastethernet::Ospfv3::Authentication


class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec : public Entity
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
        class Md5; //type: Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec


class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5 : public Entity
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

        class KeyString; //type: Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1 : public Entity
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

        class KeyString; //type: Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::Fastethernet::Ospfv3::Bfd : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Bfd


class Native::Interface::Fastethernet::Ospfv3::Cost : public Entity
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
        class Dynamic; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::Cost


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic : public Entity
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
        class Hysteresis; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Hysteresis : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight : public Entity
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

        class L2Factor; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Latency : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Resources : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::Fastethernet::Ospfv3::DatabaseFilter : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::DemandCircuit : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::DemandCircuit


class Native::Interface::Fastethernet::Ospfv3::Encryption : public Entity
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
        class Ipsec; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec : public Entity
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
        class Ipsec_3Des; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des : public Entity
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

        class KeyString; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc : public Entity
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

        class AesCbc128; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
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

        class KeyString; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public Entity
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

        class KeyString; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public Entity
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

        class KeyString; //type: Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Fastethernet::Ospfv3::Manet : public Entity
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

        class Peering; //type: Native::Interface::Fastethernet::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::Fastethernet::Ospfv3::Manet


class Native::Interface::Fastethernet::Ospfv3::Manet::Peering : public Entity
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
        class Cost; //type: Native::Interface::Fastethernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Fastethernet::Ospfv3::Manet::Peering


class Native::Interface::Fastethernet::Ospfv3::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::Fastethernet::Ospfv3::MultiArea : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::MultiArea


class Native::Interface::Fastethernet::Ospfv3::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Fastethernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Fastethernet::Ospfv3::Neighbor


class Native::Interface::Fastethernet::Ospfv3::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::Fastethernet::Ospfv3::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Fastethernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Fastethernet::Ospfv3::Network


class Native::Interface::Fastethernet::Ospfv3::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::Fastethernet::Ospfv3::PrefixSuppression : public Entity
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

}; // Native::Interface::Fastethernet::Ospfv3::PrefixSuppression


class Native::Interface::Fastethernet::Power : public Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inline_; //type: Native::Interface::Fastethernet::Power::Inline_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_> inline_;
        
}; // Native::Interface::Fastethernet::Power


class Native::Interface::Fastethernet::Power::Inline_ : public Entity
{
    public:
        Inline_();
        ~Inline_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf consumption; //type: uint16
        YLeaf never; //type: empty
        class Auto_; //type: Native::Interface::Fastethernet::Power::Inline_::Auto_
        class FourPair; //type: Native::Interface::Fastethernet::Power::Inline_::FourPair
        class Police; //type: Native::Interface::Fastethernet::Power::Inline_::Police
        class Port; //type: Native::Interface::Fastethernet::Power::Inline_::Port
        class Static_; //type: Native::Interface::Fastethernet::Power::Inline_::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_::Auto_> auto_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_::FourPair> four_pair;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_::Police> police; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_::Port> port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_::Static_> static_; // presence node
        
}; // Native::Interface::Fastethernet::Power::Inline_


class Native::Interface::Fastethernet::Power::Inline_::Auto_ : public Entity
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

        YLeaf max; //type: int16

}; // Native::Interface::Fastethernet::Power::Inline_::Auto_


class Native::Interface::Fastethernet::Power::Inline_::FourPair : public Entity
{
    public:
        FourPair();
        ~FourPair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forced; //type: empty

}; // Native::Interface::Fastethernet::Power::Inline_::FourPair


class Native::Interface::Fastethernet::Power::Inline_::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Fastethernet::Power::Inline_::Police::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Power::Inline_::Police::Action> action;
        
}; // Native::Interface::Fastethernet::Power::Inline_::Police


class Native::Interface::Fastethernet::Power::Inline_::Police::Action : public Entity
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

        YLeaf errdisable; //type: empty
        YLeaf log; //type: empty

}; // Native::Interface::Fastethernet::Power::Inline_::Police::Action


class Native::Interface::Fastethernet::Power::Inline_::Port : public Entity
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

        YLeaf poe_ha; //type: empty
        YLeaf two_event; //type: empty

}; // Native::Interface::Fastethernet::Power::Inline_::Port


class Native::Interface::Fastethernet::Power::Inline_::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: int16

}; // Native::Interface::Fastethernet::Power::Inline_::Static_


class Native::Interface::Fastethernet::Authentication : public Entity
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
        class Event; //type: Native::Interface::Fastethernet::Authentication::Event
        class Order; //type: Native::Interface::Fastethernet::Authentication::Order
        class Priority; //type: Native::Interface::Fastethernet::Authentication::Priority
        class Timer; //type: Native::Interface::Fastethernet::Authentication::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Order> order;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Timer> timer;
                class ControlDirectionEnum;
        class HostModeEnum;
        class PortControlEnum;
        class ViolationEnum;

}; // Native::Interface::Fastethernet::Authentication


class Native::Interface::Fastethernet::Authentication::Event : public Entity
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

        class Server; //type: Native::Interface::Fastethernet::Authentication::Event::Server
        class Fail; //type: Native::Interface::Fastethernet::Authentication::Event::Fail
        class NoResponse; //type: Native::Interface::Fastethernet::Authentication::Event::NoResponse

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Fail> fail;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::NoResponse> no_response;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server> server;
        
}; // Native::Interface::Fastethernet::Authentication::Event


class Native::Interface::Fastethernet::Authentication::Event::Server : public Entity
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

        class Alive; //type: Native::Interface::Fastethernet::Authentication::Event::Server::Alive
        class Dead; //type: Native::Interface::Fastethernet::Authentication::Event::Server::Dead

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server::Alive> alive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server::Dead> dead;
        
}; // Native::Interface::Fastethernet::Authentication::Event::Server


class Native::Interface::Fastethernet::Authentication::Event::Server::Alive : public Entity
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

        class Action; //type: Native::Interface::Fastethernet::Authentication::Event::Server::Alive::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server::Alive::Action> action;
        
}; // Native::Interface::Fastethernet::Authentication::Event::Server::Alive


class Native::Interface::Fastethernet::Authentication::Event::Server::Alive::Action : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Event::Server::Alive::Action


class Native::Interface::Fastethernet::Authentication::Event::Server::Dead : public Entity
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

        class Action; //type: Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action> action;
        
}; // Native::Interface::Fastethernet::Authentication::Event::Server::Dead


class Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action : public Entity
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

        class Authorize; //type: Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Authorize
        class Reinitialize; //type: Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Reinitialize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Authorize> authorize; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Reinitialize> reinitialize;
        
}; // Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action


class Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Authorize : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Authorize


class Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Reinitialize : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Event::Server::Dead::Action::Reinitialize


class Native::Interface::Fastethernet::Authentication::Event::Fail : public Entity
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

        class Action; //type: Native::Interface::Fastethernet::Authentication::Event::Fail::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Fail::Action> action;
        
}; // Native::Interface::Fastethernet::Authentication::Event::Fail


class Native::Interface::Fastethernet::Authentication::Event::Fail::Action : public Entity
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

        class Authorize; //type: Native::Interface::Fastethernet::Authentication::Event::Fail::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::Fail::Action::Authorize> authorize;
        
}; // Native::Interface::Fastethernet::Authentication::Event::Fail::Action


class Native::Interface::Fastethernet::Authentication::Event::Fail::Action::Authorize : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Event::Fail::Action::Authorize


class Native::Interface::Fastethernet::Authentication::Event::NoResponse : public Entity
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

        class Action; //type: Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action> action;
        
}; // Native::Interface::Fastethernet::Authentication::Event::NoResponse


class Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action : public Entity
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

        class Authorize; //type: Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action::Authorize> authorize;
        
}; // Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action


class Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action::Authorize : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Event::NoResponse::Action::Authorize


class Native::Interface::Fastethernet::Authentication::Order : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Order


class Native::Interface::Fastethernet::Authentication::Priority : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Priority


class Native::Interface::Fastethernet::Authentication::Timer : public Entity
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
        class Reauthenticate; //type: Native::Interface::Fastethernet::Authentication::Timer::Reauthenticate
        class Inactivity; //type: Native::Interface::Fastethernet::Authentication::Timer::Inactivity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Timer::Inactivity> inactivity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Timer::Reauthenticate> reauthenticate;
        
}; // Native::Interface::Fastethernet::Authentication::Timer


class Native::Interface::Fastethernet::Authentication::Timer::Reauthenticate : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Timer::Reauthenticate


class Native::Interface::Fastethernet::Authentication::Timer::Inactivity : public Entity
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

        class Value_; //type: Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Value_
        class Server; //type: Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Server> server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Value_> value_;
        
}; // Native::Interface::Fastethernet::Authentication::Timer::Inactivity


class Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Value_ : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Value_


class Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Server : public Entity
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

}; // Native::Interface::Fastethernet::Authentication::Timer::Inactivity::Server


class Native::Interface::Fastethernet::Mab : public Entity
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

}; // Native::Interface::Fastethernet::Mab


class Native::Interface::Fastethernet::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Interface::Fastethernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::Fastethernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::Fastethernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::Fastethernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::Fastethernet::SpanningTree::Mst

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SpanningTree::Mst> mst;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SpanningTree::Vlan> vlan;
                class BpdufilterEnum;
        class GuardEnum;
        class LinkTypeEnum;

}; // Native::Interface::Fastethernet::SpanningTree


class Native::Interface::Fastethernet::SpanningTree::Bpduguard : public Entity
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

}; // Native::Interface::Fastethernet::SpanningTree::Bpduguard


class Native::Interface::Fastethernet::SpanningTree::Portfast : public Entity
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

}; // Native::Interface::Fastethernet::SpanningTree::Portfast


class Native::Interface::Fastethernet::SpanningTree::Vlan : public Entity
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

}; // Native::Interface::Fastethernet::SpanningTree::Vlan


class Native::Interface::Fastethernet::SpanningTree::Loopguard : public Entity
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

}; // Native::Interface::Fastethernet::SpanningTree::Loopguard


class Native::Interface::Fastethernet::SpanningTree::Mst : public Entity
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

}; // Native::Interface::Fastethernet::SpanningTree::Mst


class Native::Interface::Fastethernet::Auto_ : public Entity
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

        class Qos; //type: Native::Interface::Fastethernet::Auto_::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Auto_::Qos> qos;
        
}; // Native::Interface::Fastethernet::Auto_


class Native::Interface::Fastethernet::Auto_::Qos : public Entity
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

        class Classify; //type: Native::Interface::Fastethernet::Auto_::Qos::Classify
        class Trust; //type: Native::Interface::Fastethernet::Auto_::Qos::Trust
        class Video; //type: Native::Interface::Fastethernet::Auto_::Qos::Video
        class Voip; //type: Native::Interface::Fastethernet::Auto_::Qos::Voip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Auto_::Qos::Classify> classify; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Auto_::Qos::Trust> trust; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Auto_::Qos::Video> video;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Auto_::Qos::Voip> voip; // presence node
        
}; // Native::Interface::Fastethernet::Auto_::Qos


class Native::Interface::Fastethernet::Auto_::Qos::Classify : public Entity
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

}; // Native::Interface::Fastethernet::Auto_::Qos::Classify


class Native::Interface::Fastethernet::Auto_::Qos::Trust : public Entity
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

}; // Native::Interface::Fastethernet::Auto_::Qos::Trust


class Native::Interface::Fastethernet::Auto_::Qos::Video : public Entity
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

}; // Native::Interface::Fastethernet::Auto_::Qos::Video


class Native::Interface::Fastethernet::Auto_::Qos::Voip : public Entity
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

}; // Native::Interface::Fastethernet::Auto_::Qos::Voip


class Native::Interface::Fastethernet::Datalink : public Entity
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

        class Flow; //type: Native::Interface::Fastethernet::Datalink::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Datalink::Flow> flow;
        
}; // Native::Interface::Fastethernet::Datalink


class Native::Interface::Fastethernet::Datalink::Flow : public Entity
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

        class Monitor; //type: Native::Interface::Fastethernet::Datalink::Flow::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::Fastethernet::Datalink::Flow


class Native::Interface::Fastethernet::Datalink::Flow::Monitor : public Entity
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

}; // Native::Interface::Fastethernet::Datalink::Flow::Monitor


class Native::Interface::Fastethernet::Energywise : public Entity
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

}; // Native::Interface::Fastethernet::Energywise


class Native::Interface::Fastethernet::Location : public Entity
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

        class CivicLocationId; //type: Native::Interface::Fastethernet::Location::CivicLocationId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::Fastethernet::Location


class Native::Interface::Fastethernet::Location::CivicLocationId : public Entity
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
        class Host; //type: Native::Interface::Fastethernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::Fastethernet::Location::CivicLocationId::None

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::Fastethernet::Location::CivicLocationId


class Native::Interface::Fastethernet::Location::CivicLocationId::Host : public Entity
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

}; // Native::Interface::Fastethernet::Location::CivicLocationId::Host


class Native::Interface::Fastethernet::Location::CivicLocationId::None : public Entity
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

}; // Native::Interface::Fastethernet::Location::CivicLocationId::None


class Native::Interface::Fastethernet::Mac : public Entity
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

        class AccessGroup; //type: Native::Interface::Fastethernet::Mac::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mac::AccessGroup> access_group;
        
}; // Native::Interface::Fastethernet::Mac


class Native::Interface::Fastethernet::Mac::AccessGroup : public Entity
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

        class AclName; //type: Native::Interface::Fastethernet::Mac::AccessGroup::AclName

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Mac::AccessGroup::AclName> acl_name;
        
}; // Native::Interface::Fastethernet::Mac::AccessGroup


class Native::Interface::Fastethernet::Mac::AccessGroup::AclName : public Entity
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

}; // Native::Interface::Fastethernet::Mac::AccessGroup::AclName


class Native::Interface::Fastethernet::Macro : public Entity
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
        class Auto_; //type: Native::Interface::Fastethernet::Macro::Auto_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Macro::Auto_> auto_;
        
}; // Native::Interface::Fastethernet::Macro


class Native::Interface::Fastethernet::Macro::Auto_ : public Entity
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

}; // Native::Interface::Fastethernet::Macro::Auto_


class Native::Interface::Fastethernet::DualActive : public Entity
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

}; // Native::Interface::Fastethernet::DualActive


class Native::Interface::Fastethernet::Lldp : public Entity
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

}; // Native::Interface::Fastethernet::Lldp


class Native::Interface::Fastethernet::LoadBalancing : public Entity
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

}; // Native::Interface::Fastethernet::LoadBalancing


class Native::Interface::Fastethernet::VlanRange : public Entity
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
        class ServicePolicy; //type: Native::Interface::Fastethernet::VlanRange::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::Fastethernet::VlanRange


class Native::Interface::Fastethernet::VlanRange::ServicePolicy : public Entity
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

}; // Native::Interface::Fastethernet::VlanRange::ServicePolicy


class Native::Interface::Fastethernet::Switch : public Entity
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

        class Virtual_; //type: Native::Interface::Fastethernet::Switch::Virtual_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Switch::Virtual_> virtual_;
        
}; // Native::Interface::Fastethernet::Switch


class Native::Interface::Fastethernet::Switch::Virtual_ : public Entity
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

}; // Native::Interface::Fastethernet::Switch::Virtual_


class Native::Interface::Fastethernet::SrrQueue : public Entity
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

        class Bandwidth; //type: Native::Interface::Fastethernet::SrrQueue::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::Fastethernet::SrrQueue


class Native::Interface::Fastethernet::SrrQueue::Bandwidth : public Entity
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

        class Shape; //type: Native::Interface::Fastethernet::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::Fastethernet::SrrQueue::Bandwidth::Share

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::Fastethernet::SrrQueue::Bandwidth


class Native::Interface::Fastethernet::SrrQueue::Bandwidth::Shape : public Entity
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

}; // Native::Interface::Fastethernet::SrrQueue::Bandwidth::Shape


class Native::Interface::Fastethernet::SrrQueue::Bandwidth::Share : public Entity
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

}; // Native::Interface::Fastethernet::SrrQueue::Bandwidth::Share


class Native::Interface::Fastethernet::Macsec : public Entity
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

}; // Native::Interface::Fastethernet::Macsec


class Native::Interface::Fastethernet::DeviceTracking : public Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Fastethernet::DeviceTracking


class Native::Interface::Fastethernet::Udld : public Entity
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

        class Port; //type: Native::Interface::Fastethernet::Udld::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Fastethernet::Udld::Port> port; // presence node
        
}; // Native::Interface::Fastethernet::Udld


class Native::Interface::Fastethernet::Udld::Port : public Entity
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

}; // Native::Interface::Fastethernet::Udld::Port


class Native::Interface::Fastethernet::ZoneMember : public Entity
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

}; // Native::Interface::Fastethernet::ZoneMember


class Native::Interface::Gigabitethernet : public Entity
{
    public:
        Gigabitethernet();
        ~Gigabitethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf media_type; //type: MediaTypeEnum
        YLeaf port_type; //type: PortTypeEnum
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
        class SwitchportConf; //type: Native::Interface::Gigabitethernet::SwitchportConf
        class Switchport; //type: Native::Interface::Gigabitethernet::Switchport
        class Arp; //type: Native::Interface::Gigabitethernet::Arp
        class Backup; //type: Native::Interface::Gigabitethernet::Backup
        class Cemoudp; //type: Native::Interface::Gigabitethernet::Cemoudp
        class CwsTunnel; //type: Native::Interface::Gigabitethernet::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Gigabitethernet::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Gigabitethernet::Encapsulation
        class FairQueueConf; //type: Native::Interface::Gigabitethernet::FairQueueConf
        class FairQueue; //type: Native::Interface::Gigabitethernet::FairQueue
        class Flowcontrol; //type: Native::Interface::Gigabitethernet::Flowcontrol
        class Isis; //type: Native::Interface::Gigabitethernet::Isis
        class KeepaliveSettings; //type: Native::Interface::Gigabitethernet::KeepaliveSettings
        class Bfd; //type: Native::Interface::Gigabitethernet::Bfd
        class Bandwidth; //type: Native::Interface::Gigabitethernet::Bandwidth
        class Dampening; //type: Native::Interface::Gigabitethernet::Dampening
        class Domain; //type: Native::Interface::Gigabitethernet::Domain
        class HoldQueue; //type: Native::Interface::Gigabitethernet::HoldQueue
        class Mpls; //type: Native::Interface::Gigabitethernet::Mpls
        class IpVrf; //type: Native::Interface::Gigabitethernet::IpVrf
        class Vrf; //type: Native::Interface::Gigabitethernet::Vrf
        class Ip; //type: Native::Interface::Gigabitethernet::Ip
        class Ipv6; //type: Native::Interface::Gigabitethernet::Ipv6
        class Logging; //type: Native::Interface::Gigabitethernet::Logging
        class Mdix; //type: Native::Interface::Gigabitethernet::Mdix
        class Mop; //type: Native::Interface::Gigabitethernet::Mop
        class Interface_Qos; //type: Native::Interface::Gigabitethernet::Interface_Qos
        class Standby; //type: Native::Interface::Gigabitethernet::Standby
        class AccessSession; //type: Native::Interface::Gigabitethernet::AccessSession
        class StormControl; //type: Native::Interface::Gigabitethernet::StormControl
        class Trust; //type: Native::Interface::Gigabitethernet::Trust
        class Utd; //type: Native::Interface::Gigabitethernet::Utd
        class PriorityQueue; //type: Native::Interface::Gigabitethernet::PriorityQueue
        class RcvQueue; //type: Native::Interface::Gigabitethernet::RcvQueue
        class Peer; //type: Native::Interface::Gigabitethernet::Peer
        class PmPath; //type: Native::Interface::Gigabitethernet::PmPath
        class CarrierDelay; //type: Native::Interface::Gigabitethernet::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Gigabitethernet::ChannelGroup
        class Ethernet; //type: Native::Interface::Gigabitethernet::Ethernet
        class Negotiation; //type: Native::Interface::Gigabitethernet::Negotiation
        class Synchronous; //type: Native::Interface::Gigabitethernet::Synchronous
        class Speed; //type: Native::Interface::Gigabitethernet::Speed
        class Plim; //type: Native::Interface::Gigabitethernet::Plim
        class Pppoe; //type: Native::Interface::Gigabitethernet::Pppoe
        class Service; //type: Native::Interface::Gigabitethernet::Service
        class Xconnect; //type: Native::Interface::Gigabitethernet::Xconnect
        class Cdp; //type: Native::Interface::Gigabitethernet::Cdp
        class Crypto; //type: Native::Interface::Gigabitethernet::Crypto
        class Cts; //type: Native::Interface::Gigabitethernet::Cts
        class Dot1X; //type: Native::Interface::Gigabitethernet::Dot1X
        class Performance; //type: Native::Interface::Gigabitethernet::Performance
        class ServicePolicy; //type: Native::Interface::Gigabitethernet::ServicePolicy
        class Snmp; //type: Native::Interface::Gigabitethernet::Snmp
        class Lisp; //type: Native::Interface::Gigabitethernet::Lisp
        class Mka; //type: Native::Interface::Gigabitethernet::Mka
        class Ospfv3; //type: Native::Interface::Gigabitethernet::Ospfv3
        class Power; //type: Native::Interface::Gigabitethernet::Power
        class Authentication; //type: Native::Interface::Gigabitethernet::Authentication
        class Mab; //type: Native::Interface::Gigabitethernet::Mab
        class SpanningTree; //type: Native::Interface::Gigabitethernet::SpanningTree
        class Auto_; //type: Native::Interface::Gigabitethernet::Auto_
        class Datalink; //type: Native::Interface::Gigabitethernet::Datalink
        class Energywise; //type: Native::Interface::Gigabitethernet::Energywise
        class Location; //type: Native::Interface::Gigabitethernet::Location
        class Mac; //type: Native::Interface::Gigabitethernet::Mac
        class Macro; //type: Native::Interface::Gigabitethernet::Macro
        class DualActive; //type: Native::Interface::Gigabitethernet::DualActive
        class Lldp; //type: Native::Interface::Gigabitethernet::Lldp
        class LoadBalancing; //type: Native::Interface::Gigabitethernet::LoadBalancing
        class VlanRange; //type: Native::Interface::Gigabitethernet::VlanRange
        class Switch; //type: Native::Interface::Gigabitethernet::Switch
        class SrrQueue; //type: Native::Interface::Gigabitethernet::SrrQueue
        class Macsec; //type: Native::Interface::Gigabitethernet::Macsec
        class DeviceTracking; //type: Native::Interface::Gigabitethernet::DeviceTracking
        class Udld; //type: Native::Interface::Gigabitethernet::Udld
        class ZoneMember; //type: Native::Interface::Gigabitethernet::ZoneMember

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::DualActive> dual_active;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::LoadBalancing> load_balancing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Location> location;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mab> mab; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Macro> macro;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Macsec> macsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mka> mka;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Performance> performance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power> power;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SpanningTree> spanning_tree;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SrrQueue> srr_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switch> switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Udld> udld;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Utd> utd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::VlanRange> > vlan_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ZoneMember> zone_member;
                class MediaTypeEnum;
        class PortTypeEnum;
        class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::Gigabitethernet


class Native::Interface::Gigabitethernet::SwitchportConf : public Entity
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

}; // Native::Interface::Gigabitethernet::SwitchportConf


class Native::Interface::Gigabitethernet::Switchport : public Entity
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
        class Access; //type: Native::Interface::Gigabitethernet::Switchport::Access
        class Block; //type: Native::Interface::Gigabitethernet::Switchport::Block
        class Mode; //type: Native::Interface::Gigabitethernet::Switchport::Mode
        class PortSecurity; //type: Native::Interface::Gigabitethernet::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::Gigabitethernet::Switchport::Trunk
        class Voice; //type: Native::Interface::Gigabitethernet::Switchport::Voice
        class Priority; //type: Native::Interface::Gigabitethernet::Switchport::Priority
        class Autostate; //type: Native::Interface::Gigabitethernet::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::Gigabitethernet::Switchport::PrivateVlan
        class DeviceTracking; //type: Native::Interface::Gigabitethernet::Switchport::DeviceTracking

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Autostate> autostate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Trunk> trunk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Voice> voice;
        
}; // Native::Interface::Gigabitethernet::Switchport


class Native::Interface::Gigabitethernet::Switchport::Access : public Entity
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

        class Vlan; //type: Native::Interface::Gigabitethernet::Switchport::Access::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::Gigabitethernet::Switchport::Access


class Native::Interface::Gigabitethernet::Switchport::Access::Vlan : public Entity
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

}; // Native::Interface::Gigabitethernet::Switchport::Access::Vlan


class Native::Interface::Gigabitethernet::Switchport::Block : public Entity
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

}; // Native::Interface::Gigabitethernet::Switchport::Block

class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Fastethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Fastethernet::Ospfv3::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Fastethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Fastethernet::Ospfv3::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Fastethernet::Authentication::ControlDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf in;

};

class Native::Interface::Fastethernet::Authentication::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Fastethernet::Authentication::PortControlEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf force_authorized;
        static const Enum::YLeaf force_unauthorized;

};

class Native::Interface::Fastethernet::Authentication::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Fastethernet::SpanningTree::BpdufilterEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class Native::Interface::Fastethernet::SpanningTree::GuardEnum : public Enum
{
    public:
        static const Enum::YLeaf loop;
        static const Enum::YLeaf none;
        static const Enum::YLeaf root;

};

class Native::Interface::Fastethernet::SpanningTree::LinkTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf none;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf root;
        static const Enum::YLeaf shared;

};

class Native::Interface::Fastethernet::Datalink::Flow::Monitor::InputOutputEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Fastethernet::Mac::AccessGroup::AclName::ApplyToEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::MediaTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_select;
        static const Enum::YLeaf rj45;
        static const Enum::YLeaf sfp;

};

class Native::Interface::Gigabitethernet::PortTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf nni;

};

class Native::Interface::Gigabitethernet::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Gigabitethernet::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Gigabitethernet::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::Gigabitethernet::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::Gigabitethernet::Switchport::Access::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_26_ */

