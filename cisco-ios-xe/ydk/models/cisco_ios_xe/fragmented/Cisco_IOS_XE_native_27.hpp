#ifndef _CISCO_IOS_XE_NATIVE_27_
#define _CISCO_IOS_XE_NATIVE_27_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_23.hpp"
#include "Cisco_IOS_XE_native_26.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Network


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Shutdown


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6 : public ydk::Entity
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

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Area
        class Authentication; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Authentication
        class Bfd; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Bfd
        class Cost; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost
        class DatabaseFilter; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit
        class FloodReduction; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction
        class Manet; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet
        class MtuIgnore; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore
        class MultiArea; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MultiArea
        class Neighbor; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor
        class Network; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network
        class PrefixSuppression; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression
        class Shutdown; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Shutdown

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Area> > area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MultiArea> multi_area;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Shutdown> shutdown; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf instance; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Area


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Authentication


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Bfd


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

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
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

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
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering> peering;
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost> cost;
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

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
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

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

}; // Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::FastEthernet::Ospfv3::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
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

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1 : public ydk::Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
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

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::FastEthernet::Ospfv3::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

}; // Native::Interface::FastEthernet::Ospfv3::Bfd


class Native::Interface::FastEthernet::Ospfv3::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::Cost


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

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
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FastEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::FastEthernet::Ospfv3::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FastEthernet::Ospfv3::DatabaseFilter


class Native::Interface::FastEthernet::Ospfv3::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::DemandCircuit


class Native::Interface::FastEthernet::Ospfv3::Encryption : public ydk::Entity
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

        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec : public ydk::Entity
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

        ydk::YLeaf spi; //type: uint64
        ydk::YLeaf esp; //type: empty
        class Ipsec3Des; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des
        class AesCbc; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des> ipsec_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des : public ydk::Entity
{
    public:
        Ipsec3Des();
        ~Ipsec3Des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString : public ydk::Entity
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

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc : public ydk::Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AesCbc128; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public ydk::Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public ydk::Entity
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

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public ydk::Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public ydk::Entity
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

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public ydk::Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public ydk::Entity
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

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::FastEthernet::Ospfv3::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::FastEthernet::Ospfv3::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::FastEthernet::Ospfv3::Manet


class Native::Interface::FastEthernet::Ospfv3::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::FastEthernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::FastEthernet::Ospfv3::Manet::Peering


class Native::Interface::FastEthernet::Ospfv3::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

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
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FastEthernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::FastEthernet::Ospfv3::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf cost; //type: uint32

}; // Native::Interface::FastEthernet::Ospfv3::MultiArea


class Native::Interface::FastEthernet::Ospfv3::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FastEthernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FastEthernet::Ospfv3::Neighbor


class Native::Interface::FastEthernet::Ospfv3::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FastEthernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::FastEthernet::Ospfv3::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FastEthernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FastEthernet::Ospfv3::Network


class Native::Interface::FastEthernet::Ospfv3::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FastEthernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::FastEthernet::Ospfv3::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::FastEthernet::Ospfv3::PrefixSuppression


class Native::Interface::FastEthernet::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inline_; //type: Native::Interface::FastEthernet::Power::Inline_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_> inline_;
        
}; // Native::Interface::FastEthernet::Power


class Native::Interface::FastEthernet::Power::Inline_ : public ydk::Entity
{
    public:
        Inline_();
        ~Inline_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf consumption; //type: uint16
        ydk::YLeaf never; //type: empty
        class Auto_; //type: Native::Interface::FastEthernet::Power::Inline_::Auto_
        class FourPair; //type: Native::Interface::FastEthernet::Power::Inline_::FourPair
        class Police; //type: Native::Interface::FastEthernet::Power::Inline_::Police
        class Port; //type: Native::Interface::FastEthernet::Power::Inline_::Port
        class Static_; //type: Native::Interface::FastEthernet::Power::Inline_::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_::Auto_> auto_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_::FourPair> four_pair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_::Police> police; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_::Static_> static_; // presence node
        
}; // Native::Interface::FastEthernet::Power::Inline_


class Native::Interface::FastEthernet::Power::Inline_::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: int32

}; // Native::Interface::FastEthernet::Power::Inline_::Auto_


