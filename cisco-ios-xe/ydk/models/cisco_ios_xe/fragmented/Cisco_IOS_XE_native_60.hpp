#ifndef _CISCO_IOS_XE_NATIVE_60_
#define _CISCO_IOS_XE_NATIVE_60_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_55.hpp"
#include "Cisco_IOS_XE_native_59.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public ydk::Entity
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

        class KeyString; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::TenGigabitEthernet::Ospfv3::Manet : public ydk::Entity
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

        class Peering; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Manet


class Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering : public ydk::Entity
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
        class Cost; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering


class Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea : public ydk::Entity
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

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea


class Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor : public ydk::Entity
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
        class DatabaseFilter; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor


class Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::TenGigabitEthernet::Ospfv3::Network : public ydk::Entity
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
        class PointToMultipoint; //type: Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Ospfv3::Network


class Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression


class Native::Interface::TenGigabitEthernet::Performance : public ydk::Entity
{
    public:
        Performance();
        ~Performance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitor; //type: Native::Interface::TenGigabitEthernet::Performance::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Performance::Monitor> monitor;
        
}; // Native::Interface::TenGigabitEthernet::Performance


class Native::Interface::TenGigabitEthernet::Performance::Monitor : public ydk::Entity
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

        ydk::YLeafList context; //type: list of  string

}; // Native::Interface::TenGigabitEthernet::Performance::Monitor


class Native::Interface::TenGigabitEthernet::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::TenGigabitEthernet::Lisp::Mobility

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lisp::Mobility> mobility;
        
}; // Native::Interface::TenGigabitEthernet::Lisp


class Native::Interface::TenGigabitEthernet::Lisp::Mobility : public ydk::Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicEid; //type: Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness

        ydk::YList dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover> discover;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::TenGigabitEthernet::Lisp::Mobility


class Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic_eid_name; //type: string
        class NbrProxyReply; //type: Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply> nbr_proxy_reply; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid


class Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply : public ydk::Entity
{
    public:
        NbrProxyReply();
        ~NbrProxyReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf requests; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply


class Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arp; //type: boolean

}; // Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover


class Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness : public ydk::Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test; //type: boolean
        ydk::YLeaf ttl; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness


class Native::Interface::TenGigabitEthernet::SpanningTree : public ydk::Entity
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
        class Bpduguard; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Mst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Portfast> portfast; // presence node
        ydk::YList vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Mst> mst;
                class Bpdufilter;
        class Guard;
        class LinkType;

}; // Native::Interface::TenGigabitEthernet::SpanningTree


class Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard


class Native::Interface::TenGigabitEthernet::SpanningTree::Portfast : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Portfast


class Native::Interface::TenGigabitEthernet::SpanningTree::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan_ids; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Vlan


class Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard


class Native::Interface::TenGigabitEthernet::SpanningTree::Mst : public ydk::Entity
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

        ydk::YLeaf pre_standard; //type: empty
        class MstInstance; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance

        ydk::YList mst_instance;
        
}; // Native::Interface::TenGigabitEthernet::SpanningTree::Mst


class Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance : public ydk::Entity
{
    public:
        MstInstance();
        ~MstInstance();

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

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance


class Native::Interface::TenGigabitEthernet::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::TenGigabitEthernet::Mka::Policy
        class PreSharedKey; //type: Native::Interface::TenGigabitEthernet::Mka::PreSharedKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mka::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mka::PreSharedKey> pre_shared_key;
        
}; // Native::Interface::TenGigabitEthernet::Mka


class Native::Interface::TenGigabitEthernet::Mka::Policy : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::TenGigabitEthernet::Mka::Policy


class Native::Interface::TenGigabitEthernet::Mka::PreSharedKey : public ydk::Entity
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

        class KeyChain; //type: Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain> key_chain;
        
}; // Native::Interface::TenGigabitEthernet::Mka::PreSharedKey


class Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

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

}; // Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain


class Native::Interface::TenGigabitEthernet::Umbrella : public ydk::Entity
{
    public:
        Umbrella();
        ~Umbrella();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        ydk::YLeaf in; //type: string

}; // Native::Interface::TenGigabitEthernet::Umbrella


