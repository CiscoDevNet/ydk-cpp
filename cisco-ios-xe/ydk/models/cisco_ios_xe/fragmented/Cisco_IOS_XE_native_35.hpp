#ifndef _CISCO_IOS_XE_NATIVE_35_
#define _CISCO_IOS_XE_NATIVE_35_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_31.hpp"
#include "Cisco_IOS_XE_native_34.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic : public Entity
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
        class Hysteresis; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight : public Entity
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

        class L2Factor; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet : public Entity
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

        class Peering; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering> peering;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering : public Entity
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
        class Cost; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Network


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6 : public Entity
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
        class Area; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Area
        class Authentication; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication
        class Bfd; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd
        class Cost; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost
        class DatabaseFilter; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit
        class FloodReduction; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction
        class Manet; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet
        class MtuIgnore; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore
        class MultiArea; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea
        class Neighbor; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor
        class Network; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network
        class PrefixSuppression; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression
        class Shutdown; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Area : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Area


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost : public Entity
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
        class Dynamic; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic : public Entity
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
        class Hysteresis; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight : public Entity
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

        class L2Factor; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet : public Entity
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

        class Peering; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering> peering;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering : public Entity
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
        class Cost; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::Tengigabitethernet::Ospfv3::Authentication : public Entity
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
        class Ipsec; //type: Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Authentication


class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec : public Entity
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
        class Md5; //type: Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec


class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5 : public Entity
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

        class KeyString; //type: Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1 : public Entity
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

        class KeyString; //type: Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::Tengigabitethernet::Ospfv3::Bfd : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Bfd


class Native::Interface::Tengigabitethernet::Ospfv3::Cost : public Entity
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
        class Dynamic; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic : public Entity
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
        class Hysteresis; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight : public Entity
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

        class L2Factor; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::Tengigabitethernet::Ospfv3::DatabaseFilter : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ospfv3::DemandCircuit : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::DemandCircuit


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption : public Entity
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
        class Ipsec; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec : public Entity
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
        class Ipsec_3Des; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des : public Entity
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

        class KeyString; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc : public Entity
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

        class AesCbc128; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
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

        class KeyString; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public Entity
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

        class KeyString; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public Entity
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

        class KeyString; //type: Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Tengigabitethernet::Ospfv3::Manet : public Entity
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

        class Peering; //type: Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Manet


class Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering : public Entity
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
        class Cost; //type: Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering


class Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering::Cost : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::Tengigabitethernet::Ospfv3::MultiArea : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::MultiArea


class Native::Interface::Tengigabitethernet::Ospfv3::Neighbor : public Entity
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
        class DatabaseFilter; //type: Native::Interface::Tengigabitethernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Neighbor


class Native::Interface::Tengigabitethernet::Ospfv3::Neighbor::DatabaseFilter : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ospfv3::Network : public Entity
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
        class PointToMultipoint; //type: Native::Interface::Tengigabitethernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ospfv3::Network


class Native::Interface::Tengigabitethernet::Ospfv3::Network::PointToMultipoint : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::Tengigabitethernet::Ospfv3::PrefixSuppression : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ospfv3::PrefixSuppression


class Native::Interface::Tengigabitethernet::Power : public Entity
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

        class Inline_; //type: Native::Interface::Tengigabitethernet::Power::Inline_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_> inline_;
        
}; // Native::Interface::Tengigabitethernet::Power


class Native::Interface::Tengigabitethernet::Power::Inline_ : public Entity
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
        class Auto_; //type: Native::Interface::Tengigabitethernet::Power::Inline_::Auto_
        class FourPair; //type: Native::Interface::Tengigabitethernet::Power::Inline_::FourPair
        class Police; //type: Native::Interface::Tengigabitethernet::Power::Inline_::Police
        class Port; //type: Native::Interface::Tengigabitethernet::Power::Inline_::Port
        class Static_; //type: Native::Interface::Tengigabitethernet::Power::Inline_::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_::Auto_> auto_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_::FourPair> four_pair;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_::Police> police; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_::Port> port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_::Static_> static_; // presence node
        
}; // Native::Interface::Tengigabitethernet::Power::Inline_