class Native::Interface::FastEthernet::Power::Inline_::FourPair : public ydk::Entity
{
    public:
        FourPair();
        ~FourPair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forced; //type: empty

}; // Native::Interface::FastEthernet::Power::Inline_::FourPair


class Native::Interface::FastEthernet::Power::Inline_::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FastEthernet::Power::Inline_::Police::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline_::Police::Action> action;
        
}; // Native::Interface::FastEthernet::Power::Inline_::Police


class Native::Interface::FastEthernet::Power::Inline_::Police::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf errdisable; //type: empty
        ydk::YLeaf log; //type: empty

}; // Native::Interface::FastEthernet::Power::Inline_::Police::Action


class Native::Interface::FastEthernet::Power::Inline_::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf poe_ha; //type: empty
        ydk::YLeaf two_event; //type: empty

}; // Native::Interface::FastEthernet::Power::Inline_::Port


class Native::Interface::FastEthernet::Power::Inline_::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: int32

}; // Native::Interface::FastEthernet::Power::Inline_::Static_


class Native::Interface::FastEthernet::Authentication : public ydk::Entity
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

        ydk::YLeaf control_direction; //type: ControlDirection
        ydk::YLeaf fallback; //type: string
        ydk::YLeaf host_mode; //type: HostMode
        ydk::YLeaf open; //type: empty
        ydk::YLeaf port_control; //type: PortControl
        ydk::YLeaf periodic; //type: empty
        ydk::YLeaf violation; //type: Violation
        class Event; //type: Native::Interface::FastEthernet::Authentication::Event
        class Order; //type: Native::Interface::FastEthernet::Authentication::Order
        class Priority; //type: Native::Interface::FastEthernet::Authentication::Priority
        class Timer; //type: Native::Interface::FastEthernet::Authentication::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Order> order;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Timer> timer;
                class ControlDirection;
        class HostMode;
        class PortControl;
        class Violation;

}; // Native::Interface::FastEthernet::Authentication


class Native::Interface::FastEthernet::Authentication::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Server; //type: Native::Interface::FastEthernet::Authentication::Event::Server
        class Fail; //type: Native::Interface::FastEthernet::Authentication::Event::Fail
        class NoResponse; //type: Native::Interface::FastEthernet::Authentication::Event::NoResponse

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Fail> fail;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::NoResponse> no_response;
        
}; // Native::Interface::FastEthernet::Authentication::Event


class Native::Interface::FastEthernet::Authentication::Event::Server : public ydk::Entity
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

        class Alive; //type: Native::Interface::FastEthernet::Authentication::Event::Server::Alive
        class Dead; //type: Native::Interface::FastEthernet::Authentication::Event::Server::Dead

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server::Alive> alive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server::Dead> dead;
        
}; // Native::Interface::FastEthernet::Authentication::Event::Server


class Native::Interface::FastEthernet::Authentication::Event::Server::Alive : public ydk::Entity
{
    public:
        Alive();
        ~Alive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action> action;
        
}; // Native::Interface::FastEthernet::Authentication::Event::Server::Alive


class Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reinitialize; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Event::Server::Alive::Action


class Native::Interface::FastEthernet::Authentication::Event::Server::Dead : public ydk::Entity
{
    public:
        Dead();
        ~Dead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action> action;
        
}; // Native::Interface::FastEthernet::Authentication::Event::Server::Dead


class Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize
        class Reinitialize; //type: Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize> authorize; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize> reinitialize;
        
}; // Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action


class Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf voice; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Authorize


class Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize : public ydk::Entity
{
    public:
        Reinitialize();
        ~Reinitialize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::FastEthernet::Authentication::Event::Server::Dead::Action::Reinitialize


class Native::Interface::FastEthernet::Authentication::Event::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FastEthernet::Authentication::Event::Fail::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Fail::Action> action;
        
}; // Native::Interface::FastEthernet::Authentication::Event::Fail


class Native::Interface::FastEthernet::Authentication::Event::Fail::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize> authorize;
        
}; // Native::Interface::FastEthernet::Authentication::Event::Fail::Action


class Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::FastEthernet::Authentication::Event::Fail::Action::Authorize