class Native::Interface::TenGigabitEthernet::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

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
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf sequence; //type: Sequence
        ydk::YLeaf pw_class; //type: string
        class Encapsulation;
        class Sequence;

}; // Native::Interface::TenGigabitEthernet::Xconnect


class Native::Interface::TenGigabitEthernet::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetSegment; //type: Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment

        ydk::YList ethernet_segment;
        
}; // Native::Interface::TenGigabitEthernet::Evpn


class Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf es_value; //type: uint16
        ydk::YLeaf sytem_mac; //type: string
        class DfElection; //type: Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection
        class Redundancy; //type: Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection> df_election;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy> redundancy;
        
}; // Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment


class Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection : public ydk::Entity
{
    public:
        DfElection();
        ~DfElection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection


class Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy : public ydk::Entity
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

        ydk::YLeaf all_active; //type: empty
        ydk::YLeaf single_active; //type: empty

}; // Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy


class Native::Interface::TenGigabitEthernet::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf credentials; //type: string
        ydk::YLeaf max_reauth_req; //type: uint8
        ydk::YLeaf max_req; //type: uint8
        ydk::YLeaf max_start; //type: uint8
        ydk::YLeaf pae; //type: Pae
        class Authenticator; //type: Native::Interface::TenGigabitEthernet::Dot1x::Authenticator
        class Supplicant; //type: Native::Interface::TenGigabitEthernet::Dot1x::Supplicant
        class Timeout; //type: Native::Interface::TenGigabitEthernet::Dot1x::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dot1x::Authenticator> authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dot1x::Supplicant> supplicant;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dot1x::Timeout> timeout;
                class Pae;

}; // Native::Interface::TenGigabitEthernet::Dot1x


class Native::Interface::TenGigabitEthernet::Dot1x::Authenticator : public ydk::Entity
{
    public:
        Authenticator();
        ~Authenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eap; //type: Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap> eap;
        
}; // Native::Interface::TenGigabitEthernet::Dot1x::Authenticator


class Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap


class Native::Interface::TenGigabitEthernet::Dot1x::Supplicant : public ydk::Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eap; //type: Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap> eap;
        
}; // Native::Interface::TenGigabitEthernet::Dot1x::Supplicant


class Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap


class Native::Interface::TenGigabitEthernet::Dot1x::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_period; //type: uint16
        ydk::YLeaf held_period; //type: uint16
        ydk::YLeaf quiet_period; //type: uint16
        ydk::YLeaf ratelimit_period; //type: uint16
        ydk::YLeaf server_timeout; //type: uint16
        ydk::YLeaf start_period; //type: uint16
        ydk::YLeaf supp_timeout; //type: uint16
        ydk::YLeaf tx_period; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Dot1x::Timeout


class Native::Interface::TenGigabitEthernet::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::TenGigabitEthernet::Crypto::Map
        class Ipsec; //type: Native::Interface::TenGigabitEthernet::Crypto::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Crypto::Map> map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Crypto::Ipsec> ipsec;
        
}; // Native::Interface::TenGigabitEthernet::Crypto


class Native::Interface::TenGigabitEthernet::Crypto::Map : public ydk::Entity
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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf redundancy; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Interface::TenGigabitEthernet::Crypto::Map


class Native::Interface::TenGigabitEthernet::Crypto::Ipsec : public ydk::Entity
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

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        class DfBit;
        class Fragmentation;

}; // Native::Interface::TenGigabitEthernet::Crypto::Ipsec


class Native::Interface::TenGigabitEthernet::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf transmit; //type: boolean

}; // Native::Interface::TenGigabitEthernet::Lldp


class Native::Interface::TenGigabitEthernet::ZoneMember : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::ZoneMember


