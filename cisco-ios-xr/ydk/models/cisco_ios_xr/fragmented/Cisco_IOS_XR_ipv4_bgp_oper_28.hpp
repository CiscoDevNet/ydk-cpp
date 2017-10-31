#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_28_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_26.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_27.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhTunnel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::GwAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::GwAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::NhAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::RcvdLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::RcvdLabel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::L2VpnCircuitStatusValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo : public ydk::Entity
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
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo : public ydk::Entity
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
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield : public ydk::Entity
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
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield : public ydk::Entity
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
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn : public ydk::Entity
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
        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr> rnh_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes : public ydk::Entity
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
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy : public ydk::Entity
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
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet : public ydk::Entity
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
        class TunnelEncap; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap
        class Community; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class LargeCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap> tunnel_encap;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity> > large_community;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap : public ydk::Entity
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

        class SrPolicy; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy> sr_policy;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy : public ydk::Entity
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
        class BindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid
        class AllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid
        class SegmentList; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid> allocated_binding_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList> > segment_list;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList : public ydk::Entity
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
        class Segment; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment> > segment;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LargeCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement : public ydk::Entity
{
    public:
        LocalPathElement();
        ~LocalPathElement();

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
        class PelemPathNexthop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::NhTunnel
        class PelemPathNeighborAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop> pelem_path_nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr> pelem_path_neighbor_addr;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::NhTunnel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::NhTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement : public ydk::Entity
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
        class PelemPathNexthop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop
        class NhTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel
        class PelemPathNeighborAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop> pelem_path_nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel> nh_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr> pelem_path_neighbor_addr;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::NhTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors : public ydk::Entity
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

        class UpdateGenerationNeighbor; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor> > update_generation_neighbor;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor : public ydk::Entity
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
        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress
        class LastSubGroupAddTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp
        class LastSubGroupRemoveTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp
        class LastFilterGroupAddTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp
        class LastFilterGroupRemoveTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp
        class FirstDefaultOriginateTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp
        class LastDefaultOriginateTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp
        class LastUpdateGroupStartTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp
        class LastUpdateGroupExpiryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp
        class FirstUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp
        class LastUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp
        class LastRefreshUpdateQueuedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp
        class FirstUpdateWriteTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp
        class LastUpdateWriteTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp
        class LastRefreshUpdateWriteTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress> update_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp> last_sub_group_add_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp> last_sub_group_remove_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp> last_filter_group_add_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp> last_filter_group_remove_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp> first_default_originate_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp> last_default_originate_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp> last_update_group_start_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp> last_update_group_expiry_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp> first_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp> last_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp> last_refresh_update_queued_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp> first_update_write_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp> last_update_write_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp> last_refresh_update_write_timestamp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress : public ydk::Entity
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
        class L2VpnVplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnVplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupAddTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastSubGroupRemoveTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupAddTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastFilterGroupRemoveTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstDefaultOriginateTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastDefaultOriginateTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupStartTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateGroupExpiryTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateQueuedTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::FirstUpdateWriteTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastUpdateWriteTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp : public ydk::Entity
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

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors::UpdateGenerationNeighbor::LastRefreshUpdateWriteTimestamp


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_28_ */