class Native::Interface::FastEthernet::Authentication::Event::NoResponse : public ydk::Entity
{
    public:
        NoResponse();
        ~NoResponse();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action> action;
        
}; // Native::Interface::FastEthernet::Authentication::Event::NoResponse


class Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize> authorize;
        
}; // Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action


class Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::FastEthernet::Authentication::Event::NoResponse::Action::Authorize


class Native::Interface::FastEthernet::Authentication::Order : public ydk::Entity
{
    public:
        Order();
        ~Order();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Order


class Native::Interface::FastEthernet::Authentication::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Priority


class Native::Interface::FastEthernet::Authentication::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: uint16
        class Reauthenticate; //type: Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate
        class Inactivity; //type: Native::Interface::FastEthernet::Authentication::Timer::Inactivity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate> reauthenticate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Timer::Inactivity> inactivity;
        
}; // Native::Interface::FastEthernet::Authentication::Timer


class Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate : public ydk::Entity
{
    public:
        Reauthenticate();
        ~Reauthenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf server; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Timer::Reauthenticate


class Native::Interface::FastEthernet::Authentication::Timer::Inactivity : public ydk::Entity
{
    public:
        Inactivity();
        ~Inactivity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_
        class Server; //type: Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_> value_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server> server; // presence node
        
}; // Native::Interface::FastEthernet::Authentication::Timer::Inactivity


class Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf dynamic; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Value_


class Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: empty

}; // Native::Interface::FastEthernet::Authentication::Timer::Inactivity::Server


class Native::Interface::FastEthernet::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eap; //type: empty

}; // Native::Interface::FastEthernet::Mab


class Native::Interface::FastEthernet::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bpdufilter; //type: Bpdufilter
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf guard; //type: Guard
        ydk::YLeaf link_type; //type: LinkType
        ydk::YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::FastEthernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::FastEthernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::FastEthernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::FastEthernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::FastEthernet::SpanningTree::Mst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SpanningTree::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SpanningTree::Mst> mst;
                class Bpdufilter;
        class Guard;
        class LinkType;

}; // Native::Interface::FastEthernet::SpanningTree


class Native::Interface::FastEthernet::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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
        ydk::YLeaf enable; //type: empty

}; // Native::Interface::FastEthernet::SpanningTree::Bpduguard


class Native::Interface::FastEthernet::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf edge; //type: empty

}; // Native::Interface::FastEthernet::SpanningTree::Portfast


class Native::Interface::FastEthernet::SpanningTree::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeafList vlan_ids; //type: list of  one of uint16, string

}; // Native::Interface::FastEthernet::SpanningTree::Vlan


class Native::Interface::FastEthernet::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty

}; // Native::Interface::FastEthernet::SpanningTree::Loopguard


class Native::Interface::FastEthernet::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf pre_standard; //type: empty

}; // Native::Interface::FastEthernet::SpanningTree::Mst


class Native::Interface::FastEthernet::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qos; //type: Native::Interface::FastEthernet::Auto_::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Auto_::Qos> qos;
        
}; // Native::Interface::FastEthernet::Auto_


class Native::Interface::FastEthernet::Auto_::Qos : public ydk::Entity
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

        class Classify; //type: Native::Interface::FastEthernet::Auto_::Qos::Classify
        class Trust; //type: Native::Interface::FastEthernet::Auto_::Qos::Trust
        class Video; //type: Native::Interface::FastEthernet::Auto_::Qos::Video
        class Voip; //type: Native::Interface::FastEthernet::Auto_::Qos::Voip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Auto_::Qos::Classify> classify; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Auto_::Qos::Trust> trust; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Auto_::Qos::Video> video;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Auto_::Qos::Voip> voip; // presence node
        
}; // Native::Interface::FastEthernet::Auto_::Qos


class Native::Interface::FastEthernet::Auto_::Qos::Classify : public ydk::Entity
{
    public:
        Classify();
        ~Classify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf police; //type: empty

}; // Native::Interface::FastEthernet::Auto_::Qos::Classify


class Native::Interface::FastEthernet::Auto_::Qos::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Interface::FastEthernet::Auto_::Qos::Trust