class Native::Interface::Tengigabitethernet::Power::Inline_::Auto_ : public Entity
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

}; // Native::Interface::Tengigabitethernet::Power::Inline_::Auto_


class Native::Interface::Tengigabitethernet::Power::Inline_::FourPair : public Entity
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

}; // Native::Interface::Tengigabitethernet::Power::Inline_::FourPair


class Native::Interface::Tengigabitethernet::Power::Inline_::Police : public Entity
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

        class Action; //type: Native::Interface::Tengigabitethernet::Power::Inline_::Police::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power::Inline_::Police::Action> action;
        
}; // Native::Interface::Tengigabitethernet::Power::Inline_::Police


class Native::Interface::Tengigabitethernet::Power::Inline_::Police::Action : public Entity
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

}; // Native::Interface::Tengigabitethernet::Power::Inline_::Police::Action


class Native::Interface::Tengigabitethernet::Power::Inline_::Port : public Entity
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

}; // Native::Interface::Tengigabitethernet::Power::Inline_::Port


class Native::Interface::Tengigabitethernet::Power::Inline_::Static_ : public Entity
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

}; // Native::Interface::Tengigabitethernet::Power::Inline_::Static_


class Native::Interface::Tengigabitethernet::Authentication : public Entity
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
        class Event; //type: Native::Interface::Tengigabitethernet::Authentication::Event
        class Order; //type: Native::Interface::Tengigabitethernet::Authentication::Order
        class Priority; //type: Native::Interface::Tengigabitethernet::Authentication::Priority
        class Timer; //type: Native::Interface::Tengigabitethernet::Authentication::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Order> order;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Timer> timer;
                class ControlDirectionEnum;
        class HostModeEnum;
        class PortControlEnum;
        class ViolationEnum;

}; // Native::Interface::Tengigabitethernet::Authentication


class Native::Interface::Tengigabitethernet::Authentication::Event : public Entity
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

        class Server; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server
        class Fail; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Fail
        class NoResponse; //type: Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Fail> fail;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse> no_response;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server> server;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event


class Native::Interface::Tengigabitethernet::Authentication::Event::Server : public Entity
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

        class Alive; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive
        class Dead; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive> alive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead> dead;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server


class Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive : public Entity
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

        class Action; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive::Action> action;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive


class Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive::Action : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server::Alive::Action


class Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead : public Entity
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

        class Action; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action> action;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead


class Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action : public Entity
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

        class Authorize; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Authorize
        class Reinitialize; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Authorize> authorize; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize> reinitialize;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action


class Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Authorize : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Authorize


class Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize


class Native::Interface::Tengigabitethernet::Authentication::Event::Fail : public Entity
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

        class Action; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action> action;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::Fail


class Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action : public Entity
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

        class Authorize; //type: Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action::Authorize> authorize;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action


class Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action::Authorize : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Event::Fail::Action::Authorize


class Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse : public Entity
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

        class Action; //type: Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action> action;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse


class Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action : public Entity
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

        class Authorize; //type: Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action::Authorize> authorize;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action


class Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action::Authorize : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Event::NoResponse::Action::Authorize


class Native::Interface::Tengigabitethernet::Authentication::Order : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Order


class Native::Interface::Tengigabitethernet::Authentication::Priority : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Priority


class Native::Interface::Tengigabitethernet::Authentication::Timer : public Entity
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
        class Reauthenticate; //type: Native::Interface::Tengigabitethernet::Authentication::Timer::Reauthenticate
        class Inactivity; //type: Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity> inactivity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Timer::Reauthenticate> reauthenticate;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Timer


class Native::Interface::Tengigabitethernet::Authentication::Timer::Reauthenticate : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Timer::Reauthenticate


class Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity : public Entity
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

        class Value_; //type: Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Value_
        class Server; //type: Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Server> server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Value_> value_;
        
}; // Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity


class Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Value_ : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Value_


class Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Server : public Entity
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

}; // Native::Interface::Tengigabitethernet::Authentication::Timer::Inactivity::Server


class Native::Interface::Tengigabitethernet::Mab : public Entity
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

}; // Native::Interface::Tengigabitethernet::Mab


