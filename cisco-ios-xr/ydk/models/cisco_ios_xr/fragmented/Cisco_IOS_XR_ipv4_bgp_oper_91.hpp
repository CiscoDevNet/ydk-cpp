#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_91_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_91_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_73.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_90.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter : public ydk::Entity
{
    public:
        RtSetCounter();
        ~RtSetCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_set_id; //type: int32
        class RouteTargetSet; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet> route_target_set;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet : public ydk::Entity
{
    public:
        RouteTargetSet();
        ~RouteTargetSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_set_len; //type: uint8
        ydk::YLeaf rt_set_id; //type: uint32
        ydk::YLeaf rt_set_net_count; //type: uint32
        class RtSet; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet> > rt_set;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet : public ydk::Entity
{
    public:
        RtSet();
        ~RtSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks : public ydk::Entity
{
    public:
        SourcedNetworks();
        ~SourcedNetworks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourcedNetwork; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork> > sourced_network;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork : public ydk::Entity
{
    public:
        SourcedNetwork();
        ~SourcedNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network; //type: string
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf is_backdoor; //type: boolean
        class SourcedPrefix; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix> sourced_prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix : public ydk::Entity
{
    public:
        SourcedPrefix();
        ~SourcedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily : public ydk::Entity
{
    public:
        UpdateGenerationAddressFamily();
        ~UpdateGenerationAddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf update_main_table_version; //type: uint32
        ydk::YLeaf update_rib_version; //type: uint32
        ydk::YLeaf update_min_neighbor_version; //type: uint32
        ydk::YLeaf current_update_limit_af; //type: uint32
        ydk::YLeaf configured_update_limit_af; //type: uint32
        ydk::YLeaf current_update_limit_subgrp_ebgp; //type: uint32
        ydk::YLeaf configured_update_limit_subgrp_ebgp; //type: uint32
        ydk::YLeaf current_update_limit_sub_group_ibgp; //type: uint32
        ydk::YLeaf configured_update_limit_sub_group_ibgp; //type: uint32
        ydk::YLeaf update_out_queue_messages; //type: uint32
        ydk::YLeaf update_out_queue_size; //type: uint32
        ydk::YLeaf update_throttled; //type: boolean
        ydk::YLeaf update_update_group_count; //type: uint32
        ydk::YLeaf update_sub_group_count; //type: uint32
        ydk::YLeaf sub_group_throttled_count; //type: uint32
        ydk::YLeaf refresh_sub_group_count; //type: uint32
        ydk::YLeaf refresh_sub_group_throttled_count; //type: uint32
        ydk::YLeaf filter_group_count; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32
        ydk::YLeaf update_table_vrf_name; //type: string
        ydk::YLeaf update_vrfaf_name; //type: uint32
        ydk::YLeaf update_vrf_rd_version; //type: uint32
        ydk::YLeaf update_vrf_table_rib_version; //type: uint32
        ydk::YLeaf table_update_group_count; //type: uint32
        ydk::YLeaf update_table_sub_group_count; //type: uint32
        ydk::YLeaf table_sub_group_throttled_count; //type: uint32
        ydk::YLeaf table_refresh_sub_group_count; //type: uint32
        ydk::YLeaf table_refresh_sub_group_throttled_count; //type: uint32
        ydk::YLeaf update_table_filter_group_count; //type: uint32
        ydk::YLeaf table_neighbor_count; //type: uint32
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics : public ydk::Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_out_queue_messages_high; //type: uint32
        ydk::YLeaf update_out_queue_messages_cumulative; //type: uint32
        ydk::YLeaf update_out_queue_messages_discarded; //type: uint32
        ydk::YLeaf update_out_queue_messages_cleared; //type: uint32
        ydk::YLeaf update_out_queue_size_high; //type: uint32
        ydk::YLeaf update_out_queue_size_cumulative; //type: uint64
        ydk::YLeaf update_out_queue_size_discarded; //type: uint64
        ydk::YLeaf update_out_queue_size_cleared; //type: uint64
        ydk::YLeaf last_update_discard_age; //type: uint32
        ydk::YLeaf last_update_cleard_age; //type: uint32
        ydk::YLeaf update_throttle_count; //type: uint32
        ydk::YLeaf last_update_throttle_age; //type: uint32
        ydk::YLeaf update_recovery_count; //type: uint32
        ydk::YLeaf last_update_recovery_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups : public ydk::Entity
{
    public:
        UpdateGenerationFilterGroups();
        ~UpdateGenerationFilterGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationFilterGroup; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup> > update_generation_filter_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup : public ydk::Entity
{
    public:
        UpdateGenerationFilterGroup();
        ~UpdateGenerationFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: int32
        ydk::YLeaf sub_group_index; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf filter_group_index; //type: int32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf update_filter_group_index; //type: uint32
        ydk::YLeaf parent_filter_group_index; //type: uint32
        ydk::YLeaf sub_group_index_xr; //type: uint32
        ydk::YLeaf sub_group_id_xr; //type: uint32
        ydk::YLeaf parent_sub_group_index; //type: uint32
        ydk::YLeaf parent_sub_group_id; //type: uint32
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors : public ydk::Entity
{
    public:
        UpdateGenerationNeighbors();
        ~UpdateGenerationNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor> > update_generation_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor : public ydk::Entity
{
    public:
        UpdateGenerationNeighbor();
        ~UpdateGenerationNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: int32
        ydk::YLeaf sub_group_index; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf filter_group_index; //type: int32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf update_filter_group_index; //type: uint32
        ydk::YLeaf refresh_filter_group_index; //type: uint32
        ydk::YLeaf sub_group_index_xr; //type: uint32
        ydk::YLeaf refresh_sub_group_index; //type: uint32
        ydk::YLeaf refresh_sub_group_id; //type: uint32
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf update_main_table_version; //type: uint32
        ydk::YLeaf update_vrf_table_rib_version; //type: uint32
        ydk::YLeaf update_out_queue_messages; //type: uint32
        ydk::YLeaf update_out_queue_size; //type: uint32
        ydk::YLeaf refresh_update_out_queue_messages; //type: uint32
        ydk::YLeaf refresh_update_out_queue_size; //type: uint32
        ydk::YLeaf update_filter_group_messages; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf pending_target_version; //type: uint32
        ydk::YLeaf next_resume_version; //type: uint32
        ydk::YLeaf ack_version; //type: uint32
        ydk::YLeaf synced_ack_version; //type: uint32
        ydk::YLeaf outstanding_version_count; //type: uint32
        ydk::YLeaf update_refresh_version; //type: uint32
        ydk::YLeaf refresh_requested_target_version; //type: uint32
        ydk::YLeaf update_refresh_target_version; //type: uint32
        ydk::YLeaf refresh_pending_target_version; //type: uint32
        ydk::YLeaf refresh_next_resume_version; //type: uint32
        ydk::YLeaf refresh_ack_version; //type: uint32
        ydk::YLeaf last_default_originate_age; //type: uint32
        ydk::YLeaf default_originate_state; //type: int32
        ydk::YLeaf default_originate_internal_context; //type: int32
        ydk::YLeaf is_eor_outstanding; //type: boolean
        ydk::YLeaf outbound_refresh_count; //type: uint32
        ydk::YLeaf inbound_refresh_count; //type: uint32
        ydk::YLeaf is_update_group_timer_running; //type: boolean
        ydk::YLeaf current_update_group_af_name; //type: BgpAfi
        ydk::YLeaf last_update_group_af_name; //type: BgpAfi
        ydk::YLeaf last_update_queued_age; //type: uint32
        ydk::YLeaf last_refresh_update_queued_age; //type: uint32
        ydk::YLeaf last_update_write_age; //type: uint32
        ydk::YLeaf last_refresh_update_write_age; //type: uint32
        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress
        class LastSubGroupAddTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp
        class LastSubGroupRemoveTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp
        class LastFilterGroupAddTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp
        class LastFilterGroupRemoveTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp
        class FirstDefaultOriginateTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp
        class LastDefaultOriginateTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp
        class LastUpdateGroupStartTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp
        class LastUpdateGroupExpiryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp
        class FirstUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp
        class LastUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp
        class LastRefreshUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp
        class FirstUpdateWriteTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp
        class LastUpdateWriteTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp
        class LastRefreshUpdateWriteTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp> first_default_originate_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp> first_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp> first_update_write_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp> last_default_originate_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp> last_filter_group_add_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp> last_filter_group_remove_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp> last_refresh_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp> last_refresh_update_write_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp> last_sub_group_add_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp> last_sub_group_remove_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp> last_update_group_expiry_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp> last_update_group_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp> last_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp> last_update_write_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress> update_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp : public ydk::Entity
{
    public:
        FirstDefaultOriginateTimestamp();
        ~FirstDefaultOriginateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp : public ydk::Entity
{
    public:
        FirstUpdateQueuedTimestamp();
        ~FirstUpdateQueuedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp : public ydk::Entity
{
    public:
        FirstUpdateWriteTimestamp();
        ~FirstUpdateWriteTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp : public ydk::Entity
{
    public:
        LastDefaultOriginateTimestamp();
        ~LastDefaultOriginateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp : public ydk::Entity
{
    public:
        LastFilterGroupAddTimestamp();
        ~LastFilterGroupAddTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp : public ydk::Entity
{
    public:
        LastFilterGroupRemoveTimestamp();
        ~LastFilterGroupRemoveTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp : public ydk::Entity
{
    public:
        LastRefreshUpdateQueuedTimestamp();
        ~LastRefreshUpdateQueuedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp : public ydk::Entity
{
    public:
        LastRefreshUpdateWriteTimestamp();
        ~LastRefreshUpdateWriteTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp : public ydk::Entity
{
    public:
        LastSubGroupAddTimestamp();
        ~LastSubGroupAddTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp : public ydk::Entity
{
    public:
        LastSubGroupRemoveTimestamp();
        ~LastSubGroupRemoveTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp : public ydk::Entity
{
    public:
        LastUpdateGroupExpiryTimestamp();
        ~LastUpdateGroupExpiryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp : public ydk::Entity
{
    public:
        LastUpdateGroupStartTimestamp();
        ~LastUpdateGroupStartTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp : public ydk::Entity
{
    public:
        LastUpdateQueuedTimestamp();
        ~LastUpdateQueuedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp : public ydk::Entity
{
    public:
        LastUpdateWriteTimestamp();
        ~LastUpdateWriteTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress : public ydk::Entity
{
    public:
        UpdateNeighborAddress();
        ~UpdateNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics : public ydk::Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_out_queue_messages_high; //type: uint32
        ydk::YLeaf update_out_queue_messages_cumulative; //type: uint32
        ydk::YLeaf update_out_queue_messages_discarded; //type: uint32
        ydk::YLeaf update_out_queue_messages_cleared; //type: uint32
        ydk::YLeaf update_out_queue_size_high; //type: uint32
        ydk::YLeaf update_out_queue_size_cumulative; //type: uint64
        ydk::YLeaf update_out_queue_size_discarded; //type: uint64
        ydk::YLeaf update_out_queue_size_cleared; //type: uint64
        ydk::YLeaf last_update_discard_age; //type: uint32
        ydk::YLeaf last_update_cleard_age; //type: uint32
        ydk::YLeaf update_throttle_count; //type: uint32
        ydk::YLeaf last_update_throttle_age; //type: uint32
        ydk::YLeaf update_recovery_count; //type: uint32
        ydk::YLeaf last_update_recovery_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups : public ydk::Entity
{
    public:
        UpdateGenerationSubGroups();
        ~UpdateGenerationSubGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationSubGroup; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup> > update_generation_sub_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup : public ydk::Entity
{
    public:
        UpdateGenerationSubGroup();
        ~UpdateGenerationSubGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: int32
        ydk::YLeaf sub_group_index; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf sub_group_index_xr; //type: uint32
        ydk::YLeaf sub_group_id_xr; //type: uint32
        ydk::YLeaf parent_sub_group_index; //type: uint32
        ydk::YLeaf parent_sub_group_id; //type: uint32
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf update_main_table_version; //type: uint32
        ydk::YLeaf update_vrf_table_rib_version; //type: uint32
        ydk::YLeaf current_update_limit_sub_group; //type: uint32
        ydk::YLeaf configured_update_limit_sub_group; //type: uint32
        ydk::YLeaf update_out_queue_messages; //type: uint32
        ydk::YLeaf update_out_queue_size; //type: uint32
        ydk::YLeaf update_throttled; //type: boolean
        ydk::YLeaf refresh_sub_group_count; //type: uint32
        ydk::YLeaf filter_group_count; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf pending_target_version; //type: uint32
        ydk::YLeaf next_resume_version; //type: uint32
        ydk::YLeaf update_refresh_target_version; //type: uint32
        ydk::YLeaf io_write_event_pending; //type: boolean
        ydk::YLeaf update_default_route_sent; //type: boolean
        ydk::YLeaf merge_count; //type: uint32
        ydk::YLeaf last_merged_sub_group_index; //type: uint32
        ydk::YLeaf eo_r_attempted; //type: boolean
        ydk::YLeaf last_update_walk_end_age; //type: uint32
        ydk::YLeaf last_update_queued_age; //type: uint32
        class CreationTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp
        class LastMergeTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp
        class FirstUpdateWalkStartTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp
        class FirstUpdateWalkEndTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp
        class LastUpdateWalkStartTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp
        class LastUpdateWalkEndTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp
        class LastUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp> creation_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp> first_update_walk_end_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp> first_update_walk_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp> last_merge_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp> last_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp> last_update_walk_end_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp> last_update_walk_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp : public ydk::Entity
{
    public:
        CreationTimestamp();
        ~CreationTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp : public ydk::Entity
{
    public:
        FirstUpdateWalkEndTimestamp();
        ~FirstUpdateWalkEndTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp : public ydk::Entity
{
    public:
        FirstUpdateWalkStartTimestamp();
        ~FirstUpdateWalkStartTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp : public ydk::Entity
{
    public:
        LastMergeTimestamp();
        ~LastMergeTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp : public ydk::Entity
{
    public:
        LastUpdateQueuedTimestamp();
        ~LastUpdateQueuedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp : public ydk::Entity
{
    public:
        LastUpdateWalkEndTimestamp();
        ~LastUpdateWalkEndTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp : public ydk::Entity
{
    public:
        LastUpdateWalkStartTimestamp();
        ~LastUpdateWalkStartTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics : public ydk::Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_out_queue_messages_high; //type: uint32
        ydk::YLeaf update_out_queue_messages_cumulative; //type: uint32
        ydk::YLeaf update_out_queue_messages_discarded; //type: uint32
        ydk::YLeaf update_out_queue_messages_cleared; //type: uint32
        ydk::YLeaf update_out_queue_size_high; //type: uint32
        ydk::YLeaf update_out_queue_size_cumulative; //type: uint64
        ydk::YLeaf update_out_queue_size_discarded; //type: uint64
        ydk::YLeaf update_out_queue_size_cleared; //type: uint64
        ydk::YLeaf last_update_discard_age; //type: uint32
        ydk::YLeaf last_update_cleard_age; //type: uint32
        ydk::YLeaf update_throttle_count; //type: uint32
        ydk::YLeaf last_update_throttle_age; //type: uint32
        ydk::YLeaf update_recovery_count; //type: uint32
        ydk::YLeaf last_update_recovery_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups : public ydk::Entity
{
    public:
        UpdateGenerationUpdateGroups();
        ~UpdateGenerationUpdateGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGenerationUpdateGroup; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup> > update_generation_update_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup : public ydk::Entity
{
    public:
        UpdateGenerationUpdateGroup();
        ~UpdateGenerationUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_index; //type: int32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf neighbor_session_af_name; //type: uint8
        ydk::YLeaf update_group_index_xr; //type: uint32
        ydk::YLeaf update_group_flags2; //type: uint32
        ydk::YLeaf update_out_queue_messages; //type: uint32
        ydk::YLeaf update_out_queue_size; //type: uint32
        ydk::YLeaf update_sub_group_count; //type: uint32
        ydk::YLeaf sub_group_throttled_count; //type: uint32
        ydk::YLeaf refresh_sub_group_count; //type: uint32
        ydk::YLeaf refresh_sub_group_throttled_count; //type: uint32
        ydk::YLeaf filter_group_count; //type: uint32
        ydk::YLeaf neighbor_count; //type: uint32
        ydk::YLeaf neighbor_leaving_count; //type: uint32
        ydk::YLeaf update_generation_recovery_pending; //type: boolean
        ydk::YLeaf last_update_timer_expiry_age; //type: uint32
        ydk::YLeaf is_update_timer_running; //type: boolean
        ydk::YLeaf perm_pelem_encountered; //type: uint32
        ydk::YLeaf perm_pelem_allowed; //type: uint32
        ydk::YLeaf perm_pelem_not_allowed; //type: uint32
        ydk::YLeaf perm_pelem_exp_wdr; //type: uint32
        ydk::YLeaf perm_pelem_spur_wdr; //type: uint32
        ydk::YLeaf is_permanent; //type: boolean
        class LastUpdateTimerStartTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp
        class LastUpdateTimerStopTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp
        class LastUpdateTimerExpiryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp
        class LastUpdateTimerRemainingValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue
        class LastUpdateTimerDelayValue; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue> last_update_timer_delay_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp> last_update_timer_expiry_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue> last_update_timer_remaining_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp> last_update_timer_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp> last_update_timer_stop_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue : public ydk::Entity
{
    public:
        LastUpdateTimerDelayValue();
        ~LastUpdateTimerDelayValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp : public ydk::Entity
{
    public:
        LastUpdateTimerExpiryTimestamp();
        ~LastUpdateTimerExpiryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue : public ydk::Entity
{
    public:
        LastUpdateTimerRemainingValue();
        ~LastUpdateTimerRemainingValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp : public ydk::Entity
{
    public:
        LastUpdateTimerStartTimestamp();
        ~LastUpdateTimerStartTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp : public ydk::Entity
{
    public:
        LastUpdateTimerStopTimestamp();
        ~LastUpdateTimerStopTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics : public ydk::Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_out_queue_messages_high; //type: uint32
        ydk::YLeaf update_out_queue_messages_cumulative; //type: uint32
        ydk::YLeaf update_out_queue_messages_discarded; //type: uint32
        ydk::YLeaf update_out_queue_messages_cleared; //type: uint32
        ydk::YLeaf update_out_queue_size_high; //type: uint32
        ydk::YLeaf update_out_queue_size_cumulative; //type: uint64
        ydk::YLeaf update_out_queue_size_discarded; //type: uint64
        ydk::YLeaf update_out_queue_size_cleared; //type: uint64
        ydk::YLeaf last_update_discard_age; //type: uint32
        ydk::YLeaf last_update_cleard_age; //type: uint32
        ydk::YLeaf update_throttle_count; //type: uint32
        ydk::YLeaf last_update_throttle_age; //type: uint32
        ydk::YLeaf update_recovery_count; //type: uint32
        ydk::YLeaf last_update_recovery_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups : public ydk::Entity
{
    public:
        UpdateGroups();
        ~UpdateGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateGroup; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup> > update_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup : public ydk::Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_group_id; //type: int32
        ydk::YLeaf filter_group_id; //type: int32
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf session_af_name; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        ydk::YLeaf update_group_af_name; //type: BgpAfi
        ydk::YLeaf should_send_communities; //type: boolean
        ydk::YLeaf should_send_ext_communities; //type: boolean
        ydk::YLeaf should_send_stitching_rt; //type: boolean
        ydk::YLeaf has_orf_receive_capability; //type: boolean
        ydk::YLeaf is_route_reflector_client; //type: boolean
        ydk::YLeaf is_client_reflection_disabled; //type: boolean
        ydk::YLeaf accepts_legacy_pe_rt_route; //type: boolean
        ydk::YLeaf updgrp_cluster_id; //type: uint32
        ydk::YLeaf updgrp_cluster_type; //type: uint8
        ydk::YLeaf orr_group_name; //type: string
        ydk::YLeaf orr_group_index; //type: uint32
        ydk::YLeaf is_orr_root_address_configured; //type: boolean
        ydk::YLeaf should_remove_private_a_ss; //type: boolean
        ydk::YLeaf should_remove_private_as_ent_path; //type: boolean
        ydk::YLeaf use_next_hop_self; //type: boolean
        ydk::YLeaf use_next_hop_unchanged_mpath; //type: boolean
        ydk::YLeaf is_internal_peers; //type: boolean
        ydk::YLeaf is_common_admin_peers; //type: boolean
        ydk::YLeaf is4_byte_as_peer; //type: boolean
        ydk::YLeaf is_addpath_capable; //type: boolean
        ydk::YLeaf is_send_mcast_attr_enabled; //type: boolean
        ydk::YLeaf is_aigp_capable; //type: boolean
        ydk::YLeaf is_aigp_cost_community_capable; //type: boolean
        ydk::YLeaf is_aigp_med_capable; //type: boolean
        ydk::YLeaf is_llgr_capable; //type: boolean
        ydk::YLeaf is_adv_capable; //type: boolean
        ydk::YLeaf is_adv_reorg_capable; //type: boolean
        ydk::YLeaf disable_native_advertisement; //type: boolean
        ydk::YLeaf disable_def_vrf_imp_advertisement; //type: boolean
        ydk::YLeaf disable_vrf_re_imp_advertisement; //type: boolean
        ydk::YLeaf encapsulation_type; //type: uint32
        ydk::YLeaf advertise_rt_type; //type: uint8
        ydk::YLeaf is_directly_connected_ebgp_v6_peers; //type: boolean
        ydk::YLeaf minimum_advertisement_interval; //type: uint32
        ydk::YLeaf minimum_advertisement_interval_msecs; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf desync_count; //type: uint32
        ydk::YLeaf subgrp_merge_count; //type: uint32
        ydk::YLeaf refresh_subgrp_count; //type: uint32
        ydk::YLeaf updates_formatted; //type: uint32
        ydk::YLeaf updates_replicated; //type: uint32
        ydk::YLeaf local_as_replace_as; //type: boolean
        ydk::YLeaf as_override; //type: boolean
        ydk::YLeaf soo_value; //type: string
        ydk::YLeaf split_horizon; //type: boolean
        ydk::YLeaf is_labeled_afi_enabled; //type: boolean
        ydk::YLeaf is_unlabeled_afi_enabled; //type: boolean
        ydk::YLeaf ext_nh_encoding; //type: boolean
        ydk::YLeaf remote_as; //type: uint32
        ydk::YLeaf is_adv_perm_net_capable; //type: boolean
        ydk::YLeaf should_send_gshut_community; //type: boolean
        ydk::YLeaf gshut_active; //type: boolean
        ydk::YLeaf gshut_locpref_set; //type: boolean
        ydk::YLeaf gshut_locpref; //type: uint32
        ydk::YLeaf gshut_prepends; //type: uint8
        ydk::YLeaf advertise_local_labeled_route_unicast; //type: boolean
        ydk::YLeaf enable_label_stack; //type: boolean
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor
        class UpdateSubGroup; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics> performance_statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup> > update_sub_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics : public ydk::Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_generation_calls; //type: uint32
        ydk::YLeaf update_generation_prefixes_count; //type: uint32
        ydk::YLeaf update_generation_be_prefixes_count; //type: uint32
        ydk::YLeaf update_generation_messages_count; //type: uint32
        ydk::YLeaf update_generation_time; //type: uint32
        ydk::YLeaf updgen_timer_start_time; //type: uint64
        ydk::YLeaf updgen_timer_stop_time; //type: uint64
        ydk::YLeaf updgen_timer_process_time; //type: uint64

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup : public ydk::Entity
{
    public:
        UpdateSubGroup();
        ~UpdateSubGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_sub_group_number; //type: uint32
        ydk::YLeaf filter_group; //type: uint16
        ydk::YLeaf wait_for_eo_rs; //type: boolean
        class UpdateFilterGroup; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup> > update_filter_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup : public ydk::Entity
{
    public:
        UpdateFilterGroup();
        ~UpdateFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_filter_group_number; //type: uint32
        ydk::YLeaf rts; //type: uint32
        ydk::YLeaf fgroup_flags; //type: uint8
        ydk::YLeaf fgroup_neighbors; //type: uint16
        ydk::YLeaf fgroup_created_message_elements; //type: uint32
        ydk::YLeaf fgroup_deleted_message_elements; //type: uint32
        ydk::YLeaf fgroup_queued_message_elements; //type: uint32
        ydk::YLeaf fgroup_advertised_prefixes; //type: uint32
        ydk::YLeaf fgroup_total_advertised_prefixes; //type: uint32
        ydk::YLeaf fgroup_withdrawn_prefixes; //type: uint32
        ydk::YLeaf fgroup_total_withdrawn_prefixes; //type: uint32
        ydk::YLeaf fgroup_total_non_optimised_prefixes; //type: uint32
        ydk::YLeaf fgroup_skipped_prefixes; //type: uint32
        ydk::YLeaf fgroup_suppressed_prefixes; //type: uint32
        ydk::YLeaf is_rt_present; //type: boolean
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor> > neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp : public ydk::Entity
{
    public:
        Bmp();
        ~Bmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerSummaries; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries
        class ServerNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors> server_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries> server_summaries;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors : public ydk::Entity
{
    public:
        ServerNeighbors();
        ~ServerNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor> > server_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor : public ydk::Entity
{
    public:
        ServerNeighbor();
        ~ServerNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32
        class MonitoredNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors> monitored_neighbors;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors : public ydk::Entity
{
    public:
        MonitoredNeighbors();
        ~MonitoredNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitoredNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor> > monitored_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor : public ydk::Entity
{
    public:
        MonitoredNeighbor();
        ~MonitoredNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf bmp_neighbor_msg_pending; //type: uint32
        ydk::YLeaf bmp_neighbor_msg_dropped; //type: uint32
        ydk::YLeaf bmp_neighbor_peer_up_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_peer_down_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_route_monitor_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_route_monitor_eor_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_path_update_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_path_withdraw_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_path_update_drop; //type: uint32
        ydk::YLeaf bmp_neighbor_path_withdraw_drop; //type: uint32
        ydk::YLeaf bmp_neighbor_upd_msg_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_wdraw_msg_sent; //type: uint32
        class BmpNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress> bmp_neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress : public ydk::Entity
{
    public:
        BmpNeighborAddress();
        ~BmpNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries : public ydk::Entity
{
    public:
        ServerSummaries();
        ~ServerSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerSummary; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary> > server_summary;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary : public ydk::Entity
{
    public:
        ServerSummary();
        ~ServerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32
        ydk::YLeaf bmp_server_id; //type: uint8
        ydk::YLeaf bmp_server_host_name; //type: string
        ydk::YLeaf bmp_server_port; //type: uint32
        ydk::YLeaf bmp_server_state; //type: BgpBmpState
        ydk::YLeaf bmp_server_is_flapping; //type: boolean
        ydk::YLeaf bmp_server_nbr_count; //type: uint32
        ydk::YLeaf bmp_init_msg_count; //type: uint32
        ydk::YLeaf bmp_termination_msg_count; //type: uint32
        ydk::YLeaf bmp_status_report_count; //type: uint32
        ydk::YLeaf bmp_per_peer_msg_count; //type: uint32
        ydk::YLeaf bmp_peer_msg_drop_count; //type: uint32
        ydk::YLeaf bmp_peer_msg_pending_count; //type: uint32
        ydk::YLeaf tos_type; //type: uint8
        ydk::YLeaf tos_value; //type: uint8
        ydk::YLeaf update_source_interface_name; //type: string
        ydk::YLeaf update_source_vrf_id; //type: uint32
        ydk::YLeaf bmp_vrf_name; //type: string
        ydk::YLeaf bmp_vrf_id; //type: uint32
        ydk::YLeaf bmp_update_mode; //type: BgpBmpUpdMode
        ydk::YLeaf tcp_keep_alive_interval; //type: uint32
        ydk::YLeaf tcp_maximum_segment_size; //type: uint32
        ydk::YLeaf tcp_write_cb_pending; //type: uint32
        ydk::YLeaf tcp_last_write_result; //type: uint32
        ydk::YLeaf tcp_last_write_cb_time; //type: uint64
        ydk::YLeaf tcp_last_write_time; //type: uint64
        ydk::YLeaf bmpq_last_write_pulse_sent_time; //type: uint64
        ydk::YLeaf bmpq_last_all_write_pulse_sent_time; //type: uint64
        ydk::YLeaf bmpq_last_write_pulse_cb_time; //type: uint64
        ydk::YLeaf path_update_count; //type: uint32
        ydk::YLeaf path_withdraw_count; //type: uint32
        ydk::YLeaf path_update_drop; //type: uint32
        ydk::YLeaf path_withdraw_drop; //type: uint32
        ydk::YLeaf bmp_peer_msg_pending_count_max; //type: uint32
        ydk::YLeaf bmp_peer_msg_pending_count_hwts; //type: uint64
        ydk::YLeaf bmp_bytes_written_tcp; //type: uint64
        ydk::YLeaf tcp_write_time; //type: uint32
        ydk::YLeaf bmpr_mon_upd_messages; //type: uint32
        ydk::YLeaf bmpr_mon_wdraw_messages; //type: uint32
        ydk::YLeaf bmp_messages_wdraw_discarded; //type: uint32
        ydk::YLeaf bmp_pfx_wdraw_discarded; //type: uint32
        ydk::YLeaf bmp_per_peer_msg_route_mon_count; //type: uint32
        ydk::YLeaf bmpr_mon_update_gen_time; //type: uint32
        ydk::YLeaf bmpr_mon_eo_rmessages; //type: uint32
        ydk::YLeaf bmp_rmon_cur_buffer_size; //type: uint64
        ydk::YLeaf bmp_maximum_buffer_size_route_mon; //type: uint64
        ydk::YLeaf bmp_server_up_count; //type: uint32
        ydk::YLeaf bmp_upd_gen_in_progress; //type: boolean
        ydk::YLeaf bmp_reset_walk_in_progress; //type: boolean
        class BmpServerStateAge; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge
        class BmpServerStateTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec
        class BmpServerLastDisconTime; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime
        class UpdateSourceAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress
        class BmpafiInfo; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime> bmp_server_last_discon_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge> bmp_server_state_age;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec> bmp_server_state_time_spec;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo> > bmpafi_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress> update_source_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime : public ydk::Entity
{
    public:
        BmpServerLastDisconTime();
        ~BmpServerLastDisconTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge : public ydk::Entity
{
    public:
        BmpServerStateAge();
        ~BmpServerStateAge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec : public ydk::Entity
{
    public:
        BmpServerStateTimeSpec();
        ~BmpServerStateTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo : public ydk::Entity
{
    public:
        BmpafiInfo();
        ~BmpafiInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bmpaf_name; //type: BgpAfi
        ydk::YLeaf bmp_resume_prefix_len; //type: uint32
        ydk::YLeaf bmp_upd_gen_resume_start_version; //type: uint32
        ydk::YLeaf bmp_upd_gen_resume_end_version; //type: uint32
        ydk::YLeaf bmp_upd_gen_walk_stopped; //type: boolean
        ydk::YLeaf bmp_upd_gen_resume_net_version; //type: uint32
        ydk::YLeaf bmp_upd_gen_walk_run_time_stamp; //type: uint64
        ydk::YLeaf bmp_upd_gen_walk_run_count; //type: uint64
        ydk::YLeaf bmp_upd_gen_walk_stop_time_stamp; //type: uint64
        ydk::YLeaf bmp_upd_gen_walk_stop_count; //type: uint64
        ydk::YLeaf bmp_init_eor_end_version; //type: uint32
        ydk::YLeaf bmp_init_eor_pending_cnt; //type: uint32
        ydk::YLeaf bmp_filter_neighbor_address_set; //type: boolean
        ydk::YLeaf bmp_filter_nbr_cnt; //type: uint32
        ydk::YLeaf bmp_send_version; //type: uint32
        class BmpResumePrefix; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix
        class BmpFilterNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress> bmp_filter_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix> bmp_resume_prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress : public ydk::Entity
{
    public:
        BmpFilterNeighborAddress();
        ~BmpFilterNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix : public ydk::Entity
{
    public:
        BmpResumePrefix();
        ~BmpResumePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress : public ydk::Entity
{
    public:
        UpdateSourceAddress();
        ~UpdateSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo : public ydk::Entity
{
    public:
        GlobalProcessInfo();
        ~GlobalProcessInfo();

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
        ydk::YLeaf vrfid; //type: uint32
        class Global; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global
        class Vrf_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_> vrf;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_standalone_mode; //type: boolean
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf update_delay; //type: uint32
        ydk::YLeaf generic_scan_period; //type: uint16
        ydk::YLeaf confederation_id; //type: uint32
        ydk::YLeaf cluster_id; //type: uint32
        ydk::YLeaf configured_cluster_id; //type: uint32
        ydk::YLeaf is_cluster_id_specified_as_ip; //type: boolean
        ydk::YLeaf asn_format; //type: uint32
        ydk::YLeaf srgb_start_configured; //type: uint32
        ydk::YLeaf srgb_end_configured; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_end; //type: uint32
        ydk::YLeaf graceful_maintenance; //type: boolean
        ydk::YLeaf graceful_maint_all_nbrs; //type: boolean
        ydk::YLeaf graceful_maint_retain_routes; //type: boolean
        ydk::YLeaf process_rlimit; //type: uint64
        ydk::YLeaf bmp_maximum_buffer_size; //type: uint64
        ydk::YLeaf bmp_default_buffer_size; //type: uint64
        ydk::YLeaf bmp_current_buffer_size; //type: uint64
        ydk::YLeaf bmp_cur_maximum_buffer_size; //type: uint64
        class ClusterIdEntry; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry
        class ColorId; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry> > cluster_id_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId> > color_id;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry : public ydk::Entity
{
    public:
        ClusterIdEntry();
        ~ClusterIdEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster_id_val; //type: uint32
        ydk::YLeaf cluster_id_type; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId : public ydk::Entity
{
    public:
        ColorId();
        ~ColorId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color_id_val; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_is_active; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf configured_router_id; //type: string
        ydk::YLeaf is_redistribute_ibgp_to_ig_ps_enabled; //type: boolean
        ydk::YLeaf is_fast_external_fallover_enabled; //type: boolean
        ydk::YLeaf is_bestpath_missing_med_is_worst_enabled; //type: boolean
        ydk::YLeaf is_bestpath_always_compare_med_enabled; //type: boolean
        ydk::YLeaf is_bestpath_ignore_as_path_enabled; //type: boolean
        ydk::YLeaf is_bestpath_as_path_mpath_relax_enabled; //type: boolean
        ydk::YLeaf is_bestpath_compare_med_from_confed_peer_enabled; //type: boolean
        ydk::YLeaf is_bestpath_compare_router_id_for_ebgp_peers_enabled; //type: boolean
        ydk::YLeaf is_bestpath_aigp_ignore_enabled; //type: boolean
        ydk::YLeaf is_multipath_as_path_ignore_onwards_enabled; //type: boolean
        ydk::YLeaf is_enforce_first_as_enabled; //type: boolean
        ydk::YLeaf default_local_preference; //type: uint32
        ydk::YLeaf keep_alive_time; //type: uint16
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf min_acceptable_hold_time; //type: uint16
        ydk::YLeaf is_neighbor_logging; //type: boolean
        ydk::YLeaf is_default_metric_configured; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf is_default_originate_configured; //type: boolean
        ydk::YLeaf is_graceful_restart; //type: boolean
        ydk::YLeaf is_nsr; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf stale_path_time; //type: uint32
        ydk::YLeaf rib_purge_timeout; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_distinguisher; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs : public ydk::Entity
{
    public:
        MessageLogs();
        ~MessageLogs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MessageLog; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog> > message_log;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog : public ydk::Entity
{
    public:
        MessageLog();
        ~MessageLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf direction; //type: int32
        class NeighborMessage; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage> > neighbor_message;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage : public ydk::Entity
{
    public:
        NeighborMessage();
        ~NeighborMessage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_type_received; //type: uint8
        ydk::YLeaf total_logged_message_count; //type: uint32
        ydk::YLeaf message_data_length; //type: uint16
        class MessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp
        class LoggedMessageData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData> > logged_message_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp> message_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData : public ydk::Entity
{
    public:
        LoggedMessageData();
        ~LoggedMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp : public ydk::Entity
{
    public:
        MessageTimestamp();
        ~MessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges : public ydk::Entity
{
    public:
        NeighborRanges();
        ~NeighborRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborRange; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange> > neighbor_range;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange : public ydk::Entity
{
    public:
        NeighborRange();
        ~NeighborRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_range_address; //type: string
        ydk::YLeaf speaker_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf remote_as; //type: uint32
        ydk::YLeaf has_internal_link; //type: boolean
        ydk::YLeaf is_local_address_configured; //type: boolean
        ydk::YLeaf neighbor_range_prefix_length; //type: uint8
        ydk::YLeaf is_administratively_shut_down; //type: boolean
        ydk::YLeaf is_neighbor_max_prefix_shutdown; //type: boolean
        ydk::YLeaf is_out_of_memory_forced_up; //type: boolean
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf suppress4_byte_as; //type: boolean
        ydk::YLeaf bfd_session_enable_mode; //type: BgpBfdEnableMode
        ydk::YLeaf bfd_minintervalval; //type: uint32
        ydk::YLeaf bfd_multiplierval; //type: uint32
        ydk::YLeaf ebgp_time_to_live; //type: uint32
        ydk::YLeaf is_ebgp_multihop_bgp_mpls_forwarding_disabled; //type: boolean
        ydk::YLeaf tcpmss; //type: uint32
        ydk::YLeaf msg_log_in; //type: uint32
        ydk::YLeaf msg_log_out; //type: uint32
        ydk::YLeaf neighbor_local_as; //type: uint32
        ydk::YLeaf local_as_no_prepend; //type: boolean
        ydk::YLeaf is_capability_negotiation_performed; //type: boolean
        ydk::YLeaf configured_hold_time; //type: uint16
        ydk::YLeaf configured_keepalive; //type: uint16
        ydk::YLeaf configured_min_acc_hold_time; //type: uint16
        ydk::YLeaf min_advertise_interval; //type: uint32
        ydk::YLeaf min_advertise_interval_msecs; //type: uint32
        ydk::YLeaf min_origination_interval; //type: uint16
        ydk::YLeaf remote_as_number; //type: uint32
        ydk::YLeaf dmz_link_bandwidth; //type: uint32
        ydk::YLeaf ebgp_recv_dmz; //type: boolean
        ydk::YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableMode
        ydk::YLeaf tos_type; //type: uint8
        ydk::YLeaf tos_value; //type: uint8
        ydk::YLeaf tcp_session_open_mode; //type: BgpTcpMode
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf standby_rp; //type: boolean
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf graceful_restart_enabled_nbr; //type: boolean
        ydk::YLeaf gr_restart_time; //type: uint32
        ydk::YLeaf gr_stale_path_time; //type: uint32
        ydk::YLeaf is_passive_close; //type: boolean
        ydk::YLeaf nbr_enforce_first_as; //type: boolean
        ydk::YLeaf active_bmp_servers; //type: uint8
        ydk::YLeaf nbr_cluster_id; //type: uint32
        ydk::YLeaf nbr_in_cluster; //type: uint8
        ydk::YLeaf ignore_connected; //type: boolean
        ydk::YLeaf internal_vpn_client; //type: boolean
        ydk::YLeaf local_as_replace_as; //type: boolean
        ydk::YLeaf local_as_dual_as; //type: boolean
        ydk::YLeaf local_as_dual_as_mode_native; //type: boolean
        ydk::YLeaf egress_peer_engineering_enabled; //type: boolean
        ydk::YLeaf discard_as4_path; //type: uint32
        ydk::YLeaf rpki_disable; //type: boolean
        ydk::YLeaf rpki_use_validity; //type: boolean
        ydk::YLeaf rpki_allow_invalid; //type: boolean
        ydk::YLeaf rpki_signal_ibgp; //type: boolean
        ydk::YLeaf remote_as_list_name; //type: string
        ydk::YLeaf nbr_rcv_size; //type: uint32
        ydk::YLeaf nbr_send_size; //type: uint32
        ydk::YLeaf islocal_address_cfg; //type: boolean
        ydk::YLeaf update_source; //type: string
        ydk::YLeaf addpath_send_enable; //type: boolean
        ydk::YLeaf addpath_receive_enable; //type: boolean
        ydk::YLeaf addpath_send_disable; //type: boolean
        ydk::YLeaf addpath_receive_disable; //type: boolean
        ydk::YLeaf upd_errh_noreset; //type: boolean
        ydk::YLeaf msg_buf_count; //type: uint32
        ydk::YLeaf msg_bug_circular; //type: boolean
        ydk::YLeaf syslog_enable; //type: boolean
        ydk::YLeaf oper_attrf_enable; //type: boolean
        ydk::YLeaf attrf_group_name; //type: string
        ydk::YLeaf max_peers; //type: uint32
        ydk::YLeaf idle_watch_time; //type: uint32
        ydk::YLeaf current_peers; //type: uint32
        ydk::YLeaf range_open_match; //type: uint32
        ydk::YLeaf range_open_accepted; //type: uint32
        ydk::YLeaf range_max_drop; //type: uint32
        ydk::YLeaf range_inst_error; //type: uint32
        class ConnectionLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress
        class ConnectionRemoteAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress
        class GracefulMaintenance; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance
        class CfgLocalAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress
        class AfData; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData
        class Instance_; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData> > af_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress> cfg_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress> connection_local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress> connection_remote_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance> graceful_maintenance;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_> > instance;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf is_neighbor_route_reflector_client; //type: boolean
        ydk::YLeaf is_legacy_pe_rt; //type: boolean
        ydk::YLeaf is_neighbor_af_capable; //type: boolean
        ydk::YLeaf is_soft_reconfiguration_inbound_allowed; //type: boolean
        ydk::YLeaf is_use_soft_reconfiguration_always_on; //type: boolean
        ydk::YLeaf remove_private_as_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_updates; //type: boolean
        ydk::YLeaf remove_private_as_from_inbound_updates; //type: boolean
        ydk::YLeaf remove_private_as_entire_aspath_from_inbound_updates; //type: boolean
        ydk::YLeaf flowspec_validation_d_isable; //type: boolean
        ydk::YLeaf flowspec_redirect_validation_d_isable; //type: boolean
        ydk::YLeaf orr_group_name; //type: string
        ydk::YLeaf orr_group_index; //type: uint32
        ydk::YLeaf is_orr_root_address_configured; //type: boolean
        ydk::YLeaf advertise_afi; //type: boolean
        ydk::YLeaf advertise_afi_reorg; //type: boolean
        ydk::YLeaf advertise_afi_local; //type: boolean
        ydk::YLeaf advertise_afi_disable; //type: boolean
        ydk::YLeaf always_use_next_hop_local; //type: boolean
        ydk::YLeaf next_hop_unchanged; //type: boolean
        ydk::YLeaf sent_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_gshut_community_to_neighbor; //type: boolean
        ydk::YLeaf sent_extended_community_to_neighbor; //type: boolean
        ydk::YLeaf neighbor_default_originate; //type: boolean
        ydk::YLeaf is_orf_sent; //type: boolean
        ydk::YLeaf is_update_deferred; //type: boolean
        ydk::YLeaf is_orf_send_scheduled; //type: boolean
        ydk::YLeaf vpn_update_gen_enabled; //type: boolean
        ydk::YLeaf vpn_update_gen_trigger_enabled; //type: boolean
        ydk::YLeaf is_addpath_send_operational; //type: boolean
        ydk::YLeaf is_addpath_receive_operational; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf max_prefix_limit; //type: uint32
        ydk::YLeaf use_max_prefix_warning_only; //type: boolean
        ydk::YLeaf max_prefix_discard_extra_paths; //type: boolean
        ydk::YLeaf max_prefix_exceed_discard_paths; //type: boolean
        ydk::YLeaf max_prefix_threshold_percent; //type: uint8
        ydk::YLeaf max_prefix_restart_time; //type: uint16
        ydk::YLeaf is_peer_orf_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_send; //type: boolean
        ydk::YLeaf is_received_orf_send_capable; //type: boolean
        ydk::YLeaf is_advertised_orf_receive; //type: boolean
        ydk::YLeaf is_received_orf_receive_capable; //type: boolean
        ydk::YLeaf is_advertised_graceful_restart; //type: boolean
        ydk::YLeaf is_graceful_restart_state_flag; //type: boolean
        ydk::YLeaf is_received_graceful_restart_capable; //type: boolean
        ydk::YLeaf is_add_path_send_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_send_capability_received; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_advertised; //type: boolean
        ydk::YLeaf is_add_path_receive_capability_received; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf local_restart_time; //type: uint32
        ydk::YLeaf stale_path_timeout; //type: uint32
        ydk::YLeaf rib_purge_timeout_value; //type: uint32
        ydk::YLeaf neighbor_preserved_forwarding_state; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_configured; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_sent; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_stale_time_accept; //type: uint32
        ydk::YLeaf long_lived_graceful_restart_capability_received; //type: boolean
        ydk::YLeaf long_lived_graceful_restart_stale_time_received; //type: uint32
        ydk::YLeaf neighbor_preserved_long_lived_forwarding_state; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_capable; //type: boolean
        ydk::YLeaf neighbor_long_lived_graceful_restart_time_remaining; //type: uint32
        ydk::YLeaf is_prefix_orf_present; //type: boolean
        ydk::YLeaf orf_entries_received; //type: uint32
        ydk::YLeaf route_policy_prefix_orf; //type: string
        ydk::YLeaf route_policy_in; //type: string
        ydk::YLeaf route_policy_out; //type: string
        ydk::YLeaf route_policy_default_originate; //type: string
        ydk::YLeaf is_neighbor_ebgp_without_inbound_policy; //type: boolean
        ydk::YLeaf is_neighbor_ebgp_without_outbound_policy; //type: boolean
        ydk::YLeaf is_as_override_set; //type: boolean
        ydk::YLeaf is_allow_as_in_set; //type: boolean
        ydk::YLeaf allow_as_in_count; //type: uint32
        ydk::YLeaf address_family_long_lived_time; //type: uint32
        ydk::YLeaf is_aigp_set; //type: boolean
        ydk::YLeaf is_rt_present; //type: boolean
        ydk::YLeaf is_rt_present_standby; //type: boolean
        ydk::YLeaf accept_own_enabled; //type: boolean
        ydk::YLeaf selective_multipath_eligible; //type: boolean
        ydk::YLeaf afrpki_disable; //type: boolean
        ydk::YLeaf afrpki_use_validity; //type: boolean
        ydk::YLeaf afrpki_allow_invalid; //type: boolean
        ydk::YLeaf afrpki_signal_ibgp; //type: boolean
        ydk::YLeaf is_advertise_permanent_network; //type: boolean
        ydk::YLeaf is_send_mcast_attr; //type: boolean
        ydk::YLeaf import_stitching; //type: boolean
        ydk::YLeaf import_reoriginate; //type: boolean
        ydk::YLeaf import_reoriginate_stitching; //type: boolean
        ydk::YLeaf advertise_v4_flags; //type: uint32
        ydk::YLeaf advertise_v6_flags; //type: uint32
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity
        class ExtendedCommunityStandby; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby> > extended_community_standby;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity : public ydk::Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby : public ydk::Entity
{
    public:
        ExtendedCommunityStandby();
        ~ExtendedCommunityStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress : public ydk::Entity
{
    public:
        CfgLocalAddress();
        ~CfgLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress : public ydk::Entity
{
    public:
        ConnectionLocalAddress();
        ~ConnectionLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_91_ */