class Native::Interface::FastEthernet::Auto_::Qos::Video : public ydk::Entity
{
    public:
        Video();
        ~Video();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cts; //type: empty
        ydk::YLeaf ip_camera; //type: empty
        ydk::YLeaf media_player; //type: empty

}; // Native::Interface::FastEthernet::Auto_::Qos::Video


class Native::Interface::FastEthernet::Auto_::Qos::Voip : public ydk::Entity
{
    public:
        Voip();
        ~Voip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco_phone; //type: empty
        ydk::YLeaf cisco_softphone; //type: empty
        ydk::YLeaf trust; //type: empty

}; // Native::Interface::FastEthernet::Auto_::Qos::Voip


class Native::Interface::FastEthernet::Datalink : public ydk::Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::Interface::FastEthernet::Datalink::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Datalink::Flow> flow;
        
}; // Native::Interface::FastEthernet::Datalink


class Native::Interface::FastEthernet::Datalink::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitor; //type: Native::Interface::FastEthernet::Datalink::Flow::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::FastEthernet::Datalink::Flow


class Native::Interface::FastEthernet::Datalink::Flow::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_defined_flow; //type: string
        ydk::YLeaf input_output; //type: InputOutput
        class InputOutput;

}; // Native::Interface::FastEthernet::Datalink::Flow::Monitor


class Native::Interface::FastEthernet::Energywise : public ydk::Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf activitycheck; //type: empty

}; // Native::Interface::FastEthernet::Energywise


class Native::Interface::FastEthernet::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CivicLocationId; //type: Native::Interface::FastEthernet::Location::CivicLocationId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::FastEthernet::Location


class Native::Interface::FastEthernet::Location::CivicLocationId : public ydk::Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::FastEthernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::FastEthernet::Location::CivicLocationId::None

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::FastEthernet::Location::CivicLocationId


class Native::Interface::FastEthernet::Location::CivicLocationId::Host : public ydk::Entity
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

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::FastEthernet::Location::CivicLocationId::Host


class Native::Interface::FastEthernet::Location::CivicLocationId::None : public ydk::Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::FastEthernet::Location::CivicLocationId::None


class Native::Interface::FastEthernet::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessGroup; //type: Native::Interface::FastEthernet::Mac::AccessGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mac::AccessGroup> access_group;
        
}; // Native::Interface::FastEthernet::Mac


class Native::Interface::FastEthernet::Mac::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ACLName; //type: Native::Interface::FastEthernet::Mac::AccessGroup::ACLName

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Mac::AccessGroup::ACLName> acl_name;
        
}; // Native::Interface::FastEthernet::Mac::AccessGroup


class Native::Interface::FastEthernet::Mac::AccessGroup::ACLName : public ydk::Entity
{
    public:
        ACLName();
        ~ACLName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf apply_to; //type: ApplyTo
        class ApplyTo;

}; // Native::Interface::FastEthernet::Mac::AccessGroup::ACLName


class Native::Interface::FastEthernet::Macro : public ydk::Entity
{
    public:
        Macro();
        ~Macro();

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
        class Auto_; //type: Native::Interface::FastEthernet::Macro::Auto_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Macro::Auto_> auto_;
        
}; // Native::Interface::FastEthernet::Macro


class Native::Interface::FastEthernet::Macro::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processing; //type: boolean

}; // Native::Interface::FastEthernet::Macro::Auto_


class Native::Interface::FastEthernet::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_hello; //type: empty

}; // Native::Interface::FastEthernet::DualActive


class Native::Interface::FastEthernet::LoadBalancing : public ydk::Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::Interface::FastEthernet::LoadBalancing


class Native::Interface::FastEthernet::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint16, string
        class ServicePolicy; //type: Native::Interface::FastEthernet::VlanRange::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::FastEthernet::VlanRange


class Native::Interface::FastEthernet::VlanRange::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::Interface::FastEthernet::VlanRange::ServicePolicy


class Native::Interface::FastEthernet::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Virtual_; //type: Native::Interface::FastEthernet::Switch_::Virtual_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Switch_::Virtual_> virtual_;
        
}; // Native::Interface::FastEthernet::Switch_