class Native::Interface::Tengigabitethernet::SpanningTree : public Entity
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
        class Bpduguard; //type: Native::Interface::Tengigabitethernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::Tengigabitethernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::Tengigabitethernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::Tengigabitethernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::Tengigabitethernet::SpanningTree::Mst

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SpanningTree::Mst> mst;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SpanningTree::Vlan> vlan;
                class BpdufilterEnum;
        class GuardEnum;
        class LinkTypeEnum;

}; // Native::Interface::Tengigabitethernet::SpanningTree


class Native::Interface::Tengigabitethernet::SpanningTree::Bpduguard : public Entity
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

}; // Native::Interface::Tengigabitethernet::SpanningTree::Bpduguard


class Native::Interface::Tengigabitethernet::SpanningTree::Portfast : public Entity
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

}; // Native::Interface::Tengigabitethernet::SpanningTree::Portfast


class Native::Interface::Tengigabitethernet::SpanningTree::Vlan : public Entity
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

}; // Native::Interface::Tengigabitethernet::SpanningTree::Vlan


class Native::Interface::Tengigabitethernet::SpanningTree::Loopguard : public Entity
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

}; // Native::Interface::Tengigabitethernet::SpanningTree::Loopguard


class Native::Interface::Tengigabitethernet::SpanningTree::Mst : public Entity
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

}; // Native::Interface::Tengigabitethernet::SpanningTree::Mst


class Native::Interface::Tengigabitethernet::Auto_ : public Entity
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

        class Qos; //type: Native::Interface::Tengigabitethernet::Auto_::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Auto_::Qos> qos;
        
}; // Native::Interface::Tengigabitethernet::Auto_


class Native::Interface::Tengigabitethernet::Auto_::Qos : public Entity
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

        class Classify; //type: Native::Interface::Tengigabitethernet::Auto_::Qos::Classify
        class Trust; //type: Native::Interface::Tengigabitethernet::Auto_::Qos::Trust
        class Video; //type: Native::Interface::Tengigabitethernet::Auto_::Qos::Video
        class Voip; //type: Native::Interface::Tengigabitethernet::Auto_::Qos::Voip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Auto_::Qos::Classify> classify; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Auto_::Qos::Trust> trust; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Auto_::Qos::Video> video;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Auto_::Qos::Voip> voip; // presence node
        
}; // Native::Interface::Tengigabitethernet::Auto_::Qos


class Native::Interface::Tengigabitethernet::Auto_::Qos::Classify : public Entity
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

}; // Native::Interface::Tengigabitethernet::Auto_::Qos::Classify


class Native::Interface::Tengigabitethernet::Auto_::Qos::Trust : public Entity
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

}; // Native::Interface::Tengigabitethernet::Auto_::Qos::Trust


class Native::Interface::Tengigabitethernet::Auto_::Qos::Video : public Entity
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

}; // Native::Interface::Tengigabitethernet::Auto_::Qos::Video


class Native::Interface::Tengigabitethernet::Auto_::Qos::Voip : public Entity
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

}; // Native::Interface::Tengigabitethernet::Auto_::Qos::Voip


class Native::Interface::Tengigabitethernet::Datalink : public Entity
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

        class Flow; //type: Native::Interface::Tengigabitethernet::Datalink::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Datalink::Flow> flow;
        
}; // Native::Interface::Tengigabitethernet::Datalink


class Native::Interface::Tengigabitethernet::Datalink::Flow : public Entity
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

        class Monitor; //type: Native::Interface::Tengigabitethernet::Datalink::Flow::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::Tengigabitethernet::Datalink::Flow


class Native::Interface::Tengigabitethernet::Datalink::Flow::Monitor : public Entity
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

}; // Native::Interface::Tengigabitethernet::Datalink::Flow::Monitor


class Native::Interface::Tengigabitethernet::Energywise : public Entity
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

}; // Native::Interface::Tengigabitethernet::Energywise


class Native::Interface::Tengigabitethernet::Location : public Entity
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

        class CivicLocationId; //type: Native::Interface::Tengigabitethernet::Location::CivicLocationId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::Tengigabitethernet::Location


class Native::Interface::Tengigabitethernet::Location::CivicLocationId : public Entity
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
        class Host; //type: Native::Interface::Tengigabitethernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::Tengigabitethernet::Location::CivicLocationId::None

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::Tengigabitethernet::Location::CivicLocationId


