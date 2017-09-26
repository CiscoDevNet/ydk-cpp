#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_60_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_60_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_58.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_59.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhAddr : public ydk::Entity
{
    public:
        NhAddr();
        ~NhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpV4V6Len
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhTunnel : public ydk::Entity
{
    public:
        NhTunnel();
        ~NhTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_type; //type: BgpTunnel
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf is_tunnel_info_stale; //type: boolean
        ydk::YLeaf is_tunnel_registered; //type: boolean
        ydk::YLeaf tunnel_v6_required; //type: boolean
        ydk::YLeaf tunnel_v6_enabled; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf tunnel_if_handle; //type: uint32
        ydk::YLeaf last_tunnel_update; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhTunnel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo : public ydk::Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::RcvdLabel : public ydk::Entity
{
    public:
        RcvdLabel();
        ~RcvdLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::RcvdLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr : public ydk::Entity
{
    public:
        VpnNexthopAddr();
        ~VpnNexthopAddr();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo : public ydk::Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge : public ydk::Entity
{
    public:
        VersionAge();
        ~VersionAge();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp : public ydk::Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds : public ydk::Entity
{
    public:
        NetworkLookupAllRds();
        ~NetworkLookupAllRds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkLookupAllRd; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd> > network_lookup_all_rd;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd : public ydk::Entity
{
    public:
        NetworkLookupAllRd();
        ~NetworkLookupAllRd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_prefix; //type: string
        class NetworkLookupRds; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds> network_lookup_rds;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds : public ydk::Entity
{
    public:
        NetworkLookupRds();
        ~NetworkLookupRds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkLookupRd; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd> > network_lookup_rd;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd : public ydk::Entity
{
    public:
        NetworkLookupRd();
        ~NetworkLookupRd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: string
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf has_inconsistent_paths; //type: boolean
        ydk::YLeaf is_net_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_net_ldp_signaled; //type: boolean
        ydk::YLeaf table_version; //type: uint32
        ydk::YLeaf table_brib_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf has_local_label; //type: boolean
        ydk::YLeaf net_local_label; //type: uint32
        ydk::YLeaf net_local_label_rewrite; //type: boolean
        ydk::YLeaf net_local_label_srgb; //type: boolean
        ydk::YLeaf has_lbl_retained; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf net_flags; //type: uint32
        ydk::YLeaf net_extended_flags; //type: uint32
        ydk::YLeaf net_multipath; //type: boolean
        ydk::YLeaf net_eibgp_multipath; //type: boolean
        ydk::YLeaf net_backup_available; //type: boolean
        ydk::YLeaf net_backup_label_rewrite_available; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf gateway_array; //type: uint32
        ydk::YLeaf resilient_nexthop_set; //type: uint32
        ydk::YLeaf is_permanent_network; //type: boolean
        ydk::YLeaf num_of_path; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf bit; //type: uint16
        ydk::YLeaf flags; //type: uint8
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield
        class LocalProcessInstancePath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath
        class ActiveProcessInstancePath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath
        class LocalPathElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement
        class ActivePathElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement> > active_path_element;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath> > active_process_instance_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement> > local_path_element;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath> > local_process_instance_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge> version_age;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp> version_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement : public ydk::Entity
{
    public:
        ActivePathElement();
        ~ActivePathElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pelem_path_id; //type: uint32
        ydk::YLeaf pelem_version; //type: uint32
        ydk::YLeaf pelem_flags; //type: uint32
        ydk::YLeaf pelem_gw_metric; //type: uint32
        ydk::YLeaf pelem_path_flags; //type: uint64
        ydk::YLeaf pelem_path_peer_path_id; //type: uint32
        ydk::YLeaf pelem_table_attr_version; //type: uint32
        ydk::YLeaf pelem_path_table_attr_version; //type: uint32
        ydk::YLeaf pelem_no_bestpath_table_attr_version; //type: uint32
        ydk::YLeaf pelem_no_addpath_table_attr_version; //type: uint32
        ydk::YLeaf is_perm_path_pelem; //type: boolean
        class PelemPathNexthop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhTunnel
        class PelemPathNeighborAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr> pelem_path_neighbor_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop> pelem_path_nexthop;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhTunnel : public ydk::Entity
{
    public:
        NhTunnel();
        ~NhTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_type; //type: BgpTunnel
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf is_tunnel_info_stale; //type: boolean
        ydk::YLeaf is_tunnel_registered; //type: boolean
        ydk::YLeaf tunnel_v6_required; //type: boolean
        ydk::YLeaf tunnel_v6_enabled; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf tunnel_if_handle; //type: uint32
        ydk::YLeaf last_tunnel_update; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhTunnel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr : public ydk::Entity
{
    public:
        PelemPathNeighborAddr();
        ~PelemPathNeighborAddr();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop : public ydk::Entity
{
    public:
        PelemPathNexthop();
        ~PelemPathNexthop();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath : public ydk::Entity
{
    public:
        ActiveProcessInstancePath();
        ~ActiveProcessInstancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_path; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf process_instance_id; //type: uint8
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf label_o_or_version; //type: uint32
        ydk::YLeaf label_fail; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf source_route_distinguisher; //type: string
        ydk::YLeaf prefix_version; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_vrf_name; //type: string
        ydk::YLeaf srcaf_name; //type: BgpAfi
        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr
        class PathInformation; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn> attributes_after_policy_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation> path_information;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn : public ydk::Entity
{
    public:
        AttributesAfterPolicyIn();
        ~AttributesAfterPolicyIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_as_path2_byte; //type: boolean
        ydk::YLeaf is_application_gateway_present; //type: boolean
        ydk::YLeaf is_attr_set_present; //type: boolean
        ydk::YLeaf set_aigp_inbound_igp; //type: boolean
        ydk::YLeaf set_aigp_inbound_metric; //type: boolean
        ydk::YLeaf is_rnh_present; //type: boolean
        ydk::YLeaf is_ribrnh_present; //type: boolean
        ydk::YLeaf attribute_key_number; //type: uint32
        ydk::YLeaf attribute_reuse_id_config; //type: boolean
        ydk::YLeaf attribute_reuse_id_max_id; //type: uint32
        ydk::YLeaf attribute_reuse_id_node; //type: uint32
        ydk::YLeaf attribute_reuse_id_current; //type: uint32
        ydk::YLeaf attribute_reuse_id_keys; //type: uint32
        ydk::YLeaf attribute_reuse_id_recover_sec; //type: uint32
        ydk::YLeaf vpn_distinguisher; //type: uint32
        ydk::YLeaf rnh_type; //type: uint16
        ydk::YLeaf rnh_len; //type: uint8
        ydk::YLeaf rnh_addr_len; //type: uint32
        ydk::YLeaf ribrnh_table; //type: uint32
        ydk::YLeaf ribrnh_mac; //type: string
        ydk::YLeaf ribrnhip_table; //type: uint32
        ydk::YLeaf ribrnh_vni; //type: uint32
        ydk::YLeaf ribrnh_encap; //type: uint8
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr> rnh_addr;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet : public ydk::Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity> > large_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes : public ydk::Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_metric_present; //type: boolean
        ydk::YLeaf is_local_pref_present; //type: boolean
        ydk::YLeaf is_atomic_aggregate_present; //type: boolean
        ydk::YLeaf is_aggregator_present; //type: boolean
        ydk::YLeaf is_origin_present; //type: boolean
        ydk::YLeaf is_as_path_present; //type: boolean
        ydk::YLeaf is_community_present; //type: boolean
        ydk::YLeaf is_extended_community_present; //type: boolean
        ydk::YLeaf is_ssa_present; //type: boolean
        ydk::YLeaf is_connector_present; //type: boolean
        ydk::YLeaf is_pmsi_present; //type: boolean
        ydk::YLeaf is_pppmp_present; //type: boolean
        ydk::YLeaf is_aigp_present; //type: boolean
        ydk::YLeaf is_pe_distinguisher_label_present; //type: boolean
        ydk::YLeaf is_ls_attribute_present; //type: boolean
        ydk::YLeaf is_label_index_present; //type: boolean
        ydk::YLeaf neighbor_as; //type: uint32
        ydk::YLeaf aggregator_as; //type: uint32
        ydk::YLeaf aggregator_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf origin; //type: uint16
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf extended_community_flags; //type: uint8
        ydk::YLeaf originator; //type: string
        ydk::YLeaf l2tpv3_session_id; //type: uint32
        ydk::YLeaf connector_type; //type: uint16
        ydk::YLeaf aigp_metric_value; //type: uint64
        ydk::YLeaf pmsi_type; //type: uint16
        ydk::YLeaf pmsi_flags; //type: uint8
        ydk::YLeaf pmsi_label; //type: uint32
        ydk::YLeaf ppm_pvalue; //type: uint32
        ydk::YLeaf is_large_community_present; //type: boolean
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity> > large_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public ydk::Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity : public ydk::Entity
{
    public:
        LargeCommunity();
        ~LargeCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_admin; //type: uint32
        ydk::YLeaf local_data1; //type: uint32
        ydk::YLeaf local_data2; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap : public ydk::Entity
{
    public:
        TunnelEncap();
        ~TunnelEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
{
    public:
        SrPolicy();
        ~SrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_encap_type; //type: uint16
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf request_state; //type: BgpSrpolicyReqState
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
{
    public:
        AllocatedBindingSid();
        ~AllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpBindingSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight; //type: uint8
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp : public ydk::Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr : public ydk::Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpRnhAddrLen
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::NeighborAddressXr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation : public ydk::Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_type; //type: BgpRoute1
        ydk::YLeaf is_path_valid; //type: boolean
        ydk::YLeaf is_path_damped; //type: boolean
        ydk::YLeaf is_path_history_held; //type: boolean
        ydk::YLeaf is_internal_path; //type: boolean
        ydk::YLeaf is_best_path; //type: boolean
        ydk::YLeaf is_as_best; //type: boolean
        ydk::YLeaf is_spkr_as_best; //type: boolean
        ydk::YLeaf is_partial_best; //type: boolean
        ydk::YLeaf is_aggregation_suppressed; //type: boolean
        ydk::YLeaf is_import_dampened; //type: boolean
        ydk::YLeaf is_import_suspect; //type: boolean
        ydk::YLeaf is_path_not_advertised; //type: boolean
        ydk::YLeaf is_path_not_advertised_to_ebgps; //type: boolean
        ydk::YLeaf is_path_advertised_local_as_only; //type: boolean
        ydk::YLeaf is_path_from_route_reflector; //type: boolean
        ydk::YLeaf is_path_received_only; //type: boolean
        ydk::YLeaf is_received_path_not_modified; //type: boolean
        ydk::YLeaf is_path_locally_sourced; //type: boolean
        ydk::YLeaf is_path_local_aggregate; //type: boolean
        ydk::YLeaf is_path_from_network_command; //type: boolean
        ydk::YLeaf is_path_from_redistribute_command; //type: boolean
        ydk::YLeaf is_path_imported; //type: boolean
        ydk::YLeaf is_path_reoriginated; //type: boolean
        ydk::YLeaf is_path_reoriginated_stitching; //type: boolean
        ydk::YLeaf is_path_vpn_only; //type: boolean
        ydk::YLeaf is_path_from_confederation_peer; //type: boolean
        ydk::YLeaf is_path_synced_with_igp; //type: boolean
        ydk::YLeaf is_path_multipath; //type: boolean
        ydk::YLeaf is_path_imp_candidate; //type: boolean
        ydk::YLeaf is_path_stale; //type: boolean
        ydk::YLeaf is_path_long_lived_stale; //type: boolean
        ydk::YLeaf is_path_backup; //type: boolean
        ydk::YLeaf is_path_backup_protect_multipath; //type: boolean
        ydk::YLeaf is_path_best_external; //type: boolean
        ydk::YLeaf is_path_additional_path; //type: boolean
        ydk::YLeaf is_path_nexthop_discarded; //type: boolean
        ydk::YLeaf rcvd_label_count; //type: uint32
        ydk::YLeaf has_local_net_label; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf path_weight; //type: uint16
        ydk::YLeaf neighbor_router_id; //type: string
        ydk::YLeaf has_mdt_group_addr; //type: boolean
        ydk::YLeaf l2vpn_size; //type: uint32
        ydk::YLeaf l2vpn_evpn_esi; //type: string
        ydk::YLeaf has_gw_addr; //type: boolean
        ydk::YLeaf has_nh_addr; //type: boolean
        ydk::YLeaf has_second_label; //type: boolean
        ydk::YLeaf second_label; //type: uint32
        ydk::YLeaf path_flap_count; //type: uint32
        ydk::YLeaf seconds_since_first_flap; //type: uint32
        ydk::YLeaf time_to_unsuppress; //type: uint32
        ydk::YLeaf dampen_penalty; //type: uint32
        ydk::YLeaf halflife_time; //type: uint32
        ydk::YLeaf suppress_penalty; //type: uint32
        ydk::YLeaf reuse_value; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf best_path_comp_stage; //type: BgpBpStage
        ydk::YLeaf best_path_id_comp_winner; //type: uint32
        ydk::YLeaf path_flags; //type: uint64
        ydk::YLeaf path_import_flags; //type: uint32
        ydk::YLeaf best_path_id; //type: uint32
        ydk::YLeaf local_path_id; //type: uint32
        ydk::YLeaf rcvd_path_id; //type: uint32
        ydk::YLeaf path_table_version; //type: uint32
        ydk::YLeaf advertisedto_pe; //type: boolean
        ydk::YLeaf rib_failed; //type: boolean
        ydk::YLeaf sn_rpki_origin_as_validity; //type: uint8
        ydk::YLeaf show_rpki_origin_as_validity; //type: boolean
        ydk::YLeaf ibgp_signaled_validity; //type: boolean
        ydk::YLeaf rpki_origin_as_validation_disabled; //type: boolean
        ydk::YLeaf accept_own_path; //type: boolean
        ydk::YLeaf accept_own_self_originated_p_ath; //type: boolean
        ydk::YLeaf aigp_metric; //type: uint64
        ydk::YLeaf mvpn_sfs_path; //type: boolean
        ydk::YLeaf fspec_invalid_path; //type: boolean
        ydk::YLeaf has_mvpn_nbr_addr; //type: boolean
        ydk::YLeaf has_mvpn_nexthop_addr; //type: boolean
        ydk::YLeaf has_mvpn_pmsi; //type: boolean
        ydk::YLeaf mvpn_pmsi_type; //type: uint16
        ydk::YLeaf mvpn_pmsi_flags; //type: uint8
        ydk::YLeaf mvpn_pmsi_label; //type: uint32
        ydk::YLeaf has_mvpn_extcomm; //type: boolean
        ydk::YLeaf mvpn_path_flags; //type: uint16
        ydk::YLeaf local_nh; //type: boolean
        ydk::YLeaf rt_set_limit_enabled; //type: boolean
        ydk::YLeaf path_rt_set_id; //type: uint32
        ydk::YLeaf path_rt_set_route_count; //type: uint32
        ydk::YLeaf is_path_af_install_eligible; //type: boolean
        ydk::YLeaf is_permanent_path; //type: boolean
        ydk::YLeaf graceful_shutdown; //type: boolean
        ydk::YLeaf labeled_unicast_safi_path; //type: boolean
        ydk::YLeaf vpn_path_flags; //type: uint8
        ydk::YLeaf has_vpn_nexthop_addr; //type: boolean
        ydk::YLeaf is_orig_src_rd_present; //type: boolean
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf route_distinguisher; //type: string
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NhTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr
        class GwAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::GwAddr
        class NhAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NhAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr
        class VpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr
        class RcvdLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::RcvdLabel
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity> > extended_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::GwAddr> gw_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue> > mvpn_pmsi_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NhAddr> nh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NhTunnel> nh_tunnel;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::RcvdLabel> > rcvd_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr> vpn_nexthop_addr;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield : public ydk::Entity
{
    public:
        AddPathOrrBitfield();
        ~AddPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner : public ydk::Entity
{
    public:
        BestPathCompWinner();
        ~BestPathCompWinner();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield : public ydk::Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix : public ydk::Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

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
        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::GwAddr : public ydk::Entity
{
    public:
        GwAddr();
        ~GwAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpV4V6Len
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::GwAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue : public ydk::Entity
{
    public:
        L2VpnCircuitStatusValue();
        ~L2VpnCircuitStatusValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo : public ydk::Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor; //type: boolean
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr : public ydk::Entity
{
    public:
        MdtGroupAddr();
        ~MdtGroupAddr();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr : public ydk::Entity
{
    public:
        MvpnNbrAddr();
        ~MvpnNbrAddr();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr : public ydk::Entity
{
    public:
        MvpnNexthopAddr();
        ~MvpnNexthopAddr();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue : public ydk::Entity
{
    public:
        MvpnPmsiValue();
        ~MvpnPmsiValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_60_ */