class Native::Interface::FastEthernet::Switch_::Virtual_ : public ydk::Entity
{
    public:
        Virtual_();
        ~Virtual_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: uint8

}; // Native::Interface::FastEthernet::Switch_::Virtual_


class Native::Interface::FastEthernet::SrrQueue : public ydk::Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bandwidth; //type: Native::Interface::FastEthernet::SrrQueue::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::FastEthernet::SrrQueue


class Native::Interface::FastEthernet::SrrQueue::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Shape; //type: Native::Interface::FastEthernet::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::FastEthernet::SrrQueue::Bandwidth::Share

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::FastEthernet::SrrQueue::Bandwidth


class Native::Interface::FastEthernet::SrrQueue::Bandwidth::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint16
        ydk::YLeaf weight2; //type: uint16
        ydk::YLeaf weight3; //type: uint16
        ydk::YLeaf weight4; //type: uint16

}; // Native::Interface::FastEthernet::SrrQueue::Bandwidth::Shape


class Native::Interface::FastEthernet::SrrQueue::Bandwidth::Share : public ydk::Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint8
        ydk::YLeaf weight2; //type: uint8
        ydk::YLeaf weight3; //type: uint8
        ydk::YLeaf weight4; //type: uint8

}; // Native::Interface::FastEthernet::SrrQueue::Bandwidth::Share


class Native::Interface::FastEthernet::Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_link; //type: empty

}; // Native::Interface::FastEthernet::Macsec


class Native::Interface::FastEthernet::DeviceTracking : public ydk::Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::FastEthernet::DeviceTracking


class Native::Interface::FastEthernet::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::FastEthernet::Udld::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Udld::Port> port; // presence node
        
}; // Native::Interface::FastEthernet::Udld


class Native::Interface::FastEthernet::Udld::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FastEthernet::Udld::Port


class Native::Interface::FastEthernet::ZoneMember : public ydk::Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security; //type: string

}; // Native::Interface::FastEthernet::ZoneMember