class Native::Interface::Tengigabitethernet::Location::CivicLocationId::Host : public Entity
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

}; // Native::Interface::Tengigabitethernet::Location::CivicLocationId::Host


class Native::Interface::Tengigabitethernet::Location::CivicLocationId::None : public Entity
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

}; // Native::Interface::Tengigabitethernet::Location::CivicLocationId::None


class Native::Interface::Tengigabitethernet::Mac : public Entity
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

        class AccessGroup; //type: Native::Interface::Tengigabitethernet::Mac::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mac::AccessGroup> access_group;
        
}; // Native::Interface::Tengigabitethernet::Mac


class Native::Interface::Tengigabitethernet::Mac::AccessGroup : public Entity
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

        class AclName; //type: Native::Interface::Tengigabitethernet::Mac::AccessGroup::AclName

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mac::AccessGroup::AclName> acl_name;
        
}; // Native::Interface::Tengigabitethernet::Mac::AccessGroup


class Native::Interface::Tengigabitethernet::Mac::AccessGroup::AclName : public Entity
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

}; // Native::Interface::Tengigabitethernet::Mac::AccessGroup::AclName


class Native::Interface::Tengigabitethernet::Macro : public Entity
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
        class Auto_; //type: Native::Interface::Tengigabitethernet::Macro::Auto_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Macro::Auto_> auto_;
        
}; // Native::Interface::Tengigabitethernet::Macro


class Native::Interface::Tengigabitethernet::Macro::Auto_ : public Entity
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

}; // Native::Interface::Tengigabitethernet::Macro::Auto_


class Native::Interface::Tengigabitethernet::DualActive : public Entity
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

}; // Native::Interface::Tengigabitethernet::DualActive


class Native::Interface::Tengigabitethernet::Lldp : public Entity
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

}; // Native::Interface::Tengigabitethernet::Lldp


class Native::Interface::Tengigabitethernet::LoadBalancing : public Entity
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

}; // Native::Interface::Tengigabitethernet::LoadBalancing


class Native::Interface::Tengigabitethernet::VlanRange : public Entity
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
        class ServicePolicy; //type: Native::Interface::Tengigabitethernet::VlanRange::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::Tengigabitethernet::VlanRange


class Native::Interface::Tengigabitethernet::VlanRange::ServicePolicy : public Entity
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

}; // Native::Interface::Tengigabitethernet::VlanRange::ServicePolicy


class Native::Interface::Tengigabitethernet::Switch : public Entity
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

        class Virtual_; //type: Native::Interface::Tengigabitethernet::Switch::Virtual_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switch::Virtual_> virtual_;
        
}; // Native::Interface::Tengigabitethernet::Switch


class Native::Interface::Tengigabitethernet::Switch::Virtual_ : public Entity
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

}; // Native::Interface::Tengigabitethernet::Switch::Virtual_


class Native::Interface::Tengigabitethernet::SrrQueue : public Entity
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

        class Bandwidth; //type: Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::Tengigabitethernet::SrrQueue


class Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth : public Entity
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

        class Shape; //type: Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Share

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth


class Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Shape : public Entity
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

}; // Native::Interface::Tengigabitethernet::SrrQueue::Bandwidth::Shape

class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tengigabitethernet::Ospfv3::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Tengigabitethernet::Ospfv3::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Authentication::ControlDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf in;

};

class Native::Interface::Tengigabitethernet::Authentication::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Tengigabitethernet::Authentication::PortControlEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf force_authorized;
        static const Enum::YLeaf force_unauthorized;

};

class Native::Interface::Tengigabitethernet::Authentication::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Tengigabitethernet::SpanningTree::BpdufilterEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class Native::Interface::Tengigabitethernet::SpanningTree::GuardEnum : public Enum
{
    public:
        static const Enum::YLeaf loop;
        static const Enum::YLeaf none;
        static const Enum::YLeaf root;

};

class Native::Interface::Tengigabitethernet::SpanningTree::LinkTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf none;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf root;
        static const Enum::YLeaf shared;

};

class Native::Interface::Tengigabitethernet::Datalink::Flow::Monitor::InputOutputEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Tengigabitethernet::Mac::AccessGroup::AclName::ApplyToEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_35_ */

