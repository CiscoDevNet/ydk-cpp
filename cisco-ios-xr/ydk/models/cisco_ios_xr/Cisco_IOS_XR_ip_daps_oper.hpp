#ifndef _CISCO_IOS_XR_IP_DAPS_OPER_
#define _CISCO_IOS_XR_IP_DAPS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_daps_oper {

class AddressPoolService : public ydk::Entity
{
    public:
        AddressPoolService();
        ~AddressPoolService();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: AddressPoolService::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes> nodes;
        
}; // AddressPoolService


class AddressPoolService::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: AddressPoolService::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node> > node;
        
}; // AddressPoolService::Nodes


class AddressPoolService::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Pools; //type: AddressPoolService::Nodes::Node::Pools
        class TotalUtilization; //type: AddressPoolService::Nodes::Node::TotalUtilization
        class Vrfs; //type: AddressPoolService::Nodes::Node::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools> pools;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::TotalUtilization> total_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs> vrfs;
        
}; // AddressPoolService::Nodes::Node


class AddressPoolService::Nodes::Node::Pools : public ydk::Entity
{
    public:
        Pools();
        ~Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pool; //type: AddressPoolService::Nodes::Node::Pools::Pool

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool> > pool;
        
}; // AddressPoolService::Nodes::Node::Pools


class AddressPoolService::Nodes::Node::Pools::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string
        class AddressRanges; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges
        class AllocatedAddresses; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses
        class Configuration; //type: AddressPoolService::Nodes::Node::Pools::Pool::Configuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges> address_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses> allocated_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::Configuration> configuration;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges : public ydk::Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressRange; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange> > address_range;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange : public ydk::Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf pool_scope; //type: string
        ydk::YLeaf allocated_addresses; //type: uint32
        ydk::YLeaf free_addresses; //type: uint32
        ydk::YLeaf excluded_addresses; //type: uint32
        ydk::YLeaf network_blocked_status; //type: uint32
        ydk::YLeaf network_blocked_status_trp; //type: uint32
        class StartAddressXr; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr
        class EndAddress; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress
        class DefaultRouter; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr> start_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress> end_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter> default_router;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr : public ydk::Entity
{
    public:
        StartAddressXr();
        ~StartAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address : public ydk::Entity
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

        ydk::YLeaf address_family; //type: IpAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress : public ydk::Entity
{
    public:
        EndAddress();
        ~EndAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address : public ydk::Entity
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

        ydk::YLeaf address_family; //type: IpAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter : public ydk::Entity
{
    public:
        DefaultRouter();
        ~DefaultRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter


class AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address : public ydk::Entity
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

        ydk::YLeaf address_family; //type: IpAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses : public ydk::Entity
{
    public:
        AllocatedAddresses();
        ~AllocatedAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoolAllocations; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations
        class AddressRange; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange
        class InUseAddress; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations> pool_allocations;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange> > address_range;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress> > in_use_address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations : public ydk::Entity
{
    public:
        PoolAllocations();
        ~PoolAllocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf used; //type: uint32
        ydk::YLeaf excluded; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf utilization; //type: uint32
        class HighThreshold; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold
        class LowThreshold; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold> high_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold> low_threshold;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold : public ydk::Entity
{
    public:
        HighThreshold();
        ~HighThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf triggers; //type: uint32
        ydk::YLeaf time_last_crossed; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold : public ydk::Entity
{
    public:
        LowThreshold();
        ~LowThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf triggers; //type: uint32
        ydk::YLeaf time_last_crossed; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange : public ydk::Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf used; //type: uint32
        ydk::YLeaf excluded; //type: uint32
        ydk::YLeaf free; //type: uint32
        class StartAddress; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress
        class EndAddress; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress> start_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress> end_address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress : public ydk::Entity
{
    public:
        StartAddress();
        ~StartAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address : public ydk::Entity
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

        ydk::YLeaf address_family; //type: IpAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress : public ydk::Entity
{
    public:
        EndAddress();
        ~EndAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address : public ydk::Entity
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

        ydk::YLeaf address_family; //type: IpAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress : public ydk::Entity
{
    public:
        InUseAddress();
        ~InUseAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_type; //type: DapsClient
        class Address; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address : public ydk::Entity
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

        class Address_; //type: AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_> address;
        
}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address


class AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_ : public ydk::Entity
{
    public:
        Address_();
        ~Address_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: IpAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_


class AddressPoolService::Nodes::Node::Pools::Pool::Configuration : public ydk::Entity
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

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf pool_scope; //type: string
        ydk::YLeaf pool_prefix_length; //type: uint32
        ydk::YLeaf high_utilization_mark; //type: uint8
        ydk::YLeaf low_utilization_mark; //type: uint8
        ydk::YLeaf current_utilization; //type: uint8
        ydk::YLeaf utilization_high_count; //type: uint32
        ydk::YLeaf utilization_low_count; //type: uint32

}; // AddressPoolService::Nodes::Node::Pools::Pool::Configuration


class AddressPoolService::Nodes::Node::TotalUtilization : public ydk::Entity
{
    public:
        TotalUtilization();
        ~TotalUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_utilization_high_mark; //type: uint8
        ydk::YLeaf total_utilization_low_mark; //type: uint8
        ydk::YLeaf current_total_utilization; //type: uint8

}; // AddressPoolService::Nodes::Node::TotalUtilization


class AddressPoolService::Nodes::Node::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf> > vrf;
        
}; // AddressPoolService::Nodes::Node::Vrfs


class AddressPoolService::Nodes::Node::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Ipv4; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4
        class Ipv6; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6> ipv6;
        
}; // AddressPoolService::Nodes::Node::Vrfs::Vrf


class AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4 : public ydk::Entity
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

        class AllocationSummary; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary
        class Pools; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary> allocation_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools> > pools;
        
}; // AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4


class AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary : public ydk::Entity
{
    public:
        AllocationSummary();
        ~AllocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf used; //type: uint32
        ydk::YLeaf excluded; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf high_utilization_threshold; //type: uint8
        ydk::YLeaf low_utilization_threshold; //type: uint8
        ydk::YLeaf utilization; //type: uint8

}; // AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary


class AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools : public ydk::Entity
{
    public:
        Pools();
        ~Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf used; //type: uint32
        ydk::YLeaf excluded; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools


class AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6 : public ydk::Entity
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

        class AllocationSummary; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary
        class Pools; //type: AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary> allocation_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_daps_oper::AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools> > pools;
        
}; // AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6


class AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary : public ydk::Entity
{
    public:
        AllocationSummary();
        ~AllocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf used; //type: uint32
        ydk::YLeaf excluded; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf high_utilization_threshold; //type: uint8
        ydk::YLeaf low_utilization_threshold; //type: uint8
        ydk::YLeaf utilization; //type: uint8

}; // AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary


class AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools : public ydk::Entity
{
    public:
        Pools();
        ~Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf used; //type: uint32
        ydk::YLeaf excluded; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools

class DapsClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf dhcpv6;
        static const ydk::Enum::YLeaf ipv6nd;

};

class IpAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_DAPS_OPER_ */