class Native::Interface::GigabitEthernet : public ydk::Entity
{
    public:
        GigabitEthernet();
        ~GigabitEthernet();

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
        ydk::YLeaf media_type; //type: MediaType
        ydk::YLeaf port_type; //type: PortType
        ydk::YLeaf description; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf if_state; //type: IfState
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf max_reserved_bandwidth; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf service_insertion; //type: ServiceInsertion
        ydk::YLeaf channel_protocol; //type: ChannelProtocol
        ydk::YLeaf duplex; //type: Duplex
        ydk::YLeaf nat66; //type: Nat66
        class SwitchportConf; //type: Native::Interface::GigabitEthernet::SwitchportConf
        class Switchport; //type: Native::Interface::GigabitEthernet::Switchport
        class Arp; //type: Native::Interface::GigabitEthernet::Arp
        class Backup; //type: Native::Interface::GigabitEthernet::Backup
        class Cemoudp; //type: Native::Interface::GigabitEthernet::Cemoudp
        class CwsTunnel; //type: Native::Interface::GigabitEthernet::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::GigabitEthernet::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::GigabitEthernet::Encapsulation
        class FairQueueConf; //type: Native::Interface::GigabitEthernet::FairQueueConf
        class FairQueue; //type: Native::Interface::GigabitEthernet::FairQueue
        class Flowcontrol; //type: Native::Interface::GigabitEthernet::Flowcontrol
        class Isis; //type: Native::Interface::GigabitEthernet::Isis
        class KeepaliveSettings; //type: Native::Interface::GigabitEthernet::KeepaliveSettings
        class Bfd; //type: Native::Interface::GigabitEthernet::Bfd
        class Bandwidth; //type: Native::Interface::GigabitEthernet::Bandwidth
        class Dampening; //type: Native::Interface::GigabitEthernet::Dampening
        class Domain; //type: Native::Interface::GigabitEthernet::Domain
        class HoldQueue; //type: Native::Interface::GigabitEthernet::HoldQueue
        class Mpls; //type: Native::Interface::GigabitEthernet::Mpls
        class IpVrf; //type: Native::Interface::GigabitEthernet::IpVrf
        class Vrf; //type: Native::Interface::GigabitEthernet::Vrf
        class Ip; //type: Native::Interface::GigabitEthernet::Ip
        class Ipv6; //type: Native::Interface::GigabitEthernet::Ipv6
        class Logging; //type: Native::Interface::GigabitEthernet::Logging
        class Mdix; //type: Native::Interface::GigabitEthernet::Mdix
        class Mop; //type: Native::Interface::GigabitEthernet::Mop
        class InterfaceQos; //type: Native::Interface::GigabitEthernet::InterfaceQos
        class Standby; //type: Native::Interface::GigabitEthernet::Standby
        class AccessSession; //type: Native::Interface::GigabitEthernet::AccessSession
        class StormControl; //type: Native::Interface::GigabitEthernet::StormControl
        class Trust; //type: Native::Interface::GigabitEthernet::Trust
        class Utd; //type: Native::Interface::GigabitEthernet::Utd
        class PriorityQueue; //type: Native::Interface::GigabitEthernet::PriorityQueue
        class RcvQueue; //type: Native::Interface::GigabitEthernet::RcvQueue
        class Peer; //type: Native::Interface::GigabitEthernet::Peer
        class PmPath; //type: Native::Interface::GigabitEthernet::PmPath
        class CarrierDelay; //type: Native::Interface::GigabitEthernet::CarrierDelay
        class ChannelGroup; //type: Native::Interface::GigabitEthernet::ChannelGroup
        class Ethernet; //type: Native::Interface::GigabitEthernet::Ethernet
        class Negotiation; //type: Native::Interface::GigabitEthernet::Negotiation
        class Synchronous; //type: Native::Interface::GigabitEthernet::Synchronous
        class Speed; //type: Native::Interface::GigabitEthernet::Speed
        class Plim; //type: Native::Interface::GigabitEthernet::Plim
        class Pppoe; //type: Native::Interface::GigabitEthernet::Pppoe
        class Service; //type: Native::Interface::GigabitEthernet::Service
        class Xconnect; //type: Native::Interface::GigabitEthernet::Xconnect
        class Cdp; //type: Native::Interface::GigabitEthernet::Cdp
        class Snmp; //type: Native::Interface::GigabitEthernet::Snmp
        class Crypto; //type: Native::Interface::GigabitEthernet::Crypto
        class Cts; //type: Native::Interface::GigabitEthernet::Cts
        class Dot1X; //type: Native::Interface::GigabitEthernet::Dot1X
        class Performance; //type: Native::Interface::GigabitEthernet::Performance
        class ServicePolicy; //type: Native::Interface::GigabitEthernet::ServicePolicy
        class Lisp; //type: Native::Interface::GigabitEthernet::Lisp
        class Lldp; //type: Native::Interface::GigabitEthernet::Lldp
        class Mka; //type: Native::Interface::GigabitEthernet::Mka
        class Ospfv3; //type: Native::Interface::GigabitEthernet::Ospfv3
        class Power; //type: Native::Interface::GigabitEthernet::Power
        class Authentication; //type: Native::Interface::GigabitEthernet::Authentication
        class Mab; //type: Native::Interface::GigabitEthernet::Mab
        class SpanningTree; //type: Native::Interface::GigabitEthernet::SpanningTree
        class Auto_; //type: Native::Interface::GigabitEthernet::Auto_
        class Datalink; //type: Native::Interface::GigabitEthernet::Datalink
        class Energywise; //type: Native::Interface::GigabitEthernet::Energywise
        class Location; //type: Native::Interface::GigabitEthernet::Location
        class Mac; //type: Native::Interface::GigabitEthernet::Mac
        class Macro; //type: Native::Interface::GigabitEthernet::Macro
        class DualActive; //type: Native::Interface::GigabitEthernet::DualActive
        class LoadBalancing; //type: Native::Interface::GigabitEthernet::LoadBalancing
        class VlanRange; //type: Native::Interface::GigabitEthernet::VlanRange
        class Switch_; //type: Native::Interface::GigabitEthernet::Switch_
        class SrrQueue; //type: Native::Interface::GigabitEthernet::SrrQueue
        class Macsec; //type: Native::Interface::GigabitEthernet::Macsec
        class DeviceTracking; //type: Native::Interface::GigabitEthernet::DeviceTracking
        class Udld; //type: Native::Interface::GigabitEthernet::Udld
        class ZoneMember; //type: Native::Interface::GigabitEthernet::ZoneMember

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Domain> domain;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::HoldQueue> > hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Utd> utd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Lldp> lldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Mab> mab; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Auto_> auto_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Macro> macro;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::DualActive> dual_active;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::LoadBalancing> load_balancing;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::VlanRange> > vlan_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switch_> switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::SrrQueue> srr_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Macsec> macsec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::DeviceTracking> device_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::ZoneMember> zone_member;
                class MediaType;
        class PortType;
        class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;
        class Nat66;

}; // Native::Interface::GigabitEthernet


