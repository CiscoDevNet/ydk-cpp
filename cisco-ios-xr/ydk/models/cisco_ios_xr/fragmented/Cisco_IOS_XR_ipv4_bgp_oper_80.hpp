#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_80_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_80_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_72.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_79.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield : public ydk::Entity
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
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield : public ydk::Entity
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
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn : public ydk::Entity
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
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes : public ydk::Entity
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
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
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
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet : public ydk::Entity
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
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
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
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks : public ydk::Entity
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

        class SourcedNetwork; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork> > sourced_network;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork : public ydk::Entity
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
        class SourcedPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix> sourced_prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix : public ydk::Entity
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
        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups : public ydk::Entity
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

        class UpdateGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup> > update_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup : public ydk::Entity
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
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor
        class UpdateSubGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics> performance_statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup> > update_sub_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup : public ydk::Entity
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
        class UpdateFilterGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup> > update_filter_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor> > neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup : public ydk::Entity
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
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor> > neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups : public ydk::Entity
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

        class UpdateGenerationSubGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup> > update_generation_sub_group;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup : public ydk::Entity
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
        class CreationTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp
        class LastMergeTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp
        class FirstUpdateWalkStartTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp
        class FirstUpdateWalkEndTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp
        class LastUpdateWalkStartTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp
        class LastUpdateWalkEndTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp
        class LastUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp> creation_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp> last_merge_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp> first_update_walk_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp> first_update_walk_end_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp> last_update_walk_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp> last_update_walk_end_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp> last_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics : public ydk::Entity
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
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies : public ydk::Entity
{
    public:
        NextHopAddressFamilies();
        ~NextHopAddressFamilies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHopAddressFamily; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily> > next_hop_address_family;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily : public ydk::Entity
{
    public:
        NextHopAddressFamily();
        ~NextHopAddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_af_name; //type: BgpAddressFamily
        class NextHopAfVrfAf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf
        class NextHopAfs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf> next_hop_af_vrf_af;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs> next_hop_afs;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf : public ydk::Entity
{
    public:
        NextHopAfVrfAf();
        ~NextHopAfVrfAf();

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
        ydk::YLeaf gwaf_name; //type: BgpAfi
        ydk::YLeaf total_nexthops; //type: uint32
        ydk::YLeaf critical_trigger_delay; //type: uint32
        ydk::YLeaf non_critical_trigger_delay; //type: uint32
        ydk::YLeaf table_active; //type: boolean
        ydk::YLeaf nh_rib_up; //type: boolean
        ydk::YLeaf nh_rib_version; //type: uint32
        ydk::YLeaf nh_nexthop_version; //type: uint32
        ydk::YLeaf nh_table_id; //type: uint32
        ydk::YLeaf epe_table_version; //type: uint32
        ydk::YLeaf epe_label_version; //type: uint32
        ydk::YLeaf epe_downloaded_version; //type: uint32
        ydk::YLeaf epe_standby_version; //type: uint32
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics> performance_statistics;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics : public ydk::Entity
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

        ydk::YLeaf critical_notf_count; //type: uint32
        ydk::YLeaf noncritical_notf_count; //type: uint32
        ydk::YLeaf last_notf_bestpath_deletes; //type: uint32
        ydk::YLeaf last_notf_bestpath_changes; //type: uint32
        ydk::YLeaf nh_sync_reg_calls; //type: uint32
        ydk::YLeaf nha_sync_reg_calls; //type: uint32
        ydk::YLeaf nha_sync_un_reg_calls; //type: uint32
        ydk::YLeaf nh_pending_registrations; //type: uint32
        ydk::YLeaf nh_peak_registrations; //type: uint32
        ydk::YLeaf nh_batch_finish_calls; //type: uint32
        ydk::YLeaf nh_flush_timer_calls; //type: uint32
        ydk::YLeaf nh_last_sync_reg_ts; //type: uint32
        ydk::YLeaf nh_last_a_sync_reg_ts; //type: uint32
        ydk::YLeaf nh_last_a_sync_un_reg_ts; //type: uint32
        ydk::YLeaf nh_last_batch_finish_ts; //type: uint32
        ydk::YLeaf nh_last_flush_timer_ts; //type: uint32
        ydk::YLeaf nhrib_update_calls; //type: uint32
        ydk::YLeaf nhrib_update_time; //type: uint32
        ydk::YLeaf nexthops_sent_to_rib; //type: uint32
        ydk::YLeaf nexthops_resent_to_rib; //type: uint32
        ydk::YLeaf nexthops_removed_from_rib; //type: uint32
        ydk::YLeaf rib_sync_registers_failed; //type: uint32
        ydk::YLeaf riba_sync_registers_failed; //type: uint32
        ydk::YLeaf ribnh_reg_failed_for_no_tbl_id; //type: uint32
        ydk::YLeaf ribnh_reg_failed_for_no_rib_conn; //type: uint32
        ydk::YLeaf tunnel_walk_nh_not_found; //type: uint32
        ydk::YLeaf tunnel_walk_gw_not_found; //type: uint32
        ydk::YLeaf tunnel_walk_backup_creates; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs : public ydk::Entity
{
    public:
        NextHopAfs();
        ~NextHopAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHopAf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf> > next_hop_af;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf : public ydk::Entity
{
    public:
        NextHopAf();
        ~NextHopAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf attribute_set; //type: string
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf rib_nexthop_id; //type: uint32
        ydk::YLeaf nexthop_pending_registration; //type: uint8
        ydk::YLeaf nexthop_reference_count; //type: uint32
        ydk::YLeaf nh_reference_count_total; //type: uint32
        ydk::YLeaf nh_first_hop_if_handle; //type: string
        ydk::YLeaf nexthop_aigp_metric; //type: uint32
        ydk::YLeaf nexthop_gateway_reachable; //type: boolean
        ydk::YLeaf nexthop_gateway_prefix_connected; //type: boolean
        ydk::YLeaf nexthop_gateway_prefix_length; //type: uint32
        class NexthopAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel
        class NexthopInternalInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo
        class NexthopGatewayInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress> nexthop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo> nexthop_internal_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo> > nexthop_gateway_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress> > neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress : public ydk::Entity
{
    public:
        NexthopAddress();
        ~NexthopAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo : public ydk::Entity
{
    public:
        NexthopInternalInfo();
        ~NexthopInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthop_id; //type: uint32
        ydk::YLeaf nexthop_version; //type: uint32
        ydk::YLeaf nexthop_flags; //type: uint32
        ydk::YLeaf nexthop_if_handle; //type: uint32
        ydk::YLeaf nexthop_af_user_bits; //type: uint32
        ydk::YLeaf nexthop_label; //type: uint32
        ydk::YLeaf gateway_flags; //type: uint32
        class NexthopAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress
        class NexthopMetrice; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice
        class NexthopRefcount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount
        class NexthopGatewayInternalInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress> nexthop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice> > nexthop_metrice;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount> > nexthop_refcount;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo> > nexthop_gateway_internal_info;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress : public ydk::Entity
{
    public:
        NexthopAddress();
        ~NexthopAddress();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice : public ydk::Entity
{
    public:
        NexthopMetrice();
        ~NexthopMetrice();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount : public ydk::Entity
{
    public:
        NexthopRefcount();
        ~NexthopRefcount();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo : public ydk::Entity
{
    public:
        NexthopGatewayInternalInfo();
        ~NexthopGatewayInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_flags; //type: uint32
        ydk::YLeaf registration_type; //type: BgpNhValidate
        ydk::YLeaf registration_since; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo : public ydk::Entity
{
    public:
        NexthopGatewayInfo();
        ~NexthopGatewayInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthop_route_prefix_length; //type: uint8
        ydk::YLeaf nexthop_route_protocol; //type: string
        ydk::YLeaf nexthop_route_path_count; //type: uint32
        ydk::YLeaf nexthop_af_invalid_bits; //type: uint16
        ydk::YLeaf nexthop_status; //type: uint8
        ydk::YLeaf nexthop_tableid; //type: uint64
        ydk::YLeaf nexthop_metric; //type: uint32
        ydk::YLeaf last_event_type; //type: BgpNhEvent
        ydk::YLeaf last_update_type; //type: BgpNhUpdate
        ydk::YLeaf critical_events; //type: uint32
        ydk::YLeaf non_critical_events; //type: uint32
        ydk::YLeaf last_event_since; //type: uint32
        ydk::YLeaf last_rib_update; //type: uint32
        ydk::YLeaf nexthop_mpls_enabled; //type: boolean
        ydk::YLeaf nexthop_mpls_interfaces; //type: uint32
        ydk::YLeaf nexthop_mpls_label; //type: uint32
        class NexthopRoute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute
        class NexthopRoutePath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute> nexthop_route;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath> > nexthop_route_path;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute : public ydk::Entity
{
    public:
        NexthopRoute();
        ~NexthopRoute();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath : public ydk::Entity
{
    public:
        NexthopRoutePath();
        ~NexthopRoutePath();

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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters : public ydk::Entity
{
    public:
        RtSetCounters();
        ~RtSetCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSetCounter; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter> > rt_set_counter;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter : public ydk::Entity
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
        class RouteTargetSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet> route_target_set;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet : public ydk::Entity
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
        class RtSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet> > rt_set;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths : public ydk::Entity
{
    public:
        BmpPaths();
        ~BmpPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BmpPath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath> > bmp_path;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath : public ydk::Entity
{
    public:
        BmpPath();
        ~BmpPath();

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
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf af_name; //type: BgpAfi
        ydk::YLeaf bmp_net_flags; //type: uint32
        ydk::YLeaf bmp_net_version; //type: uint32
        ydk::YLeaf num_of_path; //type: uint32
        ydk::YLeaf has_local_label; //type: boolean
        ydk::YLeaf net_local_label; //type: uint32
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionAge
        class BmpPath_; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix> bgp_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp> version_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::VersionAge> version_age;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BmpPath_> > bmp_path;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix : public ydk::Entity
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
        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_80_ */

