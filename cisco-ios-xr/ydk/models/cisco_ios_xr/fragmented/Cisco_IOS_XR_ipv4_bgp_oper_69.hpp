#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_69_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_69_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_12.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_43.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_58.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_68.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NextHop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NhTunnel : public ydk::Entity
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
        ydk::YLeaf is_bgp_te_registered; //type: boolean
        ydk::YLeaf tunnel_v6_required; //type: boolean
        ydk::YLeaf tunnel_v6_enabled; //type: boolean
        ydk::YLeaf tunnel_notif_first_rcvd; //type: boolean
        ydk::YLeaf tunnel_state_skip_reg; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf tunnel_if_handle; //type: uint32
        ydk::YLeaf last_tunnel_update; //type: uint32
        ydk::YLeaf tunnel_color; //type: uint32
        ydk::YLeaf is_tunnel_color_only; //type: boolean
        ydk::YLeaf tunnel_endpoint_afi; //type: BgpAfi
        ydk::YLeaf flags; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NhTunnel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MdtGroupAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::GwAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::GwAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NhAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::NhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNbrAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::VpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::RcvdLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::RcvdLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2vpnCircuitStatusValue : public ydk::Entity
{
    public:
        L2vpnCircuitStatusValue();
        ~L2vpnCircuitStatusValue();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2vpnCircuitStatusValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo : public ydk::Entity
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
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo : public ydk::Entity
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
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield : public ydk::Entity
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
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield : public ydk::Entity
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
        ydk::YLeaf update_group_afi; //type: uint8
        ydk::YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn : public ydk::Entity
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
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes : public ydk::Entity
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
        ydk::YLeaf is_prefix_sid_label_indexpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_orig_srg_bpresent; //type: boolean
        ydk::YLeaf is_prefix_sids_rv6vpnsi_dpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_unk_tl_vspresent; //type: boolean
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
        class PrefixSidLabelIndex; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidLabelIndex
        class PrefixSidOrigSrgb; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb
        class PrefixSidsRv6vpnsid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid
        class PrefixSidUnkTlVs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidLabelIndex> prefix_sid_label_index;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb> prefix_sid_orig_srgb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid> prefix_sids_rv6vpnsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs> prefix_sid_unk_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap> tunnel_encap;
        ydk::YList community;
        ydk::YList extended_community;
        ydk::YList unknown_attribute;
        ydk::YList cluster;
        ydk::YList l2tpv3_cookie;
        ydk::YList connector_value;
        ydk::YList pmsi_value;
        ydk::YList ls_attr;
        ydk::YList pe_distinguisher_label;
        ydk::YList large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidLabelIndex : public ydk::Entity
{
    public:
        PrefixSidLabelIndex();
        ~PrefixSidLabelIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf label_index; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidLabelIndex


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb : public ydk::Entity
{
    public:
        PrefixSidOrigSrgb();
        ~PrefixSidOrigSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf range_count; //type: uint32
        class Range; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb::Range

        ydk::YList range;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range_end; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidOrigSrgb::Range


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid : public ydk::Entity
{
    public:
        PrefixSidsRv6vpnsid();
        ~PrefixSidsRv6vpnsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf sid_count; //type: uint32
        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid::Sid

        ydk::YList sid;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: uint8
        ydk::YLeaf sid_flags; //type: uint8
        ydk::YLeaf sid_value; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidsRv6vpnsid::Sid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs : public ydk::Entity
{
    public:
        PrefixSidUnkTlVs();
        ~PrefixSidUnkTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_count; //type: uint16
        ydk::YLeaf received_buffer_length; //type: uint32
        class TlVsBuffer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs::TlVsBuffer

        ydk::YList tl_vs_buffer;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs::TlVsBuffer : public ydk::Entity
{
    public:
        TlVsBuffer();
        ~TlVsBuffer();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PrefixSidUnkTlVs::TlVsBuffer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
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
        ydk::YLeaf usable; //type: boolean
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        ydk::YList segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        ydk::YList segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie : public ydk::Entity
{
    public:
        L2tpv3Cookie();
        ~L2tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet : public ydk::Entity
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
        ydk::YLeaf is_prefix_sid_label_indexpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_orig_srg_bpresent; //type: boolean
        ydk::YLeaf is_prefix_sids_rv6vpnsi_dpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_unk_tl_vspresent; //type: boolean
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
        class PrefixSidLabelIndex; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidLabelIndex
        class PrefixSidOrigSrgb; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb
        class PrefixSidsRv6vpnsid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid
        class PrefixSidUnkTlVs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidLabelIndex> prefix_sid_label_index;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb> prefix_sid_orig_srgb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid> prefix_sids_rv6vpnsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs> prefix_sid_unk_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap> tunnel_encap;
        ydk::YList community;
        ydk::YList extended_community;
        ydk::YList unknown_attribute;
        ydk::YList cluster;
        ydk::YList l2tpv3_cookie;
        ydk::YList connector_value;
        ydk::YList pmsi_value;
        ydk::YList ls_attr;
        ydk::YList pe_distinguisher_label;
        ydk::YList large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidLabelIndex : public ydk::Entity
{
    public:
        PrefixSidLabelIndex();
        ~PrefixSidLabelIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf label_index; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidLabelIndex


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb : public ydk::Entity
{
    public:
        PrefixSidOrigSrgb();
        ~PrefixSidOrigSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf range_count; //type: uint32
        class Range; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb::Range

        ydk::YList range;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range_end; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidOrigSrgb::Range


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid : public ydk::Entity
{
    public:
        PrefixSidsRv6vpnsid();
        ~PrefixSidsRv6vpnsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf sid_count; //type: uint32
        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid::Sid

        ydk::YList sid;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: uint8
        ydk::YLeaf sid_flags; //type: uint8
        ydk::YLeaf sid_value; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidsRv6vpnsid::Sid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs : public ydk::Entity
{
    public:
        PrefixSidUnkTlVs();
        ~PrefixSidUnkTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_count; //type: uint16
        ydk::YLeaf received_buffer_length; //type: uint32
        class TlVsBuffer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs::TlVsBuffer

        ydk::YList tl_vs_buffer;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs::TlVsBuffer : public ydk::Entity
{
    public:
        TlVsBuffer();
        ~TlVsBuffer();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PrefixSidUnkTlVs::TlVsBuffer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
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
        ydk::YLeaf usable; //type: boolean
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        ydk::YList segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        ydk::YList segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie : public ydk::Entity
{
    public:
        L2tpv3Cookie();
        ~L2tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp : public ydk::Entity
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
        class L2vpnVplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress
        class L2vpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress : public ydk::Entity
{
    public:
        L2vpnVplsAddress();
        ~L2vpnVplsAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress : public ydk::Entity
{
    public:
        L2vpnMspwAddress();
        ~L2vpnMspwAddress();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut : public ydk::Entity
{
    public:
        AttributesAfterPolicyOut();
        ~AttributesAfterPolicyOut();

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
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes : public ydk::Entity
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
        ydk::YLeaf is_prefix_sid_label_indexpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_orig_srg_bpresent; //type: boolean
        ydk::YLeaf is_prefix_sids_rv6vpnsi_dpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_unk_tl_vspresent; //type: boolean
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
        class PrefixSidLabelIndex; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidLabelIndex
        class PrefixSidOrigSrgb; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb
        class PrefixSidsRv6vpnsid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid
        class PrefixSidUnkTlVs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster
        class L2tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidLabelIndex> prefix_sid_label_index;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb> prefix_sid_orig_srgb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid> prefix_sids_rv6vpnsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs> prefix_sid_unk_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap> tunnel_encap;
        ydk::YList community;
        ydk::YList extended_community;
        ydk::YList unknown_attribute;
        ydk::YList cluster;
        ydk::YList l2tpv3_cookie;
        ydk::YList connector_value;
        ydk::YList pmsi_value;
        ydk::YList ls_attr;
        ydk::YList pe_distinguisher_label;
        ydk::YList large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidLabelIndex : public ydk::Entity
{
    public:
        PrefixSidLabelIndex();
        ~PrefixSidLabelIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf label_index; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidLabelIndex


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb : public ydk::Entity
{
    public:
        PrefixSidOrigSrgb();
        ~PrefixSidOrigSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf range_count; //type: uint32
        class Range; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb::Range

        ydk::YList range;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range_end; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidOrigSrgb::Range


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid : public ydk::Entity
{
    public:
        PrefixSidsRv6vpnsid();
        ~PrefixSidsRv6vpnsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf sid_count; //type: uint32
        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid::Sid

        ydk::YList sid;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: uint8
        ydk::YLeaf sid_flags; //type: uint8
        ydk::YLeaf sid_value; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidsRv6vpnsid::Sid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs : public ydk::Entity
{
    public:
        PrefixSidUnkTlVs();
        ~PrefixSidUnkTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv_count; //type: uint16
        ydk::YLeaf received_buffer_length; //type: uint32
        class TlVsBuffer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs::TlVsBuffer

        ydk::YList tl_vs_buffer;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs::TlVsBuffer : public ydk::Entity
{
    public:
        TlVsBuffer();
        ~TlVsBuffer();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PrefixSidUnkTlVs::TlVsBuffer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
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
        ydk::YLeaf usable; //type: boolean
        class BindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        ydk::YList segment_list;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        ydk::YList segment;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie : public ydk::Entity
{
    public:
        L2tpv3Cookie();
        ~L2tpv3Cookie();

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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet : public ydk::Entity
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
        ydk::YLeaf is_prefix_sid_label_indexpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_orig_srg_bpresent; //type: boolean
        ydk::YLeaf is_prefix_sids_rv6vpnsi_dpresent; //type: boolean
        ydk::YLeaf is_prefix_sid_unk_tl_vspresent; //type: boolean
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
        class PrefixSidLabelIndex; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidLabelIndex
        class PrefixSidOrigSrgb; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb
        class PrefixSidsRv6vpnsid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid
        class PrefixSidUnkTlVs; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidUnkTlVs
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster
        class L2tpv3Cookie; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidLabelIndex> prefix_sid_label_index;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb> prefix_sid_orig_srgb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid> prefix_sids_rv6vpnsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidUnkTlVs> prefix_sid_unk_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::TunnelEncap> tunnel_encap;
        ydk::YList community;
        ydk::YList extended_community;
        ydk::YList unknown_attribute;
        ydk::YList cluster;
        ydk::YList l2tpv3_cookie;
        ydk::YList connector_value;
        ydk::YList pmsi_value;
        ydk::YList ls_attr;
        ydk::YList pe_distinguisher_label;
        ydk::YList large_community;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidLabelIndex : public ydk::Entity
{
    public:
        PrefixSidLabelIndex();
        ~PrefixSidLabelIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf label_index; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidLabelIndex


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb : public ydk::Entity
{
    public:
        PrefixSidOrigSrgb();
        ~PrefixSidOrigSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf range_count; //type: uint32
        class Range; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb::Range

        ydk::YList range;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range_end; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidOrigSrgb::Range


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid : public ydk::Entity
{
    public:
        PrefixSidsRv6vpnsid();
        ~PrefixSidsRv6vpnsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf sid_count; //type: uint32
        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid::Sid

        ydk::YList sid;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: uint8
        ydk::YLeaf sid_flags; //type: uint8
        ydk::YLeaf sid_value; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PrefixSidsRv6vpnsid::Sid


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_69_ */