class Native::Interface::GigabitEthernet::SwitchportConf : public ydk::Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::GigabitEthernet::SwitchportConf


class Native::Interface::GigabitEthernet::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf host; //type: empty
        class Access; //type: Native::Interface::GigabitEthernet::Switchport::Access
        class Block; //type: Native::Interface::GigabitEthernet::Switchport::Block
        class Mode; //type: Native::Interface::GigabitEthernet::Switchport::Mode
        class PortSecurity; //type: Native::Interface::GigabitEthernet::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::GigabitEthernet::Switchport::Trunk
        class Voice; //type: Native::Interface::GigabitEthernet::Switchport::Voice
        class Priority; //type: Native::Interface::GigabitEthernet::Switchport::Priority
        class Autostate; //type: Native::Interface::GigabitEthernet::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::GigabitEthernet::Switchport::PrivateVlan
        class DeviceTracking; //type: Native::Interface::GigabitEthernet::Switchport::DeviceTracking

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Voice> voice;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::DeviceTracking> device_tracking;
        
}; // Native::Interface::GigabitEthernet::Switchport


class Native::Interface::GigabitEthernet::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::GigabitEthernet::Switchport::Access::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::GigabitEthernet::Switchport::Access


class Native::Interface::GigabitEthernet::Switchport::Access::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::GigabitEthernet::Switchport::Access::Vlan


class Native::Interface::GigabitEthernet::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty

}; // Native::Interface::GigabitEthernet::Switchport::Block


class Native::Interface::GigabitEthernet::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: Dynamic
        class Access; //type: Native::Interface::GigabitEthernet::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::GigabitEthernet::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::GigabitEthernet::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::GigabitEthernet::Switchport::Mode::Trunk> trunk; // presence node
                class Dynamic;

}; // Native::Interface::GigabitEthernet::Switchport::Mode


class Native::Interface::GigabitEthernet::Switchport::Mode::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::GigabitEthernet::Switchport::Mode::Access


class Native::Interface::GigabitEthernet::Switchport::Mode::Dot1QTunnel : public ydk::Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::GigabitEthernet::Switchport::Mode::Dot1QTunnel


class Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty
        ydk::YLeaf promiscuous; //type: empty

}; // Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan


class Native::Interface::GigabitEthernet::Switchport::Mode::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::GigabitEthernet::Switchport::Mode::Trunk

class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FastEthernet::Ospfv3::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FastEthernet::Authentication::ControlDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf in;

};

class Native::Interface::FastEthernet::Authentication::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::FastEthernet::Authentication::PortControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf force_authorized;
        static const ydk::Enum::YLeaf force_unauthorized;

};

class Native::Interface::FastEthernet::Authentication::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::FastEthernet::SpanningTree::Bpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::FastEthernet::SpanningTree::Guard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf root;

};

class Native::Interface::FastEthernet::SpanningTree::LinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf shared;

};

class Native::Interface::FastEthernet::Datalink::Flow::Monitor::InputOutput : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::FastEthernet::Mac::AccessGroup::ACLName::ApplyTo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::GigabitEthernet::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_select;
        static const ydk::Enum::YLeaf rj45;
        static const ydk::Enum::YLeaf sfp;

};

class Native::Interface::GigabitEthernet::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nni;

};

class Native::Interface::GigabitEthernet::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::GigabitEthernet::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::GigabitEthernet::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::GigabitEthernet::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::GigabitEthernet::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

};

class Native::Interface::GigabitEthernet::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::GigabitEthernet::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_27_ */