class Native::Interface::TenGigabitEthernet::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrrpGroup; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup
        class VrrpGroupV2; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2
        class Delay; //type: Native::Interface::TenGigabitEthernet::Vrrp::Delay

        ydk::YList vrrp_group;
        ydk::YList vrrp_group_v2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::Delay> delay;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup : public ydk::Entity
{
    public:
        VrrpGroup();
        ~VrrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint8
        class AddressFamily; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily> address_family;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4
        class Ipv6; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6> ipv6; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4 : public ydk::Entity
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

        ydk::YLeaf vrrpv2; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf match_address; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Address; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address
        class PreemptConfig; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig
        class Preempt; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt
        class Timers; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers
        class Track; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track
        class Vrrs; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig> preempt_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt> preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs> vrrs;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address : public ydk::Entity
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

        class Primary; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary
        class Secondary; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary> primary;
        ydk::YList secondary;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

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
        ydk::YLeaf primary; //type: empty

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig : public ydk::Entity
{
    public:
        PreemptConfig();
        ~PreemptConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preempt; //type: boolean

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay> delay;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Event; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event

        ydk::YList event;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event : public ydk::Entity
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

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs : public ydk::Entity
{
    public:
        Vrrs();
        ~Vrrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leader; //type: string

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6 : public ydk::Entity
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

        ydk::YLeaf description; //type: string
        ydk::YLeaf match_address; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Address; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address
        class PreemptConfig; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig
        class Preempt; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt
        class Timers; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers
        class Track; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track
        class Vrrs; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig> preempt_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt> preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs> vrrs;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address : public ydk::Entity
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

        class Primary; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary
        class Ipv6Prefix; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary> primary;
        ydk::YList ipv6_prefix;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_link_local; //type: string
        ydk::YLeaf primary; //type: empty

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix : public ydk::Entity
{
    public:
        Ipv6Prefix();
        ~Ipv6Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig : public ydk::Entity
{
    public:
        PreemptConfig();
        ~PreemptConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preempt; //type: boolean

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay> delay;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Event; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event

        ydk::YList event;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event : public ydk::Entity
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

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs : public ydk::Entity
{
    public:
        Vrrs();
        ~Vrrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leader; //type: string

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2 : public ydk::Entity
{
    public:
        VrrpGroupV2();
        ~VrrpGroupV2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication
        class Ip; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip
        class PreemptConfig; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig
        class Preempt; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt
        class Timers; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers
        class Track; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig> preempt_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt> preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track> track;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication : public ydk::Entity
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

        ydk::YLeaf text; //type: string

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary
        class Secondary; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary> primary;
        ydk::YList secondary;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

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

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig : public ydk::Entity
{
    public:
        PreemptConfig();
        ~PreemptConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preempt; //type: boolean

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay> delay;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learn; //type: empty
        class Advertise; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise> advertise;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Event; //type: Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event

        ydk::YList event;
        
}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track


class Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event : public ydk::Entity
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

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event


class Native::Interface::TenGigabitEthernet::Vrrp::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Vrrp::Delay


class Native::Interface::TenGigabitEthernet::FabricDomain : public ydk::Entity
{
    public:
        FabricDomain();
        ~FabricDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IwanFabric; //type: Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric> iwan_fabric;
        
}; // Native::Interface::TenGigabitEthernet::FabricDomain


class Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric : public ydk::Entity
{
    public:
        IwanFabric();
        ~IwanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word; //type: Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word

        ydk::YList word;
        
}; // Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric


class Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word : public ydk::Entity
{
    public:
        Word();
        ~Word();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word


class Native::Interface::TenGigabitEthernet::AnalysisModule : public ydk::Entity
{
    public:
        AnalysisModule();
        ~AnalysisModule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitoring; //type: Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring> monitoring;
        
}; // Native::Interface::TenGigabitEthernet::AnalysisModule


class Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring


class Native::Interface::TenGigabitEthernet::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Manual; //type: Native::Interface::TenGigabitEthernet::Cts::Manual
        class RoleBased; //type: Native::Interface::TenGigabitEthernet::Cts::RoleBased

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual> manual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::RoleBased> role_based;
        
}; // Native::Interface::TenGigabitEthernet::Cts


class Native::Interface::TenGigabitEthernet::Cts::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Policy
        class Sap; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Sap> sap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate> propagate;
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual


class Native::Interface::TenGigabitEthernet::Cts::Manual::Policy : public ydk::Entity
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

        class Static; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static> static_;
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Policy


class Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap : public ydk::Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pmk; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk

        ydk::YList pmk;
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ModeList; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GcmEncrypt; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

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

}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate : public ydk::Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: boolean

}; // Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate


class Native::Interface::TenGigabitEthernet::Cts::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enforcement; //type: empty
        ydk::YLeafList sgt_cache; //type: list of  SgtCache
        class SgtMap; //type: Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap> sgt_map;
                class SgtCache;

}; // Native::Interface::TenGigabitEthernet::Cts::RoleBased


class Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap : public ydk::Entity
{
    public:
        SgtMap();
        ~SgtMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security_group; //type: string
        ydk::YLeaf sgt; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap


class Native::Interface::TenGigabitEthernet::Udld : public ydk::Entity
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

        class Port; //type: Native::Interface::TenGigabitEthernet::Udld::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Udld::Port> port; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Udld


class Native::Interface::TenGigabitEthernet::Udld::Port : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Udld::Port


class Native::Interface::TenGigabitEthernet::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        class Tlv; //type: Native::Interface::TenGigabitEthernet::Cdp::Tlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cdp::Tlv> tlv;
        
}; // Native::Interface::TenGigabitEthernet::Cdp


class Native::Interface::TenGigabitEthernet::Cdp::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_location; //type: empty
        ydk::YLeaf location; //type: empty
        class App; //type: Native::Interface::TenGigabitEthernet::Cdp::Tlv::App

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Cdp::Tlv


class Native::Interface::TenGigabitEthernet::Cdp::Tlv::App : public ydk::Entity
{
    public:
        App();
        ~App();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlvtype; //type: uint16
        ydk::YLeaf value_; //type: string

}; // Native::Interface::TenGigabitEthernet::Cdp::Tlv::App


class Native::Interface::TenGigabitEthernet::Mvrp : public ydk::Entity
{
    public:
        Mvrp();
        ~Mvrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mvrp; //type: empty
        class Registration; //type: Native::Interface::TenGigabitEthernet::Mvrp::Registration
        class Timer; //type: Native::Interface::TenGigabitEthernet::Mvrp::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mvrp::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mvrp::Timer> timer;
        
}; // Native::Interface::TenGigabitEthernet::Mvrp


class Native::Interface::TenGigabitEthernet::Mvrp::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fixed; //type: empty
        ydk::YLeaf forbidden; //type: empty
        ydk::YLeaf normal; //type: empty

}; // Native::Interface::TenGigabitEthernet::Mvrp::Registration


class Native::Interface::TenGigabitEthernet::Mvrp::Timer : public ydk::Entity
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

        ydk::YLeaf periodic; //type: empty
        class Join; //type: Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join
        class Leave; //type: Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave
        class LeaveAll; //type: Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join> join; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave> leave; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll> leave_all; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Mvrp::Timer


class Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join : public ydk::Entity
{
    public:
        Join();
        ~Join();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join


class Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave : public ydk::Entity
{
    public:
        Leave();
        ~Leave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave


class Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll : public ydk::Entity
{
    public:
        LeaveAll();
        ~LeaveAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll


class Native::Interface::TenGigabitEthernet::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

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
        class BroadcastOption; //type: Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption> broadcast_option;
        
}; // Native::Interface::TenGigabitEthernet::Ntp


class Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption : public ydk::Entity
{
    public:
        BroadcastOption();
        ~BroadcastOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast> broadcast;
        
}; // Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption


class Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client; //type: empty

}; // Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast


class Native::Interface::TenGigabitEthernet::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::TenGigabitEthernet::Utd


class Native::Interface::TwentyFiveGigE : public ydk::Entity
{
    public:
        TwentyFiveGigE();
        ~TwentyFiveGigE();

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
        ydk::YLeaf cisco_ios_xe_ethernet_macsec; //type: empty
        ydk::YLeaf cisco_ios_xe_switch_macsec; //type: empty
        ydk::YLeaf nat66; //type: Nat66
        class SwitchportConf; //type: Native::Interface::TwentyFiveGigE::SwitchportConf
        class Switchport; //type: Native::Interface::TwentyFiveGigE::Switchport
        class StackwiseVirtual; //type: Native::Interface::TwentyFiveGigE::StackwiseVirtual
        class Arp; //type: Native::Interface::TwentyFiveGigE::Arp
        class Backup; //type: Native::Interface::TwentyFiveGigE::Backup
        class Cemoudp; //type: Native::Interface::TwentyFiveGigE::Cemoudp
        class CwsTunnel; //type: Native::Interface::TwentyFiveGigE::CwsTunnel
        class L2protocolTunnel; //type: Native::Interface::TwentyFiveGigE::L2protocolTunnel
        class Encapsulation; //type: Native::Interface::TwentyFiveGigE::Encapsulation
        class FairQueueConf; //type: Native::Interface::TwentyFiveGigE::FairQueueConf
        class FairQueue; //type: Native::Interface::TwentyFiveGigE::FairQueue
        class Flowcontrol; //type: Native::Interface::TwentyFiveGigE::Flowcontrol
        class Isis; //type: Native::Interface::TwentyFiveGigE::Isis
        class KeepaliveSettings; //type: Native::Interface::TwentyFiveGigE::KeepaliveSettings
        class Bfd; //type: Native::Interface::TwentyFiveGigE::Bfd
        class Bandwidth; //type: Native::Interface::TwentyFiveGigE::Bandwidth
        class Dampening; //type: Native::Interface::TwentyFiveGigE::Dampening
        class Domain; //type: Native::Interface::TwentyFiveGigE::Domain
        class HoldQueue; //type: Native::Interface::TwentyFiveGigE::HoldQueue
        class Mpls; //type: Native::Interface::TwentyFiveGigE::Mpls
        class IpVrf; //type: Native::Interface::TwentyFiveGigE::IpVrf
        class Vrf; //type: Native::Interface::TwentyFiveGigE::Vrf
        class Ip; //type: Native::Interface::TwentyFiveGigE::Ip
        class Ipv6; //type: Native::Interface::TwentyFiveGigE::Ipv6
        class Logging; //type: Native::Interface::TwentyFiveGigE::Logging
        class Mdix; //type: Native::Interface::TwentyFiveGigE::Mdix
        class Mop; //type: Native::Interface::TwentyFiveGigE::Mop
        class InterfaceQos; //type: Native::Interface::TwentyFiveGigE::InterfaceQos
        class Source; //type: Native::Interface::TwentyFiveGigE::Source
        class Standby; //type: Native::Interface::TwentyFiveGigE::Standby
        class AccessSession; //type: Native::Interface::TwentyFiveGigE::AccessSession
        class StormControl; //type: Native::Interface::TwentyFiveGigE::StormControl
        class Trust; //type: Native::Interface::TwentyFiveGigE::Trust
        class PriorityQueue; //type: Native::Interface::TwentyFiveGigE::PriorityQueue
        class RcvQueue; //type: Native::Interface::TwentyFiveGigE::RcvQueue
        class Peer; //type: Native::Interface::TwentyFiveGigE::Peer
        class PmPath; //type: Native::Interface::TwentyFiveGigE::PmPath
        class Power; //type: Native::Interface::TwentyFiveGigE::Power
        class CarrierDelay; //type: Native::Interface::TwentyFiveGigE::CarrierDelay
        class ChannelGroup; //type: Native::Interface::TwentyFiveGigE::ChannelGroup
        class Ethernet; //type: Native::Interface::TwentyFiveGigE::Ethernet
        class Eapol; //type: Native::Interface::TwentyFiveGigE::Eapol
        class Synchronous; //type: Native::Interface::TwentyFiveGigE::Synchronous
        class Speed; //type: Native::Interface::TwentyFiveGigE::Speed
        class Negotiation; //type: Native::Interface::TwentyFiveGigE::Negotiation
        class Plim; //type: Native::Interface::TwentyFiveGigE::Plim
        class Pppoe; //type: Native::Interface::TwentyFiveGigE::Pppoe
        class Service; //type: Native::Interface::TwentyFiveGigE::Service
        class Lacp; //type: Native::Interface::TwentyFiveGigE::Lacp
        class CiscoIOSXEEthernetMacsecOption; //type: Native::Interface::TwentyFiveGigE::CiscoIOSXEEthernetMacsecOption
        class Snmp; //type: Native::Interface::TwentyFiveGigE::Snmp
        class Authentication; //type: Native::Interface::TwentyFiveGigE::Authentication
        class Mab; //type: Native::Interface::TwentyFiveGigE::Mab
        class EtAnalytics; //type: Native::Interface::TwentyFiveGigE::EtAnalytics
        class ServicePolicy; //type: Native::Interface::TwentyFiveGigE::ServicePolicy
        class Auto; //type: Native::Interface::TwentyFiveGigE::Auto
        class Datalink; //type: Native::Interface::TwentyFiveGigE::Datalink
        class Energywise; //type: Native::Interface::TwentyFiveGigE::Energywise
        class Location; //type: Native::Interface::TwentyFiveGigE::Location
        class Mac; //type: Native::Interface::TwentyFiveGigE::Mac
        class Macro; //type: Native::Interface::TwentyFiveGigE::Macro
        class DualActive; //type: Native::Interface::TwentyFiveGigE::DualActive
        class LoadBalancing; //type: Native::Interface::TwentyFiveGigE::LoadBalancing
        class VlanRange; //type: Native::Interface::TwentyFiveGigE::VlanRange
        class Switch; //type: Native::Interface::TwentyFiveGigE::Switch
        class SrrQueue; //type: Native::Interface::TwentyFiveGigE::SrrQueue
        class CiscoIOSXESwitchMacsecOption; //type: Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption
        class Ospfv3; //type: Native::Interface::TwentyFiveGigE::Ospfv3
        class Performance; //type: Native::Interface::TwentyFiveGigE::Performance
        class Lisp; //type: Native::Interface::TwentyFiveGigE::Lisp
        class SpanningTree; //type: Native::Interface::TwentyFiveGigE::SpanningTree
        class Mka; //type: Native::Interface::TwentyFiveGigE::Mka
        class Umbrella; //type: Native::Interface::TwentyFiveGigE::Umbrella
        class Xconnect; //type: Native::Interface::TwentyFiveGigE::Xconnect
        class Evpn; //type: Native::Interface::TwentyFiveGigE::Evpn
        class Dot1x; //type: Native::Interface::TwentyFiveGigE::Dot1x
        class Crypto; //type: Native::Interface::TwentyFiveGigE::Crypto
        class Lldp; //type: Native::Interface::TwentyFiveGigE::Lldp
        class ZoneMember; //type: Native::Interface::TwentyFiveGigE::ZoneMember
        class FabricDomain; //type: Native::Interface::TwentyFiveGigE::FabricDomain
        class AnalysisModule; //type: Native::Interface::TwentyFiveGigE::AnalysisModule
        class Cts; //type: Native::Interface::TwentyFiveGigE::Cts
        class Udld; //type: Native::Interface::TwentyFiveGigE::Udld
        class Cdp; //type: Native::Interface::TwentyFiveGigE::Cdp
        class Mvrp; //type: Native::Interface::TwentyFiveGigE::Mvrp
        class Ntp; //type: Native::Interface::TwentyFiveGigE::Ntp
        class Utd; //type: Native::Interface::TwentyFiveGigE::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::StackwiseVirtual> stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::L2protocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Domain> domain;
        ydk::YList hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Eapol> eapol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Lacp> lacp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::CiscoIOSXEEthernetMacsecOption> cisco_ios_xe_ethernet_macsec_option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mab> mab; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::EtAnalytics> et_analytics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Auto> auto_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Macro> macro;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::DualActive> dual_active;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::LoadBalancing> load_balancing;
        ydk::YList vlan_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switch> switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::SrrQueue> srr_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption> cisco_ios_xe_switch_macsec_option_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Umbrella> umbrella;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Evpn> evpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Lldp> lldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::ZoneMember> zone_member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::FabricDomain> fabric_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::AnalysisModule> analysis_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Mvrp> mvrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Utd> utd;
                class MediaType;
        class PortType;
        class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;
        class Nat66;

}; // Native::Interface::TwentyFiveGigE


class Native::Interface::TwentyFiveGigE::SwitchportConf : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::SwitchportConf


class Native::Interface::TwentyFiveGigE::Switchport : public ydk::Entity
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
        class Access; //type: Native::Interface::TwentyFiveGigE::Switchport::Access
        class Block; //type: Native::Interface::TwentyFiveGigE::Switchport::Block
        class Mode; //type: Native::Interface::TwentyFiveGigE::Switchport::Mode
        class PortSecurity; //type: Native::Interface::TwentyFiveGigE::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::TwentyFiveGigE::Switchport::Trunk
        class Voice; //type: Native::Interface::TwentyFiveGigE::Switchport::Voice
        class Priority; //type: Native::Interface::TwentyFiveGigE::Switchport::Priority
        class Autostate; //type: Native::Interface::TwentyFiveGigE::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan
        class Vepa; //type: Native::Interface::TwentyFiveGigE::Switchport::Vepa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Voice> voice;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Vepa> vepa;
        
}; // Native::Interface::TwentyFiveGigE::Switchport


class Native::Interface::TwentyFiveGigE::Switchport::Access : public ydk::Entity
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

        class Vlan; //type: Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::Access


class Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan


class Native::Interface::TwentyFiveGigE::Switchport::Block : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Switchport::Block


class Native::Interface::TwentyFiveGigE::Switchport::Mode : public ydk::Entity
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
        class Access; //type: Native::Interface::TwentyFiveGigE::Switchport::Mode::Access
        class Dot1qTunnel; //type: Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel
        class PrivateVlan; //type: Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk> trunk; // presence node
                class Dynamic;

}; // Native::Interface::TwentyFiveGigE::Switchport::Mode


class Native::Interface::TwentyFiveGigE::Switchport::Mode::Access : public ydk::Entity
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


}; // Native::Interface::TwentyFiveGigE::Switchport::Mode::Access


class Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel : public ydk::Entity
{
    public:
        Dot1qTunnel();
        ~Dot1qTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel


class Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan : public ydk::Entity
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

}; // Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan


class Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk : public ydk::Entity
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


}; // Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk


class Native::Interface::TwentyFiveGigE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf violation; //type: Violation
        class Aging; //type: Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum> maximum;
                class Violation;

}; // Native::Interface::TwentyFiveGigE::Switchport::PortSecurity


class Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

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
        ydk::YLeaf time; //type: uint16
        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging


class Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf hw_address; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress


class Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_addresses; //type: uint16
        ydk::YLeaf vlan; //type: string

}; // Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum


class Native::Interface::TwentyFiveGigE::Switchport::Trunk : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: Encapsulation
        class Allowed; //type: Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_> native;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning> pruning;
                class Encapsulation;

}; // Native::Interface::TwentyFiveGigE::Switchport::Trunk


class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed : public ydk::Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed


class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan : public ydk::Entity
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

        ydk::YLeaf vlans; //type: string
        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf all; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan


class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_ : public ydk::Entity
{
    public:
        Native_();
        ~Native_();

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
        class Vlan;

}; // Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_


class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning : public ydk::Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning


class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan : public ydk::Entity
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

        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList vlans; //type: list of  one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan


class Native::Interface::TwentyFiveGigE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect> detect;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::Voice


class Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan; //type: one of uint16, string, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan


class Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect : public ydk::Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CiscoPhone; //type: Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect


class Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone : public ydk::Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf full_duplex; //type: empty

}; // Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::TwentyFiveGigE::Switchport::Priority : public ydk::Entity
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

        class Extend; //type: Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::Priority


class Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend : public ydk::Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        ydk::YLeaf cos; //type: uint8

}; // Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend


class Native::Interface::TwentyFiveGigE::Switchport::Autostate : public ydk::Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exclude; //type: empty

}; // Native::Interface::TwentyFiveGigE::Switchport::Autostate


class Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan : public ydk::Entity
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

        class Association; //type: Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Mapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan


class Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association

class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::TenGigabitEthernet::SpanningTree::Bpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::TenGigabitEthernet::SpanningTree::Guard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf root;

};

class Native::Interface::TenGigabitEthernet::SpanningTree::LinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf shared;

};

class Native::Interface::TenGigabitEthernet::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::TenGigabitEthernet::Xconnect::Sequence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::TenGigabitEthernet::Dot1x::Pae : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authenticator;
        static const ydk::Enum::YLeaf supplicant;
        static const ydk::Enum::YLeaf both;

};

class Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};

class Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtCache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf ingress;

};

class Native::Interface::TwentyFiveGigE::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_select;
        static const ydk::Enum::YLeaf rj45;
        static const ydk::Enum::YLeaf sfp;

};

class Native::Interface::TwentyFiveGigE::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nni;

};

class Native::Interface::TwentyFiveGigE::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::TwentyFiveGigE::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::TwentyFiveGigE::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::TwentyFiveGigE::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::TwentyFiveGigE::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

};

class Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::TwentyFiveGigE::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

};

class Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};

class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf negotiate;

};

class Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tag;

};

class Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1p;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf untagged;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_60_ */

